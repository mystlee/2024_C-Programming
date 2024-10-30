#!/bin/bash

# 스크립트가 하나 이상의 인자를 받았는지 확인
if [ "$#" -lt 1 ]; then
    echo "사용법: $0 <source_file1.c> [source_file2.c ...]"
    exit 1
fi

# 모든 인자에 대해 반복
for SOURCE_FILE in "$@"; do
    # 파일이 존재하는지 확인
    if [ ! -f "$SOURCE_FILE" ]; then
        echo "오류: 파일 '$SOURCE_FILE'이(가) 존재하지 않습니다."
        continue
    fi

    # 파일 확장자가 .c인지 확인
    if [[ "$SOURCE_FILE" != *.c ]]; then
        echo "오류: '$SOURCE_FILE'은(는) C 소스 파일이 아닙니다."
        continue
    fi

    # 파일의 디렉토리 경로 추출
    DIR_PATH=$(dirname "$SOURCE_FILE")
    
    # 파일 이름에서 확장자를 제외한 기본 이름 추출
    BASENAME=$(basename "$SOURCE_FILE" .c)
    
    # 실행 파일 경로 설정 (소스 파일과 같은 디렉토리에 생성)
    EXECUTABLE_PATH="$DIR_PATH/$BASENAME"

    echo "컴파일 중: $SOURCE_FILE..."
    
    # C 소스 파일 컴파일 (경고 메시지 활성화)
    gcc -Wall "$SOURCE_FILE" -o "$EXECUTABLE_PATH"

    # 컴파일이 성공했는지 확인
    if [ $? -ne 0 ]; then
        echo "오류: '$SOURCE_FILE'의 컴파일에 실패했습니다."
        continue
    fi

    echo "실행 중: $EXECUTABLE_PATH"
    
    # 컴파일된 프로그램 실행
    "$EXECUTABLE_PATH"

    # 실행 후 실행 파일 제거
    rm "$EXECUTABLE_PATH"

    echo "-----------------------------------"
done

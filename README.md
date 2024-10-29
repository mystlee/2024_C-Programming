## How to run it?   

### Replit에서 어떻게 하면 실행해볼 수 있을까?

1. chapter 또는 workspace 폴더 생성 (chapter마다 문제 풀이를 원한다면 chapter 추천!)
2. 해당 chapter 폴더에서 c코드 작성
   - 예시)   
├── chapter13   
│   ├── problem1.c   
│   ├── problem2.c   
│   ├── problem3.c   
│   └── problem4.c   
├── main-debug   
├── Makefile   
├── replit.nix   
└── run.sh   
3. tool 중에 shell을 클릭하여, 터미널 접속
4. 터미널에서 ./run.sh 다음에 작성된 c코드 입력
   - 예시)
     $ ./run.sh chpater13/problem1.c

<img src=“./replit_example.png” width=“80%” height=“80%”>


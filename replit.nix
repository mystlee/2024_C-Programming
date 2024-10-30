{ pkgs }: {
	deps = [
   pkgs.tree
   pkgs.vim
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}
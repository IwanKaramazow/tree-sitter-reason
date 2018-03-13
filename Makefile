grammar:
	./node_modules/.bin/tree-sitter generate
	mv ./src/tree_sitter/parser.h ./languages/reason_parser.h	
	mv ./src/parser.c ./languages/reason_parser.c	
	rm -rf ./src/grammar.json
	rm -rf ./src/binding.cc
	rm -rf ./src/tree_sitter
	rm -rf ./index.js
	rm -rf ./binding.gyp

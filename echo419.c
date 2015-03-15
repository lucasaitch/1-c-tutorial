#include <stdio.h>

int main(int argc, char **argv){
	
	if (argc != 2){ 
		printf("usage: %s argument\n", argv[0]);
	}
	
	else {
		printf("%s\n", argv[1]);
	
	}
		
	return 0;

}

#include <stdio.h>

int main(void){
	char input[128];
	
	while (*input != '0'){
	
		scanf("%127s", input);
		printf("%s\n", input);
		}
	
	return 0;
}
	

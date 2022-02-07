#include<stdio.h>
#include"strfind.h"

#define MAXLEN 1048576

int main(){
	struct srchstruct strstruct;
	char str[MAXLEN];
	char substr[MAXLEN];
	char c;
	int i = 0;

	printf("Enter string: ");
	while ((c = getchar()) != '\n'){
		str[i] = c;
		i++;
	}
	str[i++] = '\0';
	i = 0;
	printf("Enter substring: ");
	while ((c = getchar()) != '\n'){
		substr[i] = c;
		i++;
	}
	substr[i++] = '\0';
	srch(str, substr, &strstruct);
	for (i = 0; i < strstruct.count; i++){
		printf("\nCount: %d\n", strstruct.count-(strstruct.count-i));
		printf("Start Position: %d\n", strstruct.startpos[i]);
		printf("End Position: %d\n\n", strstruct.endpos[i]);
	}
	
}

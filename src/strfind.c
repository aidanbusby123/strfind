#include<stdio.h>
#include<stdlib.h>
#include"strfind.h"

void srch(char *str, char *substr, struct srchstruct *p){
	int i = 0;
	int n = 0;
	int r = -1;	
	int q = 0;
	int *temp;

	p->startpos = (int*)malloc(sizeof(int)*1);
	p->endpos = (int*)malloc(sizeof(int)*1);

	while (str[i] != '\0')
		i++;

	p->str = (char*)malloc(sizeof(char)*(i + 1));
	
	for (n = 0; n < i; n++)
		p->str[n] = str[n];	
	n = 0;
	i = 0;
	
	while (substr[i] != '\0')
		i++;
	
	p->substr = malloc(sizeof(char)*i + 1);
	for (n = 0; n < i; n++)
		p->substr[n] = substr[n];
	n = 0;
	i = 0;
	while (p->str[i] != '\0'){
				
		if (p->substr[n] == p->str[i]){
			if (r == -1){
				r = i;
			}
			if (p->str[i+1] == '\0'  && p->substr[n+1] != '\0'){
				p->count++;
				p->startpos[q] = 0;
				p->endpos[q] = 0;
				return;
			}
			if (p->substr[n+1] == '\0'){
				p->count++;
				temp = realloc(p->startpos, ((p->count+2)*sizeof(int)));
				p->startpos = temp;
				temp = realloc(p->endpos, (p->count+2)*sizeof(int));
				p->endpos = temp;
				p->endpos[q] = i;
				p->startpos[q] = r;
				q++;
				n = 0;
				r = -1;
				i++;
				continue;
				
				
			}
			n++;
	
		}else{
			n = 0;
			r = -1;
		}
		i++;
	}	
}	


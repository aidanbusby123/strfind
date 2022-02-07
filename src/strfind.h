#ifndef strfind
#define strfind
struct srchstruct{
	int count;
	int *startpos;
	int *endpos;
	char *str;
	char *substr;
};
void srch(char *str, char *substr, struct srchstruct *p);

#endif

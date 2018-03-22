#include<stdio.h>
#include "myscanner.h"

extern int yylex();
extern int yylineno(); // for error line number
extern char * yytext;

char * names[] = { NULL,"db_type","db_name","db_table_prefix","db_port"};

int main(void)
{
	int ntoken, vtoken; // ntoken = name token , vtoken = value token
	ntoken = yylex();
	while(ntoken)
	{
		printf("%d\n",ntoken);;
		ntoken = yylex();
	}
	return 0;
}

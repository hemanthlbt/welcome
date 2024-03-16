#include <stdio.h>
#define  MAX_LIMIT 100
int main()
{

char str[MAX_LIMIT]; 

printf("What is your name??\n");
	scanf("%[^\n]s",str);
	printf("welcome Mr.%s\n",str);






	return 0;
}
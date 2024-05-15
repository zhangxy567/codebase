#include <stdio.h>
int main()
{
	FILE * fp =fopen("test.txt","w");
	
	if(fp == NULL)
	{
		perror("fopen");
		return 1;
		
	}
	//fputc('a',fp);
	//fputc('b',fp);
	//fputc('c',fp);
	
	char ch;
	for(ch = 'a'; ch<='z' ;ch++)
	{
		fputc(ch,fp);
	}
	
	fclose(fp);
	return 0;
}

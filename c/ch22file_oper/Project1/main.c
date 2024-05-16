#include <stdio.h>
int main()
{
	FILE * fp =fopen("test.txt","r");
	
	if(fp == NULL)
	{
		perror("fopen");
		return 1;
		
	}
	//fputc('a',fp);
	//fputc('b',fp);
	//fputc('c',fp);
	
	
	int ch ;
	while(  (  ch=fgetc(fp)  )  != EOF )
	{
		printf("%c",ch);
	}

	
	//char ch;
	//for(ch = 'a'; ch<='z' ;ch++)
	//{
	//	fputc(ch,fp);
	//}
	
	fclose(fp);
	return 0;
}

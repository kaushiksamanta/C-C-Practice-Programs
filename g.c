#include<stdio.h>
#include<stdlib.h>
char *mystrcpy(char *destination,const char * source)
{
	char *dest;
	dest=destination;
	while(*destination++=*source++);
	return (dest);
}
char *concatw(char *string1,char *string2)
{
	int i=0;
	int j=0;
	int h=(sizeof(string1)/sizeof(string1[0]))+(sizeof(string2)/sizeof(string2[0]))+1;
	char *result = (char *)malloc(h*sizeof(char));
	for(i=0;i<(sizeof(string1)/sizeof(string1[0]));i++)
	{
		result[i]=string1[i];
	}
	for(j=i;j<(sizeof(string1)/sizeof(string1[0]))+(sizeof(string2)/sizeof(string2[0]));j++)
	{
		result[j]=string2[j];
	}
	result[h-1]='\0';
	return result;
}
int main()
{
	char source[] = "This is the source string";
    char destination[50];
    printf("%s",mystrcpy(destination,source));
    char *combined=concatw(source,destination);
    printf("%s",combined);
}

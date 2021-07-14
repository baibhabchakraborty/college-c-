#include <stdio.h>
#include<conio.h>
int length(char []);
int compare (char [], char []);
void concatenate(char [], char []);
int main()
{
	int len1,len2,k;
	char s1[100], s2[100];
	printf("Enter string1\n");
	scanf("%s",s1);
	printf("Enter string2\n");
	scanf("%s",s2);
	len1 = length(s1);
	len2 = length(s2);
	printf("Length of string1 = %d\n", len1);
	printf("Length of string2 = %d\n", len2);
	k=compare(s1, s2);
	if(k==0)
		printf("Equal strings.\n");
	else
		printf("Unequal strings.\n");
	concatenate(s1, s2);
	getch();
	return 0;
}

int length(char str1[])
{	 int count = 0;
	for(int i=0;str1[i]!='\0';i++)
	  count++;
	 return count;
}

int compare (char str1[], char str2[])
{
	int i ,len1,len2;
	len1=length(str1);
	len2=length(str2);
	if(len1!=len2)
		return 1;
	else
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]!=str2[i])
			return 1;
		 }
	 }
	 return 0;
}

void concatenate(char str1[], char str2[])
{
	char str3[100];
	int k = 0;
	for(int i=0;str1[i]!='\0';i++)
	{
		str3[k]=str1[i];
		k=k+1;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str3[k]=str2[i];
		k=k+1;
	}
	str3[k]='\0';
	printf("Concatenated string is %s",str3);
}

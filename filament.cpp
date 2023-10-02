#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i,len,temp=0;
	
	printf("enter a string=");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i] !=str[len-i-1])
		{
			temp=1;
			break;
		}
	}
	
	if(temp==0)
	{
		printf("\n string is a palindrome");
	}
	else
	{
		printf("\n string is not a palindrome");
	}
	
}

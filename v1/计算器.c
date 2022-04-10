#include<stdio.h>
int main()
{
	char s[]="1+2+2+1+2+5+4-8-1";
	int sum=s[0]-'0',i=1;
	for(i=1;i<=15;i++)
	{
		if(s[i]=='+')
		{
			sum+=s[i+1]-'0';
		}
		else if(s[i]=='-')
		{
			sum-=s[i+1]-'0';
		}
	}
	printf("%d\n",sum);
	return 0;
}
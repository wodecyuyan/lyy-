#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={"2+2*3+2/2-1"};
	char b[100]={'\0'};
	int n=strlen(a);
	int res,jg,j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='*'){
			res=(b[j-1]-'0')*(a[j+1]-'0');
			b[j-1]=res+'0';
			i++;
		}
		else if(a[i]=='/'){
			jg=(b[j-1]-'0')/(a[i+1]-'0');
			b[j-1]=jg+'0';
			i++;
		}
		else
		{
			b[j]=a[i];
			j+=1;
		}
	}
	printf("%s\n",b);
	int sum=b[0]-'0';
	int m=strlen(b);
	for(int k=1;k<m;k++)
	{
		if(b[k]=='+')
		{
			sum+=b[k+1]-'0'; 
			k++;
		}
		else if(b[k]=='-') 
		{
			sum-=b[k+1]-'0';
				k++;
		}
	}
	printf("%d\n",sum);

	return 0;
}

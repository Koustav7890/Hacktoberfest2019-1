#include<stdio.h>
#include <string.h>
#define MAX 1000000


void permute(char s[],int l,int r)
{
	if(l==0)
		printf("%s",s[0]);
	else
		for(int i=l;i<=r;i++)
		{
			swap((a[l]),a[i]);
			
		}
}

int main(int argc, char const *argv[])
{
	char s[MAX][10];
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}

	permute(s,0,n-1);
}


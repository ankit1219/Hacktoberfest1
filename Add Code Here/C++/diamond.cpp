#include<stdio.h>
int main()
{
	int n=9,i,x,b,y;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		else
		{
			x=(n-i)/2;
			y=i;
			while(x!=0)
			{
				printf(" ");
				x--;
			}
		}
		for(b=0;b<y;b++)
			{
				printf("R");
		    }	
		    printf("\n");
    }
	for(i=9;i>=1;i--)
	{
		if(i%2==0)
		{
			continue;
		}
		else
		{
			x=(n-i)/2;
			y=i;
			while(x!=0)
			{
				printf(" ");
				x--;
			}
		}
		for(b=0;b<y;b++)
			{
			printf("G");
		    }	
		    printf("\n");
	}
}

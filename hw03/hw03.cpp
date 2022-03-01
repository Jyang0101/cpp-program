#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include<time.h>
#include<iostream> 

using namespace std;

int main()
{
	int n,c,i,j;
	
	
	printf("請輸入一個整數(n):");
	scanf("%d",&n);
	printf("請輸入一個整數(列):");
	scanf("%d",&c);
	
    for(i=1;i<=n;i++)
    {
    	if(i<10)
    	{
    	printf("   ");
    	printf("%d",i);
        }
        else
        {
        printf("  ");
        printf("%d",i);
		}

    		if(i%c==0)
    		{
    		printf("\n");
    	    }

	}
	
}
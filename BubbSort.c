#include<stdio.h>
#include <stdlib.h>

int a[1000];

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a = *b;
	*b = temp;
}

void bubbsort()
{
	int i,j;
	int temp;
	
	for(i=19;i>=0;i--)
	{
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(&a[j],&a[j-1]);
			}
		}
	}
	return;
}
 
 void produceRandomNumbers(int count) 
{
   int i=0;
   for(i = 0;i < count;i++)
   {
   		a[i]=rand()%100;
   }
   return;
}
 
 int main()
 { 	
 	int i = 0;
 	produceRandomNumbers(20);
 	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	printf("\n----------------------------------\n");
	bubbsort();
	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	while(1)
	{
	}
	return;
 }

#include<stdio.h>
#include <stdlib.h>

int a[1000];

void DirectInsertSort1(int start,int end)
{
	int i,j;
	for (i = start + 1; i <= end; ++i) 
	{
        if (a[i] < a[i - 1]) 
		{
            int temp = a[i];
            j = i - 1;
            do 
			{    
                a[j + 1] = a[j];
                --j;
            }while (j >= start && a[j] > temp);
            a[j + 1] = temp;
        }
    }
	
	return;
 } 
 
void DirectInsertSort2(int start,int len)
{
	int temp,k,j,i;
	for(i=start+1; i < len; i++)
	{
		temp = a[i];
		j = i;
		while((temp < a[j-1]) && (j>=1))
		{
			j --;
		}
		
		for(k=i-1;k>=j;k--)
		{
			a[k+1]=a[k];
		}
		a[j]=temp;
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
	
	#if 0
	printf("\n----------------------------------\n");
	DirectInsertSort1(0,19);
	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	#endif

	#if 1
	printf("\n----------------------------------\n");
	DirectInsertSort2(0,20);
	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	#endif
	while(1)
	{
	}
	return;
 }

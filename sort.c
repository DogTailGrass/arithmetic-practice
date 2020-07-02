#include<stdio.h>
#include <stdlib.h>

int a[1000];

void DirectSort(int start,int end)
{
	int i,j;
	for (i = start + 1; i <= end; ++i) 
	{
        if (a[i] < a[i - 1]) 
		{
            int temp = a[i];
            j = i - 1;
            do 
			{    //依次移动并寻找插入位置
                a[j + 1] = a[j];
                --j;
            }while (j >= start && a[j] > temp);
            a[j + 1] = temp;  //插入元素
        }
    }
	
	return;
 } 
 
void sort()
{
	int temp,k,j,i;
	for(i=1;i<20;i++)
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
 	int c = 1;
 	int b = 2;
 	swap(&b,&c);
 	printf("%d\n",b);
 	printf("%d\n",c);
 	
 	int i = 0;
 	produceRandomNumbers(20);
 	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	printf("\n----------------------------------\n");
	 
	//sort();
	bubbsort();
	for(i=0;i<20;i++)
 	{
 		printf("%d\n",a[i]);
	}
	printf("\n----------------------------------\n");
	//DirectSort(0,19);
	//for(i=0;i<20;i++)
 	//{
 	//	printf("%d\n",a[i]);
	//}
	while(1)
	{
	}
	return;
 }

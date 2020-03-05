#include<stdio.h>
#include<conio.h>
#define MAX 20
int c=0;
int partition(int a[],int low,int high)
{
int pivot=low,temp,i;
while(low<=high)
{
	while(a[pivot]>=a[low])
	{
		low=low+1;
		c++;
	}

	while(a[pivot]<a[high])
	{
		high=high-1;
		c++;
	}
	if(low<high)
	{
		temp=a[low];
		a[low]=a[high];
		a[high]=temp;
		c++;
	}
}

temp=a[high];
a[high]=a[pivot];
a[pivot]=temp;
return(pivot);

}

void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int p;
		p=partition(a,low,high);
		quicksort(a,low,p)      ;
		quicksort(a,p+1,high);
	}
}
void main()
{
	  int n,a[MAX],i;
	  clrscr();
	  printf("Enter array size: ");
	  scanf("%d",&n);
	  printf("Enter array elements \n")   ;
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	quicksort(a,0,n-1);

	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("Counter value: %d\t",c);
	getch();

}
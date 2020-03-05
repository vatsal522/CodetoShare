#include<stdio.h>
#include<conio.h>
int a[20],n,compare=0,swap=0;
void display();
void selection();
void main()
{
	int i;
	clrscr();
	printf("Enter the size of the list:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{

		scanf("%d",&a[i]);
	}
	selection();
	display();
	getch();
}
void display()
{
	int i;
	printf("\nThe sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nNumber of Comparisons: %d!",compare);
 //	printf("\nNumber of Swaps: %d!",swap);
}
void selection()
{
	int i,j,min,temp,pos;
	for(i=0;i<n-1;i++)

	{  compare++;
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			compare++;
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
			swap++;
		}
	}
}
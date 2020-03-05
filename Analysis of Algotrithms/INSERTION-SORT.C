#include<stdio.h>
#include<conio.h>
int a[10],n;
void display();
void insertion();
void main()
{
	int i;
	clrscr();
	printf("Enter the size of the list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the array element:");
		scanf("%d",&a[i]);
	}
	insertion();
	display();
	getch();

	}
void insertion()
{
	int c=0,j,k,temp;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
			c=c+1;
		}
		a[j+1]=temp;
	}

	printf("Counter value : %d",c);
}
void display()
{
	int i;
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
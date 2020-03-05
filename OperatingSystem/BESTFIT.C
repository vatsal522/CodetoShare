#include<stdio.h>
#include<conio.h>
void sort(int b[20][20],int nb)
{
	int i,j,temp;
	for(i=1;i<nb;i++)
	{
		for(j=i+1;j<=nb;j++)
		{
			if(b[i][1]>b[j][1])
			{
				temp=b[i][1];
				b[i][1]=b[j][1];
				b[j][1]=temp;

				temp=b[i][0];
				b[i][0]=b[j][0];
				b[j][0]=temp;

			}
		}
	}
}
void main()
{
	int b[20][20],p[20],flag[20],fragment[20],i,j,np,nb,allocation[20];
	clrscr();
	printf("Please enter the number of blocks: ");
	scanf("%d",&nb);
	printf("Please enter the number of processes: ");
	scanf("%d",&np) ;
	printf("Please enter the size of the blocks\n:") ;
	for(i=1;i<=nb;i++)
	{
		printf("B[%d]: ",i);
		scanf("%d",&b[i][1]);
		b[i][0]=i;
	}
	sort(b,nb);
	printf("\n");
	for(i=1;i<=np;i++)
	{
		printf("P[%d]: ",i);
		scanf("%d",&p[i]);
	}
	for(i=1;i<=nb;i++)
	{
		flag[i]=0;
	}
	for(i=1;i<=np;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(p[i]<=b[j][1])
			{
				if(flag[j]==0)
				{
					allocation[i]=b[j][0];
					fragment[i]=b[j][1]-p[i];
					flag[j]=1;
					break;
				}
			}
		}
	}
printf("\nProcess no.\tPsize\t\tblockNO.\t\tsize\t\tfrags");
	for(i = 1; i <= np; i++)
	{
		printf("\n%d\t\t%d\t\t", i, p[i]);
		if(flag[i] == 1)
			printf("%d\t\t\t%d\t\t%d",allocation[i],b[i][1],fragment[i]);
		else
			printf("Not allocated");
	}	getch();

}
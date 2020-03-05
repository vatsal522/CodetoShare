#include<stdio.h>
#include<conio.h>
void main()
{
	int b[20],p[20],flag[20],fragment[20],i,j,np,nb,allocation[20];
	clrscr();
	printf("Please enter the number of blocks: ");
	scanf("%d",&nb);
	printf("Please enter the number of processes: ");
	scanf("%d",&np) ;
	printf("Please enter the size of the blocks\n:") ;
	for(i=1;i<=nb;i++)
	{
		printf("B[%d]: ",i);
		scanf("%d",&b[i]);
	}
	sort(b,nb);
	printf("\n");
	for(i=1;i<=np;i++)
	{
		printf("P[%d]: ",i);
		scanf("%d",&p[i]);
	}
	for(i=1;i<=np;i++)
	{
		flag[i]=0;
	}
	for(i=1;i<=np;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(p[i]<=b[j])
			{
				if(flag[j]==0)
				{
					allocation[i]=j;
					fragment[i]=b[j]-p[i];
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
			printf("%d\t\t\t%d\t\t%d",allocation[i],b[allocation[i]],fragment[i]);
		else
			printf("Not allocated");
	}	getch();

}
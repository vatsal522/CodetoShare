#include<stdio.h>
#include<conio.h>

void main()
{
	char p[10],temp[5];
	int i,j,bt[10],wt[10],tat[10],pr[10],temp1,n;
	float avgwt=0,avgtat=0;
	clrscr();
	printf("enter no of processes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p[i]=i;
		printf("enter process time:");
		scanf("%d",&bt[i]);
		printf("enter priority:");
		scanf("%d",&pr[i]);
	}
	for(i=1;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]>pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=bt[i];
				bt[i]=bt[j];
				bt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	wt[0]=0;
	wt[1]=0;
	for(i=1;i<=n;i++)
	{
		wt[i+1]=wt[i]+bt[i];
		avgwt=avgwt+wt[i];
	}
	avgwt=avgwt/n;
	tat[0]=0;

	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
		avgtat=avgtat+tat[i];
	}

	avgtat=avgtat/n;

	printf("p_name\t p_time\t priority\t w_time\n");
	for(i=1;i<=n;i++)
	{
		printf("\t %d\t %d\t %d\n" ,p[i],bt[i],pr[i],wt[i]);
	}
	printf("Avg TAT=%f\n Avg WT=%f",avgtat,avgwt);
	getch();
}
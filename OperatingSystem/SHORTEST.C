#include<conio.h>
void main()
{
	int bt[20],p[20],ct[20],at[20]={0},tat[20],wt[20],temp,n,i,j;
	float avgwt=0,avgtat=0;
	clrscr();
	printf("Enter no of processes: ");
	scanf("%d",&n);
	printf("Enter burst time of procceses: ");
	bt[0]=0;
	p[0]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&bt[i]);
		p[i]=i;

	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(bt[i]>bt[j])
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;

				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
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
	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
		avgtat=avgtat+tat[i];
	}

	printf("\nProcess\t BurstTime \t WaitingTime\t TAT");
	for(i=1;i<=n;i++)
	{
		printf("\np%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);

	}
	avgtat=avgtat/n;
	avgwt=avgwt/n;
	printf("Avg TAT: %f \n Avg WT: %f",avgtat,avgwt);
	getch();


}
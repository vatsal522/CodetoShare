#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,process[100],n,bt[100],tat[100],wt[100];
	float avgwt=0;
	float avgtat=0;
	clrscr();
	printf("Please enter the number of processes: ");
	scanf("%d",&n);
	printf("Please enter the process time");
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&bt[i]);
	}
	wt[1]=0;
	for(i=1;i<=n;i++)
	{
		wt[i+1]=wt[i]+bt[i];
	}
	tat[1]=bt[1];
	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}
	for(i=1;i<=n;i++)
	{
		avgwt=avgwt+wt[i];
		avgtat=avgtat+tat[i];
	}
	avgwt=avgwt/n;
	avgtat=avgtat/n;
	for (i=1;i<=n;i++)
	{
		printf("%d is the waiting time for %d process\n",wt[i],i);
	}
		printf("AVG WT: %f",avgwt);
       printf("\n");
		for (i=1;i<=n;i++)
	{
		printf("%d is the turnaround time for %d process\n",tat[i],i);
	}
	printf("AVG TAT: %f",avgtat);

	getch();

}
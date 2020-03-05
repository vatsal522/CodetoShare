#include<stdio.h>
void main()
{
      int i,n,total=0,x,count=0,timequ;
      int wt=0,tat=0,at[10],bt[10],t[10];
      float avgwt=0, avgtat=0;
      clrscr();
      printf("Enter total number of Processes:");
      scanf("%d",&n);
      x=n;
      for(i=0;i<n;i++)
      {
	    printf("\nEnter Details of Process[%d]\n",i+1);
	    printf("Arrival Time:\t");
	    scanf("%d",&at[i]);
	    printf("Burst Time:\t");
	    scanf("%d",&bt[i]);
	    t[i]=bt[i];
      }
      printf("\nEnter Time Quantum:");
      scanf("%d", &timequ);
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total=0,i=0;x!=0;)
      {
	    if(t[i]<=timequ&&t[i]>0)
	    {
		  total=total+t[i];
		  t[i]=0;
		  count=1;
	    }
	    else if(t[i]>0)
	    {
		  t[i]=t[i]-timequ;
		  total=total+timequ;
	    }
	    if(t[i]==0&&count==1)
	    {
		  x--;
		  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, bt[i], total - at[i], total - at[i] - bt[i]);
		  wt=wt+total-at[i]-bt[i];
		  tat=tat+total-at[i];
		  count=0;
	    }
	    if(i==n-1)
	    {
		  i=0;
	    }
	    else if(at[i + 1] <= total)
	    {
		  i++;
	    }
	    else
	    {
		  i = 0;
	    }
      }
      avgwt = (float)wt/ n;
      avgtat = (float)tat/ n;
      printf("\n\nAverage Waiting Time:\t%f", avgwt);
      printf("Avg Turnaround Time:\t%f", avgtat);
      getch();
}

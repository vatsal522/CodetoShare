#include<stdio.h>
#include<conio.h>
int a,b,u,v,n,i,j,ne=1;
int vi[10],min,mincost=0,cost[10][10];
void main()
{
clrscr();
printf("\nEnter the number of nodes:");
scanf("%d",&n);
printf("\nEnter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=99;
}
vi[1]=1;
printf("\n");
while(ne<n)
{
 for(i=1,min=99;i<=n;i++)
 for(j=1;j<=n;j++)
 if(cost[i][j]<min)
 if(vi[i]!=0)
 {
 min=cost[i][j];
 a=u=i;
 b=v=j;
 }
 if(vi[u]==0 || vi[v]==0)
 {
  printf("\nEdge %d: cost:%d",ne++,a,b,min);
  mincost+=min;
  vi[b]=1;
 }
cost[a][b]=cost[b][a]=99;
 }
 printf("\n Minimun cost=%d",mincost);
 getch();
}



 
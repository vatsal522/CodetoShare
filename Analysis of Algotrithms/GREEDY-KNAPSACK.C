#include<stdio.h>
#include<conio.h>
float w[10],c[10];
float den[10],x[10];
void sort(int n);
void greedy(int bag,int n);
void main()
{
	int i,n,bag,j=1;
	clrscr();
	printf("Enter no of objects ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter weights & costs of object %d \n",j++);
		scanf("%f %f",&w[i],&c[i]);
	}
	printf("The density of objects are\n");
	for(i=0;i<n;i++)
		{
		x[i]=0;
		den[i]=c[i]/w[i];
		printf("%f \n",den[i]);
	}

	printf("Enter capacity of bag ");
	scanf("%d",&bag);
	sort(n);
	greedy(bag,n);
	getch();
}
void sort(int n)
{
	int i,j;
	float temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(den[i]<den[j])
			{
				temp=den[i];
				den[i]=den[j];
				den[j]=temp;

				temp=w[i];
				w[i]=w[j];
				w[j]=temp;

				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("Weight     Profit     Density \n");
	for(i=0;i<n;i++)
	{
			printf("%f %f %f\n",w[i],c[i],den[i]);
	}
}
void greedy(int bag,int n)
{
	int i;
	float tp=0;
	for(i=0;i<n;i++)
	{
		if(bag<w[i])
		{
			break;
		}
		else
		{
			tp=tp+c[i];
			bag=bag-w[i];
			x[i]=1;
		}
	}
	if(i<n)
	{
		x[i]=bag/w[i];
		tp=x[i]*c[i]+tp;
	}
	printf("\n");
	printf("Weight     Profit     X[i] \n");
	for(i=0;i<n;i++)
	{
		printf("%f %f %f\n",w[i],c[i],x[i]);
	}
	printf("Total profit=%f",tp);
}

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











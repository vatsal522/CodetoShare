#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,ans;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);
	asm mov ax,n;  
	asm mov cx,n;  
	for(i=1;i<2;i++) 
	{					
		for(j=1;j<n;j++)
		{
			asm add ax,cx;
		}
		asm mov cx,ax;
	}
	asm mov ans,cx;
	printf("Square of %d is %d.",n,ans);
	getch();
}

/*OUTPUT:
Enter the number : 6
Square of 6 is 36.
*/
//so basically we pass the no to assembly lang to process it
//for eg we have to find square of 6
// ax=6 cx=6    outer for loop runs once,inner runs n times.                                                                                
 //so ax and cx are added 6 times, ax val is sent to cx and cx val is sent to ans                                                                               
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


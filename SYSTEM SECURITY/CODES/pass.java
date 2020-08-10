import java.util.*;
public class pass{
	public static void main(String args[])
	{	
		int c=0,l=0,n=0,sp=0;
		String pass1="";
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the password to check strength:");
		pass1=sc.next();
		int a=pass1.length();
		System.out.println("Length: "+a);
		if(a<8)
		{
			System.out.print("Please enter 8 or more characters ");
		}
		else
		{
		for(int i=0;i<a;i++)
		{
			char p=pass1.charAt(i);
			if(Character.isUpperCase(p))
			{ c++;			}

			if(Character.isLowerCase(p))
			{ l++;			}

			if(Character.isDigit(p))
			{ n++;			}

			else
			{ sp++;			}			
			
		}
		if(c>0 && n>0 && sp>0 && l>0)
		{
			System.out.println("STRONG PASSWORD");
		}
		else
		{
			System.out.println("PLEASE ENTER A STRONG PASSWORD");	
		}
	
		}
	}
}
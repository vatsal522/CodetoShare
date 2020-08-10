import java.util.*;

public class row{
	public static void main(String args[])
	{
		String str1="";
		String str2="";
		
		int k=0;
		char[][] mat = new char[5][5];
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter your message: ");
		str1=sc.nextLine();
		int a=str1.length();
		if(a<25)
		{
			for(int i=a;i<25;i++)
			{
				str1=str1+" ";
			}
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				
				mat[i][j]=str1.charAt(k);
				k++;
			}
			
		}
		System.out.println("------------------------------------------");
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				System.out.print(mat[i][j]);
			}
			
				System.out.println("");
		}
		System.out.println("------------------------------------------");
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				System.out.print(mat[j][i]);
			}
			
				System.out.println("");
		}
		
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(mat[j][i]==' ')
				{
					str2=str2+"";
				}
				else{
				
				str2=str2+mat[j][i];
				}
			}
			 
		}
		
		System.out.println(str2);
		
		
	} 
}
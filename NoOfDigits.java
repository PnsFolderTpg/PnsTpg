//	Program to print no.of digits in a number.

import java.util.Scanner;
class  NoOfDigits
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Number of TestCases? ");
		int t = in.nextInt();
		int n,count=0;
		while (t>0)
		{
			System.out.println("Number ? ");
			n = in.nextInt();
			while(n>0)
				{
				    count++;
					n=n/10;
				}
				System.out.println(count);
				count=0;
				t--;
		}
	}
}

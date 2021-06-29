//Program to read a number and print reverse of a number.
//	Program to print no.of digits in a number.

import java.util.Scanner;
class  Reverse
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Number of TestCases? ");
		int t = in.nextInt();
		int n,r,rev;
		while (t>0)
		{
			System.out.println("Number ? ");
			n = in.nextInt();
			rev=0;
			while(n>0)
				{
				    r=n%10;
					rev= rev*10 + r;
					n=n/10;
				}
				System.out.println(rev);
				t--;
		}
	}
}

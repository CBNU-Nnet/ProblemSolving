import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			for (int j = n-i-1; j > 0; j--) {
				System.out.print(" ");
			}
			if(i==0&&n>1) {
				System.out.println("*");
			}
			if(i>0&&n>1&&i<n-1) {
				System.out.print("*");
				for (int j = 0; j < 2*(i-1)+1; j++) {
					System.out.print(" ");
				}
				System.out.println("*");
			}
				
			
			
			
		}
		for (int j = 0; j < 2*(n-1)+1; j++) {//막줄
			System.out.print("*");
		}
    
	}
}

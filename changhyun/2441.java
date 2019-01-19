import java.util.Scanner;
import java.util.StringTokenizer;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int A= sc.nextInt();
		for(int i=1;i<=A;i++) {
			for (int j = 1; j <=A; j++) {
				if(j<i)
					System.out.print(" ");
				else
					System.out.print("*");
			}
			System.out.println();
		}
		sc.close(); 
	}
}

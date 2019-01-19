import java.util.Scanner;
import java.util.StringTokenizer;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int A= sc.nextInt();
		for (int i = A; i >= 1; i--) {
			System.out.println(i);
		}

		sc.close(); 
	}
}

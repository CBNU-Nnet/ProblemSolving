import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		sc.nextLine();
		String str = sc.nextLine();
		int result = 0;
		int i;
		for (i = 0; i < str.length(); i++) {
			result = result + str.charAt(i)-'0';
		}
		System.out.println(result);
		sc.close();
	}
}

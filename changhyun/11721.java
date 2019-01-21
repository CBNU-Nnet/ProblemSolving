import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		
		
		String str = sc.nextLine();
		int result = 0;
		int i;
		for (i = 0; i < str.length(); i++) {
			System.out.print(str.charAt(i));
			if (i%10==9) {
				System.out.println();
			}		
		}	
		sc.close(); 
	}
}

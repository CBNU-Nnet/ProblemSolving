import java.util.*;
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int numb;
		numb=sc.nextInt();
		for(int i=0;i<numb;i++) {
			for(int j=0;j<=i;j++) {
			System.out.print("*");
		}
			System.out.println();
			}
		
		sc.close();	
	}
}

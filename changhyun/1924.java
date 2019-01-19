import java.util.Scanner;
import java.util.StringTokenizer;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int A= sc.nextInt();
		int B= sc.nextInt();
		int sum=0;
		
		for (int i = 0; i < A; i++) {
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) {
				sum+=31;
			}
			else if(i==4||i==6||i==9||i==11)
				sum+=30;
			else if(i==2)
				sum+=28;
		}
		sum+=B;
		if(sum%7==1)
			System.out.println("MON");
		else if(sum%7==2)
			System.out.println("TUE");
		else if(sum%7==3)
			System.out.println("WED");
		else if(sum%7==4)
			System.out.println("THU");
		else if(sum%7==5)
			System.out.println("FRI");
		else if(sum%7==6)
			System.out.println("SAT");
		else if(sum%7==0)
			System.out.println("SUN");

		sc.close(); 
	}
}

import java.util.Scanner;
class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		while(true) {
			int a=sc.nextInt();
			int b=sc.nextInt();
			if (a==0)
				break;
			System.out.println(a+b);
		}
    }
}



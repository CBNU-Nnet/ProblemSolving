import java.util.Scanner;
import java.util.StringTokenizer;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int A= sc.nextInt();
		int arr[] = new int[A];
		int min=1000000,max=-1000000;
		
		for (int i = 0; i < A; i++) {
			arr[i]=sc.nextInt();
			if(min>arr[i])
				min=arr[i];
			if(max<arr[i])
				max=arr[i];
		}
		System.out.println(min+" "+max);
		sc.close(); 
	}
}

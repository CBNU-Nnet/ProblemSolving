import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb=new StringBuilder();
		int sum = 0;
		while(true){
			
			String A=br.readLine();
			if(A==null){
				break;
			}

			String[] B=A.split(" ");
			sum=Integer.valueOf(B[0])+Integer.valueOf(B[1]);
			System.out.println(sum);
		}
		
	}
}

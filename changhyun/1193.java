import java.util.*;
public class Main{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int Ord=sc.nextInt();
		int n;
		n=0;
		int i;
		
		for(i=1; i<10000;i++) {
			
			n=(i*(i+1))/2;
			
			if(n>=Ord)
				break;
		}
		i=i-1;
		int Minus = Ord- (i*(i+1))/2;
		int Mot;	//분모
		int Son;	//분자
		i=i+1;
		
		if(i%2==0)	//짝수면
		{
			Son= Minus;
			Mot=i+1-Son;
		}
		else
		{
			Mot = Minus;
			Son = i+1-Mot;
		}
		System.out.print(Son+"/"+Mot);
		sc.close();
		
	}
}

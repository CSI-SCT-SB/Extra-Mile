//KAPREKAR NUMBER
import java.util.Scanner;
	public class kaprekar {
		public static  void main(String args[]) {
		 int n;
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter the number: ");
		 n=sc.nextInt();
		 int sq=n*n,m=n,d=0;
		 while(m>0){
			 d++;
			 m=m/10;
		 }
		 int rght=sq%(int)Math.pow(10,d);
		 int lft=sq/(int)Math.pow(10,d);
		 int res=lft+rght;
		 if(res==n) {
			 System.out.println(n+" is a Kaprekar Number: ");
		 }
		 else {
			 System.out.println(n+" is not a Kaprekar Number: ");
		 }
	 }
}

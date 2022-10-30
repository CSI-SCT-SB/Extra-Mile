//SMITH NUMBER
import java.util.Scanner;
     public class smith {
    	  public static boolean isprime(int x) {
    	        int flag=0;
    	    	for(int i=2;i<x;i++) {
    	    		if(x%i==0) {
    	    			flag+=1;
    	    			break;
    	    		}
    	    	}
    	    	if(flag!=0) {
    	    		return false;
    	    	}
    	    	else {
    	    		return true;
    	    	}
      }
      public static int sumdig(int x) {
    	  int m=x,r,s=0;
    	  while(m>0) {
    		  r=m%10;
    		  s+=r;
    		  m/=10;
    	  }
    	  return s;
      }
      public static  void main(String args[]) {
		 int n,k=0,spps=0;
		 int m[]=new int[10];
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter the number: ");
		 n=sc.nextInt();
		 while(isprime(n)!=false) {
			 System.out.println("Please Enter a Composite Number: ");
			 System.out.println("Enter the number: ");
			 n=sc.nextInt();
		 }
		 int spn=sumdig(n);
		 for(int i=2;i<=n;i++) {
			 if((n%i==0)&&(isprime(i))){
				 m[k++]=i;
				 System.out.println(" "+m[k-1]);
			 }
		 }
		 for(int i=0;i<k;i++) {
			 spps+=sumdig(m[i]);
		 }
		 System.out.println(n+"  "+spn+" "+spps);
		 if(spn==spps) {
			 System.out.println(n+" is a Smith Number: ");
		 }
		 else {
			 System.out.println(n+" is not a Smith Number: ");
		 }
		 }
      }
		 

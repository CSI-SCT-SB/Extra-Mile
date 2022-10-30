	//Saddle Point of the Matrix
    import java.util.*;
	public class saddle {
	 public static void main(String args[]) {
	   int m,n;
	   Scanner sc=new Scanner(System.in);
	   System.out.println("Enter the row number of the matrix: ");
	   m=sc.nextInt();
	   System.out.println("Enter the row number of the matrix: ");
	   n=sc.nextInt();
	   int a[][]=new int [m][n];
	   System.out.println("Enter the elements of the matrix: ");
	   for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
		
			a[i][j]=sc.nextInt();
		}}
	   for(int i=0;i<m;i++) {
		   int rowmin=a[i][0],colind=0;
		   boolean sadle=true;
			for(int j=1;j<n;j++) {
		     if(a[i][j]<rowmin) {
		    	 rowmin=a[i][j];
		    	 colind=j;
		     }}
			for(int j=0;j<n;j++) {
				if(a[j][colind]>rowmin) {
					sadle=false;
					break;
				}}
			if(sadle) {
				System.out.println("The Saddle Point of the matrix: "+rowmin);
		}}
	 }
	}

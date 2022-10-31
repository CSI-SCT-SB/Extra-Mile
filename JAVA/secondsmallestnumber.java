import java.io.*;
import java.util.*;
class Secondsmall
{
    public static void main(String args[])
    {
        int ar[]=new int[15];
        int i,second=9999,smallest=9999;
        System.out.println("Enter number of elements : ");
        Scanner obj=new Scanner(System.in);
        int n=obj.nextInt();
        System.out.println("Enter the elements : ");
        for(i=0;i<n;i++)
        ar[i]=obj.nextInt();
        for(i=0;i<n;i++)
        {
            if(ar[i]<smallest)
            {
                second=smallest;
                smallest=ar[i];
            }
            else if(ar[i]<second && ar[i]!=smallest)
            {
                second=ar[i];
            }
        }
        System.out.println("Second smallest element is : "+smallest);
    }
}
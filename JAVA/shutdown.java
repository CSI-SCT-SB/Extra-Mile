//Java program to shutdown the system after 5 seconds in widows OS
import java.io.*;
 
public class GFG
{
   public static void main(String[] args)
   {
      Runtime runtime = Runtime.getRuntime();
      try
      {
         System.out.println("System will shutdown after 5 seconds.");
         runtime.exec("shutdown -s -t 5");
      }
      catch(IOException e)
      {
         System.out.println("Exception: " +e);
      }
   }
}
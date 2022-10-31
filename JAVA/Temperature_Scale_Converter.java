import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
	int choice;
    double celsius,fahrenheit,kelvin,rankine,newton,romer,reaumur,delisle;
    char ch;
    Scanner sc = new Scanner(System.in);
    do
    {
        System.out.println("\n***Temperature Scale Conversions***");
        System.out.println("1.Celsius to Kelvin");
        System.out.println("2.Celsius to Fahrenheit");
        System.out.println("3.Celsius to Rankine");
        System.out.println("4.Celsius to Newton");
        System.out.println("5.Celsius to Romer");
        System.out.println("6.Celsius to Reaumur");
        System.out.println("7.Celsius to Delisle");
        System.out.println("\nEnter your choice: ");
        choice = sc.nextInt();
        switch(choice)
		{
		   case 1:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      kelvin = celsius + 273.15;
		      System.out.println("The temperature in kelvin(K) = "+kelvin+"\n");
		      break;
		   case 2:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      fahrenheit = (celsius*9/5) + 32;
		      System.out.println("The temperature in Fahrenheit(°F) = "+fahrenheit+"\n");
		      break;
		   case 3:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      rankine = (celsius + 273.15) * 9/5;
		      System.out.println("The temperature in Rankine(°R) = "+rankine+"\n");
		      break;
		   case 4:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      newton = celsius * 33/100;
		      System.out.println("The temperature in Newton(°N) = "+newton+"\n");
		      break;
		   case 5:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      romer = celsius*21/40 + 7.5;
		      System.out.println("The temperature in Romer(°Ro) = "+romer+"\n");
		      break;
		   case 6:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      reaumur = celsius*4/5;
		      System.out.println("The temperature in Reaumur(°Re) = "+reaumur+"\n");
		      break;
		   case 7:
		      System.out.println("\nEnter temperature in °C :");
		      celsius = sc.nextDouble();
		      delisle = (100-celsius) * 3/2;
		      System.out.println("The temperature in Delisle(°De) = "+delisle+"\n");
		      break;
		   default :
		      System.out.println("Enter correct choice\n");
		      break;
		 } 
		 System.out.println("Do you want to continue( Type y for yes (or) n for No) : ");
		 ch = sc.next().charAt(0);   
    }while(ch=='y' || ch=='Y');
	}
}

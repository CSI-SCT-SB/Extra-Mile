#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float celsius,fahrenheit,kelvin,rankine,newton,romer,reaumur,delisle;
    char ch;
    while(1)
    {
        printf("\n***Temperature Scale Conversions***");
        printf("\n1.Celsius to Kelvin");
        printf("\n2.Celsius to Fahrenheit");
        printf("\n3.Celsius to Rankine");
        printf("\n4.Celsius to Newton");
        printf("\n5.Celsius to Romer");
        printf("\n6.Celsius to Reaumur");
        printf("\n7.Celsius to Delisle");
        printf("\n8.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
		{
		   case 1:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      kelvin = celsius + 273.15;
		      printf("The temperature in kelvin(K) = %f\n",kelvin);
		      break;
		   case 2:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      fahrenheit = (celsius*9/5) + 32;
		      printf("The temperature in Fahrenheit(°F) = %f\n",fahrenheit);
		      break;
		   case 3:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      rankine = (celsius + 273.15) * 9/5;
		      printf("The temperature in Rankine(°R) = %f\n",rankine);
		      break;
		   case 4:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      newton = celsius * 33/100;
		      printf("The temperature in Newton(°N) = %f\n",newton);
		      break;
		   case 5:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      romer = celsius*21/40 + 7.5;
		      printf("The temperature in Romer(°Ro) = %f\n",romer);
		      break;
		   case 6:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      reaumur = celsius*4/5;
		      printf("The temperature in Reaumur(°Re) = %f\n",reaumur);
		      break;
		   case 7:
		      printf("\nEnter temperature in °C :");
		      scanf("%f",&celsius);
		      delisle = (100-celsius) * 3/2;
		      printf("The temperature in Delisle(°De) = %f\n",delisle);
		      break;
		   case 8:
		      exit(1);
		   default :
		      printf("Enter correct choice\n");
		      break;
		 } 
    }
}
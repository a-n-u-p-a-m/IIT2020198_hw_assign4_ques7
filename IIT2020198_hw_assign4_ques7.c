/*Finding no. of days in month corresponding integer*/
#include <stdio.h>
int main(void)

{
	int month,year,rem;
	printf("Enter a month and year\n");
	scanf("%d,%d",&month,&year);
	rem=year%4;

	if (rem>0) {

		       switch(month)
		       {
		       	   case 1:
		       	   case 3:
		       	   case 5:
		       	   case 7:
		       	   case 8:
		       	   case 10:
		       	   case 12:
		       	      printf("No. of days are 31\n");
		       	      break;

		       	   case 4:
		       	   case 6:
		       	   case 9:
		       	   case 11:
		       	       printf("No. of days are 30\n");
		       	       break;

		       	   case 2:
		       	       printf("No. of days are 28\n");
		       	       break;

		       	   default:
		       	       printf("Invalid input\n");
		       	       break;    
                }

            }

        else if (rem==0) {

        	     switch(month)
		       {
		       	   case 1:
		       	   case 3:
		       	   case 5:
		       	   case 7:
		       	   case 8:
		       	   case 10:
		       	   case 12:
		       	      printf("No. of days are 31\n");
		       	      break;

		       	   case 4:
		       	   case 6:
		       	   case 9:
		       	   case 11:
		       	       printf("No. of days are 30\n");
		       	       break;

		       	   case 2:
		       	       printf("No. of days are 29\n");
		       	       break;

		       	   default:
		       	       printf("Invalid input\n");
		       	       break;    
                }
        } 

        else {printf("Invalid\n");} 

}         
		       
	


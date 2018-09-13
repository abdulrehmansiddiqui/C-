#include <stdio.h>
#include <conio.h>

main()
{   int key , no1 , no2 , total;
float f2 =0,f3=0,ftotal=0;
		printf("1. Addition				");
		printf("\n1. Substract			");
		printf("\n3. Dividion			");
		printf("\n4. Multipilcation\n	");
		scanf("%d" , &key );
	switch(key){
		case 1:
			printf("\nPlus\n");
			printf("\nEnter The First Value = 		");
			scanf("%d" , &no1						 );
			printf("\nEnter The Second Value = 		");
			scanf("%d" , &no2 );
     total=no1+no2;
			printf("\n YOUR ANSWER IS = %d " , total );
    break;

		case 2:
			printf("\nSubstract\n");
			printf("\nEnter The First Value =		 ");
			scanf("%d" , &no1						  );
			printf("\nEnter The Second Value = 		 ");
			scanf("%d" , &no2 					 	  );
				total=no1-no2;
			printf("\n YOUR ANSWER IS = %d " , total  );
			break;

		case 3:
			printf("\nDividion\n");
			printf("\nEnter The First Value = ");
			scanf("%f" , &f2 );
			printf("\nEnter The Second Value = ");
			scanf("%f" , &f3 );
				ftotal=f2/f3;
			printf("\n YOUR ANSWER IS = %f " , ftotal );
			break;
			
		case 4:
			printf("\nMulti\n");
			printf("\nEnter The First Value = ");
			scanf("%d" , &no1 );
			printf("\nEnter The Second Value = ");
			scanf("%d" , &no2 );
				total=no1*no2;
			printf("\n YOUR ANSWER IS = %d " , total );
			break;
			
			default:
				printf("Invalid option");
				break;
		
	}
   getch();
  return 0;
		
}

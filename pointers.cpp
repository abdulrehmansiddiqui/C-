#include<stdio.h>
main(){
	
	int a , b  ;
	
	a = 99 ; 

	
	printf("  The value  of A  =  %d   "  , a  ) ;


	int *aptr ;
	
	aptr = &a ;
	

	printf("\n\n\n A = %d  adrs of A = %u  "  , a , aptr ) ;
	

	printf("\n\n\n value of *Aptr  =   %d   " ,*aptr  ) ;
	

	*aptr = 800 ;
	
	
	printf("\n\n\n\nthe new value of *aptr =  %d  " , *aptr  ) ;
	
	
	printf("\n\n\n\the new value of A  = %d"  , a   ) ;
	
	b = a  * 5 ;
	
	printf("B = %d  " , b  ) ;	
	
}

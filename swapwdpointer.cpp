#include<stdio.h>

void sawp(int *x , int *y ) ;

main(){
	
	int a , b ;
	 
	a = 17 ; 
	
	b = 3 ;
	
	printf("\n\n\n\n value of a =  %d   " ,  a  ) ;
	
	printf("\n\n\n\n value of b =  %d   " ,  b  ) ;
		
			printf("\n\n\n\n After swaping  \n\n\n\n " ) ;
	
	sawp(&a , &b) ;
	
	printf("\n\n\n\n value of a =  %d   " ,  a  ) ;
	
	printf("\n\n\n\n value of b =  %d   " ,  b ) ;
	
}
void sawp(int *x , int *y ) {
	
	int temp ;
	
	temp = *x ;
	
	*x = *y ;
	
	*y = temp ; 
		
}

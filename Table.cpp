#include<stdio.h>
main(){
	
	int a, s , t , e ;
				
				printf("table start :  ") ;
				scanf( "%d" , &s   )  ;
				
				printf("Enter a no for table :  ") ;
				scanf( "%d" , &t   )  ;
				
				printf("Enter a no for table End :  ") ;
				scanf( "%d" , &e   )  ;
							
			for(  a = s ;  a <= e ; a++    ){
	
		printf("\n %d x %d = %d " , t , a , t * a ) ;
	
			}

} 

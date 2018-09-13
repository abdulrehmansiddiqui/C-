#include<stdio.h>
main(){
	int a , b[10] , e ;


		printf( "Tell the rank : " ) ;
		scanf( "%d" , &e ) ;
		
		
	for( a=0 ; a<e ; a++ ){
		
		
		printf( "Enter a No %d: " , a ) ;
		scanf( "%d" , &b[a] ) ;
		
	}
	
	for( a=0 ; a<e ; a++  ){
		printf("\nAry %d = %d " , a , b[a]  ) ;
	
	}
	
	return 0;
}

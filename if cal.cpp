#include<stdio.h>
main(){
	
	int  a ,  b , c ;
	
	char ch ;
	
	a = 548 ;
	b = 245 ;
	
	ch = '/' ;
	
	printf("\n\n\nThe val of a = %d " , a ) ;
	
	
	printf("\n\n\nThe val of b = %d " , b ) ;
	
	
	printf("\n\n\nThe val of Op = %c " , ch ) ;
	
	if( ch == '+' ){
		
		c = a + b ;
		printf("\nThe result of a + b = %d  " , c  );
		
	}
	
	else if(ch == '-'){
		
		c = a - b ;
		printf("\nThe result of a - b = %d  " , c  );
		
	} 
	
	else if(ch == '*'){
		
		c = a * b ;
		printf("\nThe result of a * b = %d  " , c  );
		
	
	} 	

	else if(ch == '/'){
		
		float(c) = float(a) / float(b) ;
		printf("\nThe result of a / b = %f  " , c  );


		
	} 
	
	
	else{
		
		printf("\nPlz enter a valid op"  ) ;
		
	}
	
	
	
}

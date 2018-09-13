#include<stdio.h>
main(){
	
	
	int a , b , c , v ; 
	
	FILE *fc ;
	char fn[10];

	printf("Enter a no :" , a )  ;
	scanf("%d", &a  ) ;
	
	
	printf("Enter a no :" , b )  ;
	scanf("%d", &b  ) ;
			
	printf("\n\nThe value of a = %d " , a   ) ;
	
	printf("\n\nThe value of b = %d " , b   ) ;
	
	c = a + b ;
	printf("\n\nThe result of a + b  = %d " , c   ) ;
	
	
	fc = fopen("Cal.txt" , "a" ) ;
	
	fprintf(fc , "\nThe value of a = %d " , a );
	
	
	fprintf(fc , "\nThe value of b = %d " , b );
	
	fprintf(fc , "\nThe result of a + b  = %d\n\n " , c );
	


}

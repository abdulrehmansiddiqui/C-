#include<stdio.h>
#include<string.h>
main(){
	int l ;
	char f_name[20] , l_name[20] , pra[2] ;
	printf("Enter First Name:")	;
	scanf("%s" , &f_name )		;
	
	printf("Enter Last Name:")	;
	scanf("%s" , &l_name )		;
		
	printf("Enter Pragraph:")	;
	scanf("%s" , &pra )			;
	
	printf("\nFirst name : %s " , f_name );
	printf("\nLast name :  %s " , l_name );
	printf("\nPragraph is : %s" , pra )   ; 
	
	printf("\n\nFirst name by strlwr: %s " , strlwr(f_name) );
	printf("\nLast name by strlwr: %s " , strlwr(l_name) );
	
	printf("\n\nFirst name by strupr : %s " , strupr(f_name) );
	printf("\nLast name strupr :  %s " , strupr(l_name) );
	
	 l = strlen(f_name) ;
	 printf("\n\nFirst Num : %d " , l );
	 
	 l = strlen(l_name) ;
	 printf("\nFirst Num : %d " , l );
	 
	 l = strlen(pra) ;
	 printf("\nPra Num :   %d " , l );
	 
	 strcat(f_name , l_name) ;
	 printf("\nComplete name = %s" , f_name ) ;
	 
	 strcat(strcat(f_name, " ") , l_name) ;
	 printf("\n Name : %s" ,f_name ) ;
	 
	 printf("\n\nName With Space %s %s" , f_name , l_name ) ;
	 
	 
}

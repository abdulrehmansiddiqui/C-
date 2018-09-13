#include<stdio.h>
#include<string.h>
main(){
	int l ;
	
	char f_name[20] , l_name[20] ;
	
			
	printf("Enter First Name:")	;
	scanf("%s" , &f_name )		;
	
	printf("Enter Last Name:")	;
	scanf("%s" , &l_name )		;
		
	
	printf("\nFirst name : %s " , f_name );
	printf("\nLast name :  %s " , l_name );
	
	strcat(strcat(f_name, " ") , l_name) ;
	printf("\nName : %s" ,f_name )		 ;
	 
	
	 l = strlen(f_name) ;
	 printf("\nFirst Num : %d " , l );
	 l = strlen(l_name) ;
	 printf("\nFirst Num : %d " , l );
	
	 
		if( l>6 ){
		 printf("\n opsssssssssss ") ;
	
	    }

}


#include <stdio.h>
main()
{ int m[5][5] , r ,c , col , row ;
		
	printf("How many Colume You Want :" , col )  ;
		scanf("%d", &col  ) ;
	printf("How many Row You Want :" , row )  ;
		scanf("%d", &row  ) ;
		
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				
				printf("\n Enter any Value row %d col %d " , r+1 , c+1 );
				scanf("%d" , & m[r][c]  ) ;
			}
		}
		
		printf("\n\n\n\t Matrix \n\n\n") ;
		 
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				printf("\t%d\t" , m[r][c] ) ;
			}
			printf("\n\n") ; 
		}
}

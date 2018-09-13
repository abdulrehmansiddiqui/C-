#include <stdio.h>
main()
{ int a[5][5] , r ,c ;
		
		for(r = 0 ; r < 2 ; r++ ){
			for(c = 0 ; c < 2 ; c++ ){
				
				printf("\n Enter any Value row %d col %d " , r , c );
				scanf("%d" , & a[r][c]  ) ;
			}
		}
		
		printf("\n\n\n Matrix \n\n\n") ;
		 
		for(r = 0 ; r < 2 ; r++ ){
			for(c = 0 ; c < 2 ; c++ ){
				c[r][c] = a[r][c] + b[r][c] ;
				printf("\t\t%d\t\t" , a[r][c] ) ;
			}
			printf("\n\n") ; 
		}
}

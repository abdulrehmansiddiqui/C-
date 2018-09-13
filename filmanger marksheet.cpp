#include<stdio.h>
#include<string.h>

main(){
		
	int c , m , p , u , e , r  , total , percentage , student , s; 
		
	FILE *fc ;
	char fn[10] , f_name[20] ;
	
	printf("how many student :" , student )  ;
		scanf("%d", &student  ) ;
	
	for ( s = 1 ; s < student  ; s ++ ){
		printf("\n \t \t%d Detail of student :" , s );

	printf("\nName of student :"             );
	scanf("%s", &f_name  ) ;	
	
	printf("Enter a no for Rollnumber :" , r );
	scanf("%d", &r  ) ;

	printf("Enter a no for Chemistry :" , c  );
		scanf("%d", &c  ) ;
	printf("Enter a no for Maths :" , m      );
		scanf("%d", &m  ) ;
	printf("Enter a no for Physics :" , p    );
		scanf("%d", &p  ) ;
	printf("Enter a no for Urdu :" , u       );
		scanf("%d", &u  ) ;
	printf("Enter a no for English :" , e    );
		scanf("%d", &e  ) ;
		
	printf("\nStudent Name = %s " , f_name   );
	printf("\nroll Number is = %d " , r      );
	
	printf("\nobtain Number in Chmistry = %d " , c   ) ;
	printf("\nobtain Number in Maths = %d " , m      ) ;
	printf("\nobtain Number in Physics = %d " , p    ) ;
	printf("\nobtain Number in Urdu = %d " , u       ) ;
	printf("\nobtain Number in English = %d " , e    ) ;
	
	total = c + m + p + u + e ;
	printf("\n\tTotal = %d", total);
	
	percentage=(total*100)/500;
	printf("\n\tpercentage = %d",percentage);
    printf("\n\n");
  }
	
	fc = fopen("Cal.txt" , "a" ) ;
	
	fprintf(fc , "\n\nStudent Name is = %s " , f_name   ) ;
	fprintf(fc , "\n\nRoll Number is = %d " , r );
	
	fprintf(fc , "\nobtain Number in Chmistry = %d " , c );
	fprintf(fc , "\nobtain Number in Maths    = %d " , m );
	fprintf(fc , "\nobtain Number in Physics  = %d " , p );
	fprintf(fc , "\nobtain Number in Urdu     = %d " , u );
	fprintf(fc , "\nobtain Number in English  = %d " , e );
	fprintf(fc , "\n\tTotal = %d", total);
	fprintf(fc , "\n\tpercentage = %d",percentage);
}

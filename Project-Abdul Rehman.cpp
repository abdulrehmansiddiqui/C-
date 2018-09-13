#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

 int num,num1,num2 , a, ts , t , e , m[5][5] , r ,c , col , row ,
  Physics, Chemistry, Maths,  Urdu ,  English , rollnm , total  , student , s; 

  float percentage;
 
  FILE *fc ;
  
  char oper , uwant , fn[200] , f_name[200] ;
  
	printf("\n\t 1=Calculator"				);
	printf("\n\t 2=Table"					);
	printf("\n\t 3=Matrix"					);
	printf("\n\t 4=Matrix With Transpose"	);
	printf("\n\t 5=Marksheet and File Management");
	printf("\nChoose You Want to do \n");
		scanf("%c",&uwant);
		
		
		
//------------------------------------------------------------------------------------------

		if(uwant=='1'){
	printf("\n\n\t\t\tCalculator\n");
	printf("Choose operator\n");
		scanf("%c",&oper);
		
	printf("Enter The Value You Calculator \n");
		scanf("%d",&num1);
		scanf("%d",&num2);

	if(oper=='+'){
	num=num1+num2;
	printf("The Add value is %d\n",num);
	}

	else if(oper=='-'){
	num=num1-num2;
	printf("The Substraction value is %d\n",num);
	}

	else if(oper=='*'){
	num=num1*num2;
	printf("The Multip value is %d\n",num);
	}

	else {
	num=num1/num2;
	printf("The Divid value is %d\n",num);
	}
		}

//-------------------------------------------------------------------------------------------

		else if(uwant=='2'){
		printf("\n \t \t Table\n");
		
			printf("table start :  ") ;
				scanf( "%d" , &ts   )  ;
				
			printf("Enter a no for table :  ") ;
				scanf( "%d" , &t   )  ;
				
			printf("Enter a no for table End :  ") ;
				scanf( "%d" , &e   )  ;
							
				for(  a = ts ;  a <= e ; a++    ){
	
			printf("\n %d x %d = %d " , t , a , t * a ) ;
	
			}
			
//------------------------------------------------------------------------
			fc = fopen("Table.txt" , "a" ) ;
		
		fprintf(fc , "\n\n\t Table \n\n") ;
				for(  a = ts ;  a <= e ; a++    ){
	
			fprintf(fc , "\n %d x %d = %d " , t , a , t * a ) ;
	
			}
		}	

//-------------------------------------------------------------------------------------------

		else if(uwant=='3'){
		printf("\n \t \t Matrix Only");
		
	printf("\nHow many Colume You Want :" , col )  ;
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
		
//------------------------------------------------------------------------
			fc = fopen("Matrix-Only.txt" , "a" ) ;
		
		fprintf(fc , "\n\n\t Matrix \n\n") ;
		 
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				fprintf(fc , "\t%d\t" , m[r][c] ) ;
			}
			fprintf(fc , "\n\n") ; 
		}
		}

//-------------------------------------------------------------------------------------------

		else if(uwant=='4'){
		printf("\n \t \t Matrix With Transpose");
		
	printf("\nHow many Colume You Want :" , col )  ;
		scanf("%d", &col  ) ;
	printf("How many Row You Want :" , row )  ;
		scanf("%d", &row  ) ;
		
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				
				printf("\n Enter any Value row %d col %d " , r+1 , c+1 );
				scanf("%d" , & m[r][c]  ) ;
			}
		}
		
		printf("\n\n\t Matrix \n\n") ;
		 
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				printf("\t%d\t" , m[r][c] ) ;
			}
			printf("\n") ; 
		}
		printf("\n\n\t Transpose Matrix IS \n\n") ;
		 
			for(c = 0 ; c < col ; c++ ){
				for(r = 0 ; r < row ; r++ ){
				printf("\t%d\t" , m[r][c] ) ;
			}
			printf("\n\n") ; 
		}
		
//------------------------------------------------------------------------
			fc = fopen("Matrix-transpose.txt" , "a" ) ;
		
		fprintf(fc , "\n\n\t Matrix \n\n") ;
		 
		for(r = 0 ; r < row ; r++ ){
			for(c = 0 ; c < col ; c++ ){
				fprintf(fc , "\t%d\t" , m[r][c] ) ;
			}
			fprintf(fc , "\n") ; 
		}
		fprintf(fc , "\n\n\t Transpose Matrix IS \n\n") ;
		 
			for(c = 0 ; c < col ; c++ ){
				for(r = 0 ; r < row ; r++ ){
				fprintf(fc , "\t%d\t" , m[r][c] ) ;
			}
			fprintf(fc , "\n\n") ; 
		}
			
		}

//-------------------------------------------------------------------------------------------

		else if(uwant=='5'){
		printf("\n \t \t Marksheet and File Management");

	printf("\n\nhow many student :" , student )  ;
		scanf("%d", &student  ) ;
	
	for ( s = 1 ; s <= student  ; s ++ ){
		printf("\n \t \t%d Detail of student :" , s );

	printf("\nName of student :"             );
	scanf("%s", &f_name  ) ;	
	
	printf("Enter a no for Rollnumber :" , rollnm	 );
		scanf("%d", &rollnm  ) ;

	printf("Enter a no for Chemistry :" , Chemistry  );
		scanf("%d", &Chemistry  ) ;
		
	printf("Enter a no for Maths :" , Maths			);
		scanf("%d", &Maths  ) ;
		
	printf("Enter a no for Physics :" , Physics		);
		scanf("%d", &Physics  ) ;
		
	printf("Enter a no for Urdu :" , Urdu			);
		scanf("%d", &Urdu  ) ;
		
	printf("Enter a no for English :" , English		);
		scanf("%d", &English  ) ;
		
	printf("\nStudent Name = %s " , f_name			);
	
	printf("\t\t\troll Number is = %d " , rollnm 	);
		
	
	printf("\n============================================================" ) ;
	printf("\n Subject   	Max		Min		Obtain Marks" ) ;
	printf("\n============================================================" ) ;
	
	printf("\n Physics   	100		36		  %d  "  , Physics ) ;
	printf("\n Chemistry	100		36		  %d  "  , Chemistry ) ;
	printf("\n Maths     	100		36 		  %d  "  , Maths ) ;
	printf("\n Urdu     	100		36 		  %d  "  , Urdu ) ;
	printf("\n English   	100		36 		  %d  "  , English ) ;
	printf("\n============================================================" ) ;
	total = Physics + Chemistry + Maths + Urdu + English ;
	percentage=float((total)*100)/500;
	printf("\n 				Total		  %d  "  , total ) ;
	printf("\n				Percentage is     %.2f  "  , percentage ) ;
	printf("\n============================================================" ) ;
	
    printf("\n\n");
  
	
	fc = fopen("project-Marksheet.txt" , "a" ) ;
	
	fprintf(fc , "\n\nStudent Name is = %s " , f_name   ) ;
	fprintf(fc , "\t\tRoll Number is = %d " , rollnm );
	
	fprintf(fc , "\n============================================================" ) ;
	fprintf(fc , "\n Subject   	Max		Min		Obtain Marks" ) ;
	fprintf(fc , "\n============================================================" ) ;
	fprintf(fc , "\nobtain Number in Chmistry = %d " , Chemistry );
	fprintf(fc , "\nobtain Number in Maths    = %d " , Maths );
	fprintf(fc , "\nobtain Number in Physics  = %d " , Physics );
	fprintf(fc , "\nobtain Number in Urdu     = %d " , Urdu );
	fprintf(fc , "\nobtain Number in English  = %d " , English );
	fprintf(fc , "\n============================================================" ) ;
	fprintf(fc , "\n\tTotal = %d", total);
	fprintf(fc , "\n\tpercentage = %.2f",percentage);
	fprintf(fc , "\n============================================================" ) ;
}
		}

//-------------------------------------------------------------------------------------------
		else{
			printf("opsss u enter a worrng");
		}
	
}


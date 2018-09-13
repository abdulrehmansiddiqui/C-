#include <stdio.h>
#include <conio.h>

main()
{ 	int Physics, Chemistry, Maths,  Urdu ,  English , obt , tot , remark ;

	printf("Enter The Number Of Physics"  );
	scanf("%d" , &Physics );
	printf("Enter The Number Of Chemistry" );
	scanf("%d" , &Chemistry );
	printf("Enter The Number Of Maths" );
	scanf("%d" , &Maths );
	printf("Enter The Number Of Urdu" );
	scanf("%d" , &Urdu );
	printf("Enter The Number Of English" );
	scanf("%d" , &English );
	float per ;
	obt       = Physics + Chemistry + Maths + Urdu + English ;
	tot       = 500 ;
	per = float(obt) *100 / tot ;

	printf("\n ============================================================" ) ;
	printf("\n Subject   	Max		Min		Obtain Marks" ) ;
	printf("\n \br============================================================" ) ;

	printf("\n Physics   	100		36		  %d  "  , Physics ) ;
	printf("\n Chemistry	100		36		  %d  "  , Chemistry ) ;
	printf("\n Maths     	100		36 		  %d  "  , Maths ) ;
	printf("\n Urdu     	100		36 		  %d  "  , Urdu ) ;
	printf("\n English   	100		36 		  %d  "  , English ) ;
	printf("\n ============================================================" ) ;
	printf("\n 				Total		  %d  "  , obt ) ;
	printf("\n				Percentage is     %.2f  "  , per ) ;

	if (per>=101)
    	{printf ("\n				Your Enter The Wrong Value");}

	if (per>=85)
    	{printf ("\n				Your Grade Is A+");}

	if (per>=75)
    	{printf ("\n				Your Grade Is A");}

	else if (per>=65)
	    {printf ("\n				Your Grade Is B");}

	else if (per>=55)
    	{printf ("\n				Your Grade Is C");}

	else
    	{printf ("\n				Your Are Fail");}
	
	printf("\n ============================================================" ) ;
	printf("\n\n\n" ) ;

 getch ();

 return 0;
}


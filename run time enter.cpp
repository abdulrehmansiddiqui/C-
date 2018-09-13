#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   FILE *fp;
	
	char a[20] , b[50] ;

   fp = fopen ("file with text.txt", "a");
   

	printf("Enter a First name" ) ;
	scanf("%s" , &a  ) ;   
   
   printf("Enter a Last name" ) ;
		scanf("%s" , &b  ) ;
		
   fprintf(fp, "\n%s \n%s" , a , b );
   
   fclose(fp);

}

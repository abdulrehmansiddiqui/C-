
#include <stdio.h> 
int main()

{
	struct emp {
	
	int id ;
	char name[100] ;
	int sal ;
	
	} ;
	
	struct emp e ;
	
	
	printf("Enter emp id = "  ) ;
	scanf("%d" ,  &e.id   );
	
	
	printf("Enter emp name = "  ) ;
	//gets(e.name);
	scanf("%s" ,  &e.name   );
	
	printf("Enter emp salary = "  ) ;
	scanf("%d" ,  &e.sal   );
	
	printf("\n\nAns") ;
	
	
	printf("\n\n%d"  , e.id  ) ;
	printf("\n\n%s"  , e.name ) ;
	printf("\n\n%d"  , e.sal  ) ;

}


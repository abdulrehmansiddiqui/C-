// Data structure

#include<stdio.h>
main(){
	
	struct bio {
		
		char fname[50] ;
		char lname[50] ;
		int age  ;
		int sal;
		
	};
	
	struct bio emp ;

	printf("Enter your name : ") ;
	scanf("%s" , &emp.fname) ;
	
	printf("Enter your Last name : ") ;
	scanf("%s" , &emp.lname) ;
	
	
	printf("Enter your age : ") ;
	scanf("%d" , &emp.age) ;

	printf("Emp Salary : ") ;
	scanf("%d" , &emp.sal) ;
	

	printf("\n\nEmp Name = %s  " , emp.fname  );
	
	printf("\n\nEmp Name = %s  " , emp.lname  );

	
	
	printf("\n\n%s %s's age is %d "   , emp.fname , emp.lname, emp.age ) ;

	printf("\n\n%s Salary =  %d  " , emp.fname ,emp.sal  );
	
	
	
}

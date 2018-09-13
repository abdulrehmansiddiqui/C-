#include<stdio.h>

	int add(int a , int b , int c);
	int sss(int a);
	
main(){
	int x , y , h , z;
	x = 4  ;
	y = 50 ;
	z = 7  ;
	printf("\nA = %d" , x )	;
	printf("\nB = %d" , y )	;
	printf("\nC = %d" , z )	;
	
	sss(x)					;
	
	h = add(x,y,z)			;
	
	printf("\nThe result of x + y + z = %d" ,h);
}
		/* 1 function*/
	int add(int a , int b , int c){
		int f ;
		f=a+b+c;
	}
		/* 2 function*/	
	int sss(int a){
		printf(" \n\gggggggggggggg\n\n");
	}

#include <stdio.h>

int main()
{
	int row , col , c , r , mat[10][10], trans[10][10];
	
	printf("Number of rows of matrix");
	scanf("%d" , &row );
	
	printf("Number of columns of matrix");
	scanf("%d" , &col );

	printf("\n\nEnter the Value of matrix \n");
	
	for( c = 0 ; c < row ; c++ )
	{
		for( r = 0 ; r < col ; r++ )
		{
			printf("Enter the Value col %d row %d = " , c+1 , r+1 );
			scanf("%d" , &mat[c][r] );
			
		}
	}
	
	for( c = 0 ; c < row ; c++ )
	{
		for( r = 0 ; r < col ; r++ )
		{
			trans[r][c] = mat [c][r];
		}
	}
	
		printf("\n\n");
	printf("transpose of enterd matrix\n\n");
	
	for( c = 0 ; c < col ; c++ )
	{
		for( r = 0 ; r < row ; r++ )
		{
			printf("\t%d\t\t" , trans[c][r] );
		}
		printf("\n\n");
	}
		printf("\n\n");
		
	printf("row klo col main matrix is \n\n");
		
	for( c = 0 ; c < row ; c++ )
	{
		for( r = 0 ; r < col ; r++ )
		{
			printf("\t%d\t\t" , mat[c][r] );
		}
		printf("\n\n");
	}
	
		printf("\n\n");
		
	printf("reall matrix is \n\n");
		
	for( c = 0 ; c < col ; c++ )
	{
		for( r = 0 ; r < row ; r++ )
		{
			printf("\t%d\t\t" , mat[c][r] );
		}
		printf("\n\n");
	}
	
	
}



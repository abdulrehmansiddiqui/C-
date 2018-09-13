

#include<stdio.h>

 main(){
 	
	char str[30];
	
	FILE *p;
	
	if((p=fopen("Cal.txt","r"))==NULL){
	printf("\nUnable to open file Cal.txt");
	
	
	}
	while(fgets(str,30,p)!=NULL)
	puts(str);
	fclose(p);
	
}



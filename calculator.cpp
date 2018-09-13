#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int num,num1,num2;
 char oper;
 printf("\t\t\tCalculator\n");
 printf("Choose operator\n");
 scanf("%c",&oper);
 printf("Choose number 1 and number 2\n");
 scanf("%d",&num1);
scanf("%d",&num2);
if(oper=='+')
{
	num=num1+num2;
	printf("The value is %d\n",num);
}

else if(oper=='-')
{
	num=num1-num2;
	printf("The value is %d\n",num);
}

else if(oper=='*')
{
	num=num1*num2;
	printf("The value is %d\n",num);
}
else 
{
	num=num1/num2;
	printf("The value is %d\n",num);
}
}


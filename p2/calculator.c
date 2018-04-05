/*****************************************************
	Program:		calculator.c
	Description:	add,subtract,multiply,divide two numbers
	***************************************************
	Revision History
	
	Revision Number:0
	Author: 		Genwu
	Date:			2018/04/04
	Description of change: Initial revision
		
*/

#include <stdio.h>
#include <stdlib.h>      // strtod  


double getN();
char getOper();
void calculator(double,char,double);

int main() {
	
	double a,b;
	char operator;
	
	printf("Enter your first number: \n");
	a=getN();
	
	printf("Enter your second number: \n");
	b=getN();
	
	printf("Enter your operator + - * / \n");
	operator=getOper();
	
	calculator(a,operator,b);
	
   return 0;
}

void calculator(double a, char operator, double b){
		
	switch(operator){
			
		case '+':
        	printf("%.1lf + %.1lf = %.1lf\n\n",a, b, a+b);
        	break;

    	case '-':
       	 	printf("%.1lf - %.1lf = %.1lf\n\n",a, b, a-b);
        	break;

    	case '*':
        	printf("%.1lf * %.1lf = %.1lf\n\n",a, b, a*b);
        	break;

   		case '/':
        	printf("%.1lf / %.1lf = %.1lf\n\n",a, b, a/b);
        	break;

    	default:
        printf("Error!");
		
	}	
			
}

char getOper(){
	char oper;    
	while (scanf(" %c",&oper)) {
        
        if (!(oper == '-' || oper == '+' || oper == '*' || oper == '/')) {
            printf("Error! Please enter operator + - * / \n ");
        } else break;
    }
    printf("You entered: %c\n\n", oper);
	return oper;	
}

double getN(){
	double n;
	char c,*p,s[50];
    while (fgets(s, sizeof(s), stdin)) {
        n = strtod(s, &p);
        if (p == s || *p != '\n') {
            printf("Error! Please enter a number: ");
        } else break;
    }
    printf("You entered: %.1lf\n\n", n);
	return n;	
}
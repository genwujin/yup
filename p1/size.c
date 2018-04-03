/*****************************************************
	Program:		size.c
	Description:	Output the size of different type
					in bytes
	***************************************************
	Revision History
	
	Revision Number:0
	Author: 		Genwu
	Date:			2018/03/31
	Description of change: Initial revision
		
*/

#include <stdio.h>

int main() {
	
   printf("Storage size for int : %ld byte\n" , sizeof(int));
   printf("Storage size for char : %ld byte \n" , sizeof(char));
   printf("Storage size for long : %ld byte \n" , sizeof(long));
   printf("Storage size for double : %ld byte \n", sizeof(double)); 
   printf("Storage size for float : %ld byte \n", sizeof(float));
   printf("Storage size for unsigned char : %ld  byte\n", sizeof(unsigned char));
   printf("Storage size for unsigned int : %ld  byte\n", sizeof(unsigned int));
   printf("Storage size for unsigned long : %ld byte \n", sizeof(unsigned long));
   
   return 0;
}
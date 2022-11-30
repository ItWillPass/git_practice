#include <stdio.h>
#include <stdlib.h>
//ввод с клавиатуры прям в параметрах 
int main(int argc,char* argv[])
{
int a=atoi(argv[1]),b=atoi(argv[3]);
char c=argv[2][0];
switch(c){
	case '-':
		printf("%i",a-b);
		break;
	case '+':
		printf("%i",a+b);
       		 break;
	case '*':
		printf("%i",a*b);
        	break;
	case '/':
		printf("%i",a-b);
       		 break;



}
}

#include <stdio.h>
#include <stdlib.h>

// Simple calculator in C programming
char op;

void add(){
	system("clear");
	int a,b;
	printf("\n\nEenter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("%d + %d = %d",a,b,a + b);
	
}
void sub(){
	system("clear");
	int a,b;
	printf("\n\nEenter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("%d - %d = %d",a,b,a - b);
	
}
void div(){
	system("clear");
	int a,b;
	printf("\n\nEenter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("%d ÷ %d = %d",a,b,a / b);
	
}
void mult(){
	system("clear");
	int a,b;
	printf("\n\nEnter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("%d × %d = %d",a,b,a * b);
	
}
int main()
{  
   printf("                          Simple Calculator \n");
   printf("\n            Operators : + - / * ");
   printf("\n\nEnter operator : ");
   scanf("%c",&op);
   printf("By Peter ");
   switch(op){
		case '+' :
		add();
		break;
		case '-' :
		sub();
		break;
		case '/' :
		div();
		break;
		case '*' :
		mult();
		break;
	}
}

//Control flow of function 


#include<stdio.h>

void fun();
void funOne();
void funTwo();
void funThree();

int main()
{
	printf("1. in main()\n");
	fun();
	printf("2. in main()\n");
}

void fun()
{
	printf("1. in fun()\n");
        funOne();
        printf("2. in fun()\n");
}

void funOne()
{
	printf("1. in funone()\n");
        funTwo();
        printf("2. in funone()\n");
}

void funTwo()
{
	printf("1. in funtwo()\n");
        funThree();
        printf("2. in funtwo()\n");
}

void funThree()
{
	printf("funthree() called\n");
}


// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// declaration/prototype/interface
int foo(int bar);
// defintion implentation
int foo(int bar)
{
	return (bar + 1);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int test = foo(9000);
	printf("\n %d \n", test);
	system("pause");
}

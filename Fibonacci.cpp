/*
 * Fibonacci.cpp
 *
 *  Created on: 08.05.2016
 *      Author: wangd
 */
#include<iostream>
#include<stdio.h>
unsigned int fibonacci (unsigned int fib)
{
	if (fib==0)
	{
		return 0;
	}
	else if (fib==1)
	{
		return 1;
	}
	else
	{
		return fibonacci (fib-1)+fibonacci (fib-2);
	}
}

int main (int argc, char **argv)
{
	int fib[26];
	std::cout << "Fibonacci-Zahlen:" << std::endl;
	for (int i=0; i<=25; i++)
	{
		fib[i]=fibonacci(i);
		std::cout << "f("<<i<<")=" << fib[i] << std::endl;
	}
	return 0;
}


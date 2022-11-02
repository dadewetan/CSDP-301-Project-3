//Writen by: Daniel Adewetan
//Date: 11/2/2022
//Name: CalculateSum
//Descrpition: Computing sum of an array with c/c++ and assembly

#include<iostream>
#include<stdlib.h>

extern "C" int AdderSUM(int b, int c, int d); //the protocoLS
extern "C" int AdderCPP(int b, int c, int d); 

int AdderCPP(int b, int c, int d)
{
	return b + c + d;
}


int main() //The main functio
{
	int b = 14, c = 12, d = 17; //The variables
	
	int theSum1 = 0; 
    
	int theSum2 = 0;

	theSum1 = AdderSUM(b, c, d); //These are the functions, we must call them

	theSum2 = AdderCPP(b, c, d);

	printf("\n I'll call an assembly function to find sum \n"); //This will find the sum with c

	printf("The first sum = %d \n", theSum1); //displaying answer with c

	printf("\n I'll call a c++ function AdderCPP to compute the sum.\n"); //This will find the sum with c++

	printf("The second sum = %d \n", theSum2); //displaying with c++
}


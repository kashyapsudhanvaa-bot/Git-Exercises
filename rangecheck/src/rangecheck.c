/*
 ============================================================================
 Name        : rangecheck.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


 void rangeCheck(int value, int low, int high)
 {
	 if (value < low || value > high)
		 printf("Out of range: %d\n", value);

}

 int main()
 {
	 rangeCheck(14,15,25);
 }

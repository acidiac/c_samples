/*
* @Author: amitchanchal
* @Date:   2016-09-13 23:34:44
* @Last Modified by:   amitchanchal
* @Last Modified time: 2016-09-14 15:07:39
*/

#include <stdio.h>

int main() {

	int a = 10;

	/* 
	 * pa a pointer of type integer
	 * what is basically means is that at address (pa) an integer value will be stored
	 */
	int *pa;

	pa = &a; 

	// & is used to get address of a given variable 
	printf("Value of the variable [a]: %d \n", a);
	printf ("Address of the variable [a]: %u \n", &a);

	// * is used to get address of a given variable

	printf("just goofing around %d \n", *(&a));
    return 0;
}
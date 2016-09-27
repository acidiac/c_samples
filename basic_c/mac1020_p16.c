/*
* @Author: amitchanchal
* @Date:   2016-09-11 13:09:28
* @Last Modified by:   amitchanchal
* @Last Modified time: 2016-09-11 13:16:54
*/

#include <stdio.h>

int main() {
	int a, b, c; 
	long int output;
	printf("Provide the first Number:\n");
	scanf("%d", &a);
	printf("provide the second numner: \n");
	scanf("%d", &b);
	printf("provide the third number: \n");
	scanf("%d", &c);
	output = a+b+c;
	printf("Addition of the numbers are: %ld\n", output);
	output = a*b*c;
	printf("product of three numbers are: %ld\n", output);
	output = a-b-c;
	printf("subtraction of three numbers is : %ld\n", output);
    return 0;
}
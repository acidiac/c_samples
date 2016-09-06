/*
 * REVISITING "C"
 * Author: Amit Chanchal
 * Date: 5 September 2016
 * Exercises from Cardiff University C Course
 * url: http://www.cs.cf.ac.uk/Dave/C
 * Exercise Number: 12270
 * Exercise: Input two numbers and work out their sum, average and sum of the squares of the numbers.
 */

#include<stdio.h>

int main(){
	int a, b, sum, sq_sum;
	float avg;
	printf("please provide first number:\n");
	scanf("%d", &a);
	printf("please provide second number:\n");
	scanf("%d", &b);
	sum = a+b;
	printf("sum:%d\n", sum);
	avg = (a+b)/2.0;
	printf("average:%4.2f\n", avg);
	sq_sum = (a*a)+(b*b);
	printf("Sum of squares:%d\n", sq_sum);
	return 0;
}

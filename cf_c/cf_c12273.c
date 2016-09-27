/*
 * REVISITING "C"
 * Author: Amit Chanchal
 * Date: 5 September 2016
 * Exercises from Cardiff University C Course
 * url: http://www.cs.cf.ac.uk/Dave/C
 * Exercise Number:12273
 * -----------------------------------------------------------------------
 * Write a program to read a "float" representing a number of degrees Celsius,
 * and print as a "float" the equivalent temperature in degrees Fahrenheit. Print your results in a form such as
 * 100.0 degrees Celsius converts to 212.0 degrees Fahrenheit.
 */
// Preprocessor directives, includes
#include <stdio.h>
#include <stdlib.h>


//forward declaration
float ctof (float celcius);

int main(){
	float result = ctof(100.0);
	printf("%.1f degrees Fahrenheit\n", result);
	return 0;
}



float ctof (float celcius){
	float far;
	far = (celcius*9.0/5.0) + 32;
	return far;
}

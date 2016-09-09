/*
 * REVISITING "C"
 * Author: Amit Chanchal
 * Date: 5 September 2016
 * Exercises from Cardiff University C Course
 * url: http://www.cs.cf.ac.uk/Dave/C
 * Exercise Number:12272
 * -------------------------------------------------------------------
 * Write a program that works out the largest and smallest values from a set of 10 inputted numbers.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
 	int numbers[10];
 	int max=0; 
 	for (int i=0; i<10; i++){
 		printf("enter a number:\n");
 		scanf("%d", &numbers[i]);
 	}
 	printf("thank you for providing us with the number, let us compute\n");
 	for (int i=0; i<10; i++){
 		if(numbers[i] > max){
 			max = numbers[i];
 		}
 	}
 	printf("Largest number you entered was: %d\n", max);

 	return 0;

 }

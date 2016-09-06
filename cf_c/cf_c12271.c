/*
 * REVISITING "C"
 * Author: Amit Chanchal
 * Date: 5 September 2016
 * Exercises from Cardiff University C Course
 * url: http://www.cs.cf.ac.uk/Dave/C
 * Exercise Number: 12271
 * Exercise: Input and output your name, address and age to an appropriate structure.
 */

#include<stdio.h>

/*
 * !!Check the char input as string
 */

int main(){
	char name, add_apts, add_street, add_city;
	int age;
	printf("your name please: \n");
	scanf("%c", &name);
	printf("your age:\n");
	scanf("%d", &age);
	printf("Apartment Name and number: \n");
	scanf("%c", &add_apts);
	printf("Street: \n");
	scanf("%c", &add_street);
	printf("city: \n");
	scanf("%c", &add_city);
	// printing out the details
	printf("Hello %c, your age is %d\n", name, age);
	printf("your address:\n");
	printf("------------------------\n");
	printf("%c,\n%c,\n%c\n", add_apts, add_street, add_city);
	return 0;
}

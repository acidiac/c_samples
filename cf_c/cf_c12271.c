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
 * this kind of works but its a super hacky thing
 * need to have a better way to deal with the inputs and be able to take spaces
 */

int main(){
	char name[25], add_apts[150], add_street[150], add_city[75];
	int age;
	printf("your name please: \n");
	scanf("%s", name);
	printf("your age:\n");
	scanf("%d", &age);
	printf("Apartment Name and number: \n");
	scanf("%s", add_apts);
	printf("Street: \n");
	scanf("%s", add_street);
	printf("city: \n");
	scanf("%s", add_city);
	// printing out the details
	printf("Hello %s, your age is %d\n", name, age);
	printf("your address:\n");
	printf("------------------------\n");
	printf("%s,\n%s,\n%s\n", add_apts, add_street, add_city);
	return 0;
}

/*
* @Author: amitchanchal
* @Date:   2016-09-15 21:30:00
* @Last Modified by:   amitchanchal
* @Last Modified time: 2016-09-15 21:50:53
*/

#include <stdio.h>

int main() {

	// Array declaration of int type with 5 elements
	int ar[5] = {1,2,3,4,5};

	long int arl[2]= {786876767, 87878787};
	
	// the array variable itself point to the address of the first element
	printf("Array: %d, address of first element: %d\n", ar, &ar[0]);
	// Array: 1431128688, address of first element: 1431128688
	
	printf("Value at ar address: %d, value of first element :%d\n", *ar, ar[0]);
	// as expected : Value at ar address: 1, value of first element :1

	// lets print all the addresses to see how they relate to eachother
	printf("adresses in the array %d, %d, %d, %d, %d\n", ar, ar+1, ar+2, ar+3, ar+4);
	/* 
	adresses in the array 1357531760, 1357531764, 1357531768, 1357531772, 1357531776
	we can see that corresponding addresses have difference of 4 bytes.
	which is also the size allocated to int type.
	*/

	// we can test it the storage allocation again with long int
	printf("address in the array: %d, %d \n", arl, arl+1);
	/*
 		address in the array: 1352321632, 1352321640
		we can see here that difference is 8 bytes which is standard allocation for long int type
	*/

	printf("value at second: %d, value at third: %d and so on \n", *(ar+1), *(ar+2));

	/*
		let's try all of these in a loops to see their value
		what we want to show is ar[i] = *(ar+i)
	*/

	for (int i = 0; i<5; i++){
		printf("%d and %d \n", ar[i], *(ar+i));
	}	

	int *par;
	par = ar;
	printf("%d\n", par+1);


    return 0;
}
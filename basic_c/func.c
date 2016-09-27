/*
* @Author: amitchanchal
* @Date:   2016-09-27 00:34:24
* @Last Modified by:   amitchanchal
* @Last Modified time: 2016-09-27 10:22:05
*/

#include <stdio.h>


/*
	If function is declared below the calling function then compiler will know 
	that the function exist at the call time. Depend on the compiler you are using
	it will either give and error or an warning.

	There are two possible solutions to this:
	Solution 1: Declare the function above the calling function
	Solution 2: Have a forward declaration of the function prototype which tells the compiler that
				it should expect the function later on in the code, so it does not complain.

*/

// Function prototype and forward declaration 
//int sumnum();
int greatest(int a, int b);
int sum_series (int a);


// Main function
int main() {
	//int s= sumnum();
	//int num1 = 10;
	//int num2 = 20;
	int seriesnum;

	printf("get me the number to find sum of: \n");
	scanf("%d", &seriesnum);
	printf("sum of the series %d\n", sum_series(seriesnum));
	// we are calling the function greatest with two parameters, num1 and num2
	//printf("greater number is %d\n", greatest(num1, num2));
	//printf("sum of the number %d\n", s);

    return 0;
}
/*
int sumnum(){
	int a,b,c;
	printf("Enter the first number:\n");
	scanf("%d", &a);
	printf("Enter the second number:\n");
	scanf("%d", &b);
	printf("Enter the third number:\n");
	scanf("%d", &c);
	return a+b+c;

}

*/

/*
	What we see below is call FUNCTION DEFINITION
	the first line "int greatest(int a, int b)" is called the FUNCTION HEADER and the 
	code block which follows between the curly braces {....} is called FUNCTION BODY

	the return value of a function should be of datatype of the declaration, the datatype stated before
	the function name.

	if a function does not return a value then we should declare it with void 
	void <function_name> (){....}

*/

int greatest(int a, int b){
	if (a > b)
		return a;
	else return b;
	
}


int sum_series (int a){
	int i;
	int sum=0;

	for (i=0; i <= a; i++){
		sum +=  i;
	}

	return sum;

}


// Preprocessor Commands
#include <stdio.h>

// Declaration of Main Function ( A must for each program)
int main(){
	printf("hello\n");
	// Output formatting with (%s)-- string, which acts like a placeholder
	printf("%s\n", "Hello again!" );
	// %d -- integer value
	printf("%d\n", 56);
	// %f decimal value
	printf("%f\n", 45.05);
	// %ld large integer
	printf("%ld\n",78978978978979);
	//%lf -- large float
	printf("%lf\n", 987897.989798);
	// %x -- hex value
	printf("%x\n", 16);
	// You can also use puts function for output but you will not have option of formatting
	puts("woohoo this one is from puts\n");
	return 0;

}

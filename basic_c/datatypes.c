/*
* @Author: amitchanchal
* @Date:   2016-09-09 20:59:28
* @Last Modified by:   amitchanchal
* @Last Modified time: 2016-09-09 21:05:43
*/

#include <stdio.h>

int main() {
	int age;
	printf("Tell us your age:");
	scanf("%d", &age);
	if (age >= 18){
		printf("you can enter!\n");
	} else {
		printf("sorry you have to wait for %d years\n", 18-age);
	}

    return 0;
}
/*
 * Name : Muhammad Fajar Pamungkas
 * NPM : 1706106835
 * Class : Extension
 * Comment : C is awesome
 */

#define LOOP 10 // define ME!
#include <stdio.h>

void main(){
	int input = 5;
	int ii;
	int result = 1;
	for (ii = 0; ii < LOOP ; ii++){
		result = result*input;		
	}

	printf("Result = %d\n",result);
}

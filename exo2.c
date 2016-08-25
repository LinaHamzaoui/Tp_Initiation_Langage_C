#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
    float x, y;
	printf("x = ");
	scanf("%f", &x);
	printf("y = ");
	scanf("%f", &y);
	printf("%f+%f = %.2f\n", x, y, x+y);
	printf("%f-%f = %.2f\n", x, y, x-y);
	printf("%f*%f = %.2f\n", x, y, x*y);

	if(y!=0){
		printf("%f/%f = %.2f\n", x, y, x/y);
	}else{
		printf("Impossible de diviser par zéro.\n");
	}
	
	return 0;
}

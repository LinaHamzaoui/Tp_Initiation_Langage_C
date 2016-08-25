#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
	float x1, x2, y1, y2, a1, b1, a2, b2, X, Y;
	printf("Premiere droite : \n");
	printf("Coordonnees du premier point : \n");
	printf("x : ");
	scanf("%f", &x1);
	printf("y : ");
	scanf("%f", &y1);
	printf("Coordonnees du deuxieme point : \n");
	printf("x : ");
	scanf("%f", &x2);
	printf("y : ");
	scanf("%f", &y2);

	a1 = (y2-y1)/(x2-x1);
	b1 = y1-(a1*x1);

	printf("L'équation de la premiere droite est : y = %.2f * x + %.2f\n",a1,b1);
	
	printf("Deuxieme droite : \n");
	printf("Coordonnees du premier point : \n");
	printf("x : ");
	scanf("%f", &x1);
	printf("y : ");
	scanf("%f", &y1);
	printf("Coordonnees du deuxieme point : \n");
	printf("x : ");
	scanf("%f", &x2);
	printf("y : ");
	scanf("%f", &y2);

	a2 = (y2-y1)/(x2-x1);
	b2 = y1-(a2*x1);

	printf("L'équation de la deuxieme droite est : y = %.2f * x + %.2f\n",a2,b2);

	X=(b2-b1)/(a1-a2);
	Y= (a1*X) + b1;

	printf("Les coordonnées du point d'intersection est : (%.2f,%.2f)\n",X,Y);
	
	return 0;
}
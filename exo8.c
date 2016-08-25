#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
    char saison;
    printf("Choisir une saison en entrant une lettre :");
    printf("\np pour Printemps, e pour ete, a pour automne, h pour hiver\n");
    saison=getchar();
    saison=tolower(saison); /* on met la lettre en minuscule */
    switch(saison){
    	case 'p' : printf("Printemps\n"); break;
    	case 'e' : printf("Ete\n"); break;
    	case 'a' : printf("Automne\n"); break;
    	case 'h' : printf("Hiver\n"); break;
    	default: printf("Erreur : la lettre entrée ne correspond à aucune saison\n");
    }
	return 0;
}
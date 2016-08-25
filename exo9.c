#include <stdio.h>
#include <stdlib.h>

int main()
{
   

    char sexe = '\0', reponse = '\0';

    do
    {
        printf("Votre sexe (F : Femme, H : Homme) : ");
        scanf("%c", &sexe);
        sexe = toupper(sexe);
    } while (sexe != 'F' && sexe != 'H');


   
    if (sexe == 'H')
        printf("Bonjour Monsieur !\n");
    
    else
    {
        do
        {

            int c;
            while ((c = getchar ()) != '\n' && c != EOF);

            printf("Etes-vous marie ? (O : oui, N : non) : ");
            scanf("%c", &reponseStatut);
            reponseStatut = toupper(reponseStatut);
        } while (reponseStatut != 'O' && reponseStatut != 'N');

        // Cas du mariage
        if (reponseStatut == 'O')
            printf("Bonjour Madame !\n");

        // Cas du non mariage
        else
            printf("Bonjour Mademoiselle !\n");
   

    return 0;
}
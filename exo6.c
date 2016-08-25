#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int age;
    printf("Entrez votre age : ");
    scanf("%d",&age);
    if(age=<26){
        printf("Vous pouvez beneficier du tarif jeune.\n");
    }else{
        printf("Vous ne pouvez pas beneficier du tarif jeune.\n");
    }
    return 0;
}

  
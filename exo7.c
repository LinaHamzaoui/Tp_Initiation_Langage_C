#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int age;
    printf("Entrez votre age : ");
    scanf("%d",&age);
    if(age=<26 || age>=60){
        printf("Vous pouvez beneficier du tarif reduit.\n");
    }else{
        printf("Vous ne pouvez pas beneficier du tarif reduit.\n");
    }
	return 0;
}
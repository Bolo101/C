//copie une chaine de caractères dans une autre et determine la longueur de la premiere chaine
#include <stdio.h>
#include <stdlib.h>

void longueur(char *pchaine,int *longueur);
void copy(const char *pchaineToCopy, char *chaineClone, int longueur);

int main (int argc, char* argv[]){
    char chaine[] = "Une phrase";
    char cp[100] = {0};
    int chaineLength = 0;

    longueur(chaine,&chaineLength);
    copy(chaine,cp,chaineLength);
    printf("The copied chain is \"%s\"\n",cp);

    return 0;
}

void longueur(char *pchaine,int *longueur){
    int len = 0;
    char currentcar = 0;
    do{
       currentcar = *(pchaine + len);
       len ++; 
    }
    while(currentcar != '\0');
    *longueur = len;
}

void copy(const char *pchaineToCopy, char *chaineClone, int longueur){
    for (int i = 0 ; i < longueur ; i ++ ){
        *(chaineClone + i) = *(pchaineToCopy +i);
    }
    printf("Successfully copied !\n");
}
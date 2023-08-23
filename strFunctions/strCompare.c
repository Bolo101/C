#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100

int length(char *string);
int compareString(char *string1, char *string2,int length1,int length2);

int main(void){
    char *chaine = NULL, *chaine2 = NULL;
    chaine = malloc(sizeof(char) * TAILLE);
    chaine2 = malloc(sizeof(char) * TAILLE);
    int length1 = 0, length2 = 0;

    if (chaine == NULL || chaine2 ==NULL){
        printf("Erreur\n");
        return 1;
    }
    printf("Saisie :");
    scanf("%s",chaine);
    printf("\nSaisie 2 :");
    scanf("%s",chaine2);
    length1 = length(chaine);
    length2 = length(chaine2);
    compareString(chaine,chaine2,length1,length2);
    free(chaine);
    free(chaine2);
    return 0;
}

int compareString(char *string1, char *string2,int length1,int length2){
    if (length1 !=length2){
        printf("Not equal\n");
        return 1;
    }
    for (int i = 0 ; i<length1 ; i++){
        if (string1[i] != string2[i]){
            printf("Not equal\n");
            return 1;
        }
    }
    printf("Equal\n");
}

int length(char *string){
    int longueur = 0;
    char car = *(string + longueur);
    while (car != '\0'){
        car = string[longueur];
        longueur ++;
    }
    return longueur;
}
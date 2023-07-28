//Concatenate function
#include <stdio.h>
#include <stdlib.h>

int longueur(char *pchaine);
void concatenate(char *recipient,char *objectToAdd);

int main(int argc, char* argv[]){
    char chain1[100] = "salut";
    char chain2[] = "lasagne";
    concatenate(chain1,chain2);
    printf("%s\n",chain1);

}

void concatenate(char *recipient,char *objectToAdd){
    int recipientSize = longueur(recipient);
    int objectSize = longueur(objectToAdd);
    int index = 0;
    for (int i = recipientSize ; i != recipientSize + objectSize;i++){
        *(recipient + i) = *(objectToAdd + index);
        index ++;
    }
    printf("Done\n");
}

int longueur(char *pchaine){
    int len = 0;
    char currentcar = 0;
    do{
       currentcar = *(pchaine + len);
       len ++; 
    }
    while(currentcar != '\0');
    return len - 1;
}
#include <stdio.h>
#include <stdlib.h>

void length(char *pchain);

int main(void){
    char chaine[]="hello world";
    length(chaine);
    printf("%s\n",chaine);
    return 0;

}

void length(char *pchain){
    int counter = 0;
    while (*(pchain + counter) != '\0'){
        char currentchar = *(pchain + counter);
        if(currentchar >= 'a' && currentchar <= 'z' && currentchar !=' '){
            *(pchain + counter) = currentchar - ('a' - 'A');
        }
        counter ++;
    }
}
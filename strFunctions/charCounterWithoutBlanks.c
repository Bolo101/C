#include <stdlib.h>
#include <stdio.h>
// do not count blanks in the final result. Only characters
int length (char *string);

int main(int argc , char* argv[]){
    char *string = "hello worlds";
    int longueur = length(string);
    printf("La longueur de %s est de %i caracteres", string, longueur);

}
int length (char *string){
    int space = 0;
    int counter = 0;
    int total = 0;
    char currentChar = *(string + counter);
    while (currentChar != '\0'){
        currentChar = *(string + counter);
        total ++;
        if (currentChar == ' '){
            total --;
        }
        counter ++;
    }
    return total - 1;
}
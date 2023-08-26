#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *nextNode;
}Node;

void createNode(Node **cursorNode,int _value);
void display(Node *masterN);
void deleteByValue(int _tValue,Node **cursorNode);

int main(void) {
    Node *head = NULL;

    createNode(&head,3);//& is used as we modify the head chain
    createNode(&head,2);
    createNode(&head,17);
    createNode(&head,9);
    display(head);//to display the chain list we do not modify the head chain so no need to use &. See it as a read only while & is write mode
    deleteByValue(17,&head);
    display(head);
}

void createNode(Node **cursorNode,int _value){
    Node *newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Error\n");
        exit(EXIT_FAILURE);
    }
    newNode->value = _value;
    (*newNode).nextNode = *cursorNode;
    *cursorNode = newNode;
}

void display(Node *masterN){
    Node *currentN = masterN;
    while (currentN != NULL){
        printf("Current data is %i\n",currentN->value);
        currentN = currentN->nextNode;
    }
    printf("END\n");
}

void deleteByValue(int _tValue,Node **cursorNode){
    if (*cursorNode == NULL){
        printf("Chain is empty\n");
        return;
    }

    Node *currentN = *cursorNode;
    Node *previous = NULL;

    while (currentN != NULL){
        if(currentN->value == _tValue){
            if (previous == NULL){//case the node to remove is the head one
                *cursorNode = currentN->nextNode;
            }
            else {
                previous->nextNode = currentN->nextNode;    
            }
            free(currentN);
            printf("Node has been deleted succesfully\n");
            return;
        }
        previous = currentN;
        currentN = currentN ->nextNode;
    }
    printf("Node with the value %i not found\n",_tValue);

}



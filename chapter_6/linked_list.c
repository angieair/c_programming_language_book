/*
	Chapter 6 HW - very rudimentary linked list with add, delete, and print.
    - Use structures to implement a very rudimentary singly linked list for integers with an ability to add, delete, and print
    - UI can be like the following
    - a 5 to add 5 to the list
    - d 5 to delete 5 from the list (don’t worry about error reporting and only need to delete one occurrence)
    - p to print the list
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

void PrintList(Node **list);
void AddNode(Node **list, int value);
void DeleteNode(Node **list, int value);
int GetLine(char s[], int lim);

int main(void)
{
    Node* list = NULL;

    AddNode(&list, 1);
    AddNode(&list, 2);
    AddNode(&list, 3);
    AddNode(&list, 4);
    AddNode(&list, 5);
    PrintList(&list);    

    DeleteNode(&list, 5);
    PrintList(&list);

    // int len;                    /* current line length */
    // char line[MAXLINE];         /* current input line */
    //
    // while ((len = GetLine(line, MAXLINE)) > 0)
    // {
    //     printf("\n%s\n", line);
    // }

    return 0;
}

void PrintList(Node **list)
{
    Node *currentNode = *list;
    while (currentNode != NULL)
    {
        printf(" %d ", currentNode->value);
        currentNode = currentNode->next;
    }
    printf("\n");
}

void AddNode(Node **list, int value)
{
    Node *currentNode = *list;

    /* create a new node */
    Node *newNode = (Node*)malloc(sizeof(Node)); 
    newNode->value = value;
    newNode->next = NULL;

    if (*list == NULL)
    {   
        /* add as first node if list is empty */
        *list = newNode;
    }
    else 
    {
        /* loop to last node of linked list */
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }

        /* add new node to end of linked list */
        currentNode->next = newNode;
    }
}

void DeleteNode(Node **list, int value)
{
    Node *previousNode = NULL;
    Node *currentNode = *list;
    
    if (*list == NULL)
    {
        /* exit if list is empty */
        return;
    }

    if ((previousNode == NULL) && (currentNode->value == value))
    {
        /* delete first node */
        *list = currentNode->next;
        free(currentNode);
        return;
    }   

    while (currentNode != NULL)
    {
        if (currentNode->value == value)
        {
            /* delete current node */
            previousNode->next = currentNode->next;
            free(currentNode);
            currentNode = previousNode->next;
            return;
        }
        else 
        {
            /* advance to next node */
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
    }
}

/* GetLine: read a line into s, return length */
int GetLine(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < (lim-1) && (c = getchar()) != EOF; ++i)
        s[i] = c;
    
    s[i] = '\0';
    return i;
}
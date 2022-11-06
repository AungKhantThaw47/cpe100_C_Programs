#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *previous;
    struct Node *next;
};

struct LinkedList
{
    struct Node *tail;
    struct Node *head;
    int length;
    void (*addNode)(struct LinkedList *, int);
    void (*print)(struct LinkedList *);
    int (*traverse)(struct LinkedList *);
};

void AddNewNode(struct LinkedList *LL, int value)
{
    // printf("Add\n");
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    LL->length++;
    node->value = value;
    node->previous = LL->head;
    node->next = LL->tail;
    // printf("New node value: %d\n",node->value);
    // printf("New node: %d\n", node);
    if (LL->tail == NULL)
    {
        LL->tail = node;
        LL->head = node;
    }
    else
    {
        LL->head->next = node;
        LL->head = node;
        LL->tail->previous = node;
    }
}

void DisplayNodes(struct LinkedList *LL)
{
    // printf("Display\n");
    struct Node *node = LL->tail;
    // printf("%d\n",(*node).value);
    do
    {
        // printf("node: %d\n", node);
        printf("%d\n", node->value);
        struct Node *temp = node->next;
        node = temp;
    } while (node != LL->tail);
    // printf("Lenght: %d\n", LL->length);
}

int Traverse(struct LinkedList *LL)
{
    struct Node *LNode = LL->tail;
    struct Node *RNode = LL->head;
    int counter = 0;
    do
    {
        // printf("%c : %c\n",(char)LNode->value,(char)RNode->value);
        if(LNode->value!=RNode->value){
            return 0;
        }
        struct Node *temp;
        temp=LNode->next;
        LNode = temp;
        temp=RNode->previous;
        RNode = temp;
        counter++;
    }
    while ( counter<LL->length/2 );
    return 1;
}

int main()
{
    char str[1000];
    struct LinkedList List;
    List.tail = NULL;
    List.head = NULL;
    List.length = 0;
    List.addNode = AddNewNode;
    List.print = DisplayNodes;
    List.traverse = Traverse;
    scanf("%s",str);
    // printf("%s",str);
    for (int i = 0; i < 1000; i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
        List.addNode(&List,(int)str[i]);
    }
    if(List.traverse(&List)==1)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
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
    void (*traverse)(struct LinkedList *);
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
    int count=0;
    // printf("%d\n",(*node).value);
    do
    {
        // printf("node: %d\n", node);
        if(node->value!=0)
            printf("%d\n", node->value);
        else
            count++;
        struct Node *temp = node->next;
        node = temp;
    } while (node != LL->tail);
    for (int i = 0; i < count; i++)
    {
        printf("0\n");
    }
    
    // printf("Lenght: %d\n", LL->length);
}

void Traverse(struct LinkedList *LL)
{
    struct Node *EndNode = LL->tail;
    struct Node *StartNode = LL->head;
    do{
        printf("%d\n",StartNode->value);
        struct Node *TempNode = StartNode->previous;
        StartNode = TempNode;
    } while (StartNode!=LL->head);
}

int main()
{
    int len;
    struct LinkedList List;
    List.tail = NULL;
    List.head = NULL;
    List.length = 0;
    List.addNode = AddNewNode;
    List.print = DisplayNodes;
    List.traverse = Traverse;
    scanf("%d",&len);
    for (int i = 0; i < len; i++)
    {
        int temp;
        scanf("%d",&temp);
        List.addNode(&List,temp);
    }
    List.print(&List);
    return 0;
}
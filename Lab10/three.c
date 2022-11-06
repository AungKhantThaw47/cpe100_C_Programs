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
    void (*delete)(struct LinkedList *, int);
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

void DeleteNode(struct LinkedList *LL, int jump)
{
    // printf("Delete\n");
    while (LL->length != 1)
    {
        struct Node *node = LL->tail;
        for (int i = 1; i < jump; i++)
        {
            struct Node *temp = node->next;
            node = temp;
        }
        // printf("node: %d\n", node);
        // printf("%d\n", node->value);
        struct Node *pre = node->previous;
        struct Node *post = node->next;
        // printf("pre node: %d\n", pre);
        // printf("pre value %d\n", pre->value);
        // printf("post node: %d\n", post);
        // printf("post value %d\n", post->value);
        pre->next = node->next;
        post->previous = node->previous;
        LL->head = pre;
        LL->tail = post;
        free(node);
        LL->length--;
    }
}

int main()
{
    struct LinkedList List;
    List.tail = NULL;
    List.head = NULL;
    List.length = 0;
    List.addNode = AddNewNode;
    List.print = DisplayNodes;
    List.delete = DeleteNode;
    int len;
    int jump;
    scanf("%d", &len);
    scanf("%d", &jump);
    if(len==0){
        printf("%d",0);
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        List.addNode(&List, (i + 1));
    }
    List.delete(&List, jump);
    List.print(&List);
    return 0;
}
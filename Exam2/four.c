#include <stdio.h>
#include <stdlib.h>

struct Item
{
    char name[100];
    int quantity;
    int price;
    int totalPrice;
};

int CompareFunction(const void * a, const void * b) {
    if(((struct Item*)a)->totalPrice > ((struct Item*)b)->totalPrice)
        return 1;
    return -1;
}

void TotalPrice(struct Item *item)
{
    item->totalPrice = item->quantity * item->price;
}

void Evaculate(struct Item *itemArr, int len, int isPresent)
{
    if (len <= 0)
    {
        if (isPresent == 0)
        {
            printf("None");
        }
        return;
    }
    int toCheck = itemArr->totalPrice;
    int RoomNo[len];
    RoomNo[0] = 0;
    int NewRoom[len];
    int newRoomCounter = 0;
    int counter = 1;
    int newIsPresent = isPresent;
    for (int i = 1; i < len; i++)
    {
        if (itemArr[i].totalPrice == toCheck)
        {
            newIsPresent = 1;
            RoomNo[counter] = i;
            counter++;
        }
        else
        {
            NewRoom[newRoomCounter] = i;
            newRoomCounter++;
        }
    }
    if (counter > 1)
    {
        for (int i = 0; i < counter; i++)
        {
            printf("%s ", itemArr[RoomNo[i]].name);
        }
        printf("\n");
    }
    struct Item *newptr = (struct Item *)malloc(newRoomCounter * sizeof(struct Item));
    for (int i = 0; i < newRoomCounter; i++)
    {
        newptr[i] = itemArr[NewRoom[i]];
    }
    Evaculate(newptr, newRoomCounter, newIsPresent);
}

int main()
{
    int total;
    scanf("%d", &total);
    struct Item items[total];
    for (int i = 0; i < total; i++)
    {
        scanf("%s %d %d", items[i].name, &items[i].quantity, &items[i].price);
        TotalPrice(&items[i]);
        // printf("%s %d %d %d\n",items[i].name,items[i].quantity,items[i].price,items[i].totalPrice);
    }
    qsort(items,total,sizeof(struct Item),CompareFunction);
    // for (int i = 0; i < total; i++)
    // {
    //     printf("%s %d %d %d\n",items[i].name,items[i].quantity,items[i].price,items[i].totalPrice);
    // }
    Evaculate(&items, total, 0);
    return 0;
}
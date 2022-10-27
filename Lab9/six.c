#include <stdio.h>

int Reverse(char *ptr){
    char *lastPtr;
    lastPtr = ptr;
    int count = 0;
    while (*lastPtr != '\0')
    {
        count++;
        ++lastPtr;
    }
    lastPtr--;
    while (ptr <= lastPtr)
    {
        while (!(((int)*ptr >= 65 && (int)*ptr <= 90) || ((int)*ptr >= 97 && (int)*ptr <= 122)))
        {
            ++ptr;
        }
        while (!(((int)*lastPtr >= 65 && (int)*lastPtr <= 90) || ((int)*lastPtr >= 97 && (int)*lastPtr <= 122)))
        {
            --lastPtr;
        }
        if (ptr <= lastPtr)
        {
            char temp = *ptr;
            *ptr = *lastPtr;
            *lastPtr = temp;
            ++ptr;
            --lastPtr;
        }
    }
    return count;
}

int main()
{
    char arr[1000];
    scanf("%s", arr);
    int len = Reverse(arr);
    for (int i = 0; i < len; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
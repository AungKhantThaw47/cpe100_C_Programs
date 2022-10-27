#include <stdio.h>

enum MyBool{False,True};
enum MyBool AND(enum MyBool a,enum MyBool b);
enum MyBool OR(enum MyBool a,enum MyBool b);
enum MyBool XOR(enum MyBool a,enum MyBool b);
enum MyBool IF(enum MyBool a,enum MyBool b);
enum MyBool IFANDONLYIF(enum MyBool a,enum MyBool b);
typedef enum MyBool (*FunctionCall) (enum MyBool,enum MyBool);
enum FunctionPointer{AND_P,OR_P,XOR_P,IF_P,IFANDONLYIF_P};
FunctionCall functions[] = {&AND,&OR,&XOR,&IF,&IFANDONLYIF};

void Display();
void DisplayHead(int row[],int rowSize,char textData[5][15]);
void DisplayBody(int row[],int rowSize,char textData[5][15]);

int main(){
    Display();
    return 1;
}

void Display(){
    char HeaderText[5][15] = {"A AND B","A OR  B","A XOR B","IF A THEN B","A IFF B"};
    int row[]={7,7,7,11,7};
    DisplayHead(row,5,HeaderText);
    DisplayBody(row,5,HeaderText);
}

void DisplayHead(int row[],int rowSize,char textData[5][15]){
    printf("+---+---+");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < row[i]; j++)
        {
            printf("-");
        }
        printf("+");
    }
    printf("\n| A | B |");
    for (int i = 0; i < rowSize; i++)
    {
        printf(textData[i]);
        printf("|");
    }
    printf("\n");
    printf("+---+---+");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < row[i]; j++)
        {
            printf("-");
        }
        printf("+");
    }
    printf("\n");
}

void DisplayBody(int row[],int rowSize,char textData[5][15]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("| %d | %d |",i,j);
            for(int k = 0; k < rowSize; k++){
                for (int l = 0; l < row[k]; l++)
                {
                    if (l==((int)(row[k]/2))){
                        printf("%d",functions[k](i,j));
                    }
                    else{
                        printf(" ");
                    }
                    
                }
                printf("|");
            }
            printf("\n");
        }
    }
    printf("+---+---+");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < row[i]; j++)
        {
            printf("-");
        }
        printf("+");
    }
}

enum MyBool AND(enum MyBool a,enum MyBool b){
    return a&&b;
}

enum MyBool OR(enum MyBool a,enum MyBool b){
    return a||b;
}

enum MyBool XOR(enum MyBool a,enum MyBool b){
    if(a==b){
        return False;
    }
    else{
        return True;
    }
}

enum MyBool IF(enum MyBool a,enum MyBool b){
    if((a==True)&&(b==False)){
        return False;
    }
    return True;
}

enum MyBool IFANDONLYIF(enum MyBool a,enum MyBool b){
    if(a==b){
        return True;
    }
    else{
        return False;
    }
}
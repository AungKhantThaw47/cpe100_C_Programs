#include<stdio.h>
#include<math.h>

int main(){
    int lenght;
    scanf("%d",&lenght);
    int score[lenght];
    int Acounter=0;
    int Bcounter=0;
    int Ccounter=0;
    int Dcounter=0;
    int Fcounter=0;
    for (int i = 0; i < lenght && i<100; i++)
    {
        int tempX,tempY,tempZ;
        scanf("%d %d %d",&tempX,&tempY,&tempZ);
        // if (tempX<=-20)
        // {
        //     tempX=0;
        // }
        // if (tempX>=40)
        // {
        //     tempX=0;
        // }

        // if (tempY<=-20)
        // {
        //     tempY=0;
        // }
        // if (tempY>=40)
        // {
        //     tempY=0;
        // }

        // if (tempZ<=-20)
        // {
        //     tempZ=-0;
        // }
        // if (tempZ>=20)
        // {
        //     tempZ=0;
        // }

        score[i] = tempX+tempY+tempZ;
        if(score[i]>=80&&score[i]<=100)
        {
            Acounter++;
        }
        if(score[i]>=70&&score[i]<=100)
        {
            Bcounter++;
        }
        if(score[i]>=60&&score[i]<=100)
        {
            Ccounter++;
        }
        if(score[i]>=50&&score[i]<=100)
        {
            Dcounter++;
        }
        Fcounter++;
    }
    // float Aans = ((float)Acounter/lenght)*100.0;
    // if((Aans-(int)Aans)>0){
    //     printf("%d %.2f\n",Acounter,trunc(Aans*100.0)/100.0);    
    // } else
    // {
    //     printf("%d %.0f\n",Acounter,trunc(Aans*100.0)/100.0);
    // }
    // float Bans = ((float)Bcounter/lenght)*100.0;
    // if((Bans-(int)Bans)>0){
    //     printf("%d %.2f\n",Bcounter,trunc(Bans*100.0)/100.0);    
    // } else
    // {
    //     printf("%d %.0f\n",Bcounter,trunc(Bans*100.0)/100.0);
    // }
    // float Cans = ((float)Ccounter/lenght)*100.0;
    // if((Cans-(int)Cans)>0){
    //     printf("%d %.2f\n",Ccounter,trunc(Cans*100.0)/100.0);    
    // } else
    // {
    //     printf("%d %.0f\n",Ccounter,trunc(Cans*100.0)/100.0);
    // }
    // float Dans = ((float)Dcounter/lenght)*100.0;
    // if((Dans-(int)Dans)>0){
    //     printf("%d %.2f\n",Dcounter,trunc(Dans*100.0)/100.0);    
    // } else
    // {
    //     printf("%d %.0f\n",Dcounter,trunc(Dans*100.0)/100.0);
    // }
    // float Fans = ((float)Fcounter/lenght)*100.0;
    // if((Fans-(int)Fans)>0){
    //     printf("%d %.2f\n",Fcounter,trunc(Fans*100.0)/100.0);    
    // } else
    // {
    //     printf("%d %.0f\n",Fcounter,trunc(Fans*100.0)/100.0);
    // }
    // printf("%d %d",lenght,100);

    float Aans = ((float)Acounter/lenght)*100.0;
    float Bans = ((float)Bcounter/lenght)*100.0;
    float Cans = ((float)Ccounter/lenght)*100.0;
    float Dans = ((float)Dcounter/lenght)*100.0;
    float Fans = ((float)Fcounter/lenght)*100.0;
    printf("%d %.2f\n",Acounter,Aans);
    printf("%d %.2f\n",Bcounter,Bans);
    printf("%d %.2f\n",Ccounter,Cans);
    printf("%d %.2f\n",Dcounter,Dans);
    printf("%d %.2f\n",Fcounter,Fans);

    // printf("%d %.2f\n",Acounter,trunc(Aans*100.0)/100.0);
    // printf("%d %.2f\n",Bcounter,trunc(Bans*100.0)/100.0);
    // printf("%d %.2f\n",Ccounter,trunc(Cans*100.0)/100.0);
    // printf("%d %.2f\n",Dcounter,trunc(Dans*100.0)/100.0);
    // printf("%d %.2f\n",Fcounter,trunc(Fans*100.0)/100.0);
    return 0;
}
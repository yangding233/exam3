#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){ 
    int i = 0;
    int a = 0;
    srand(time(0));
    int rand_i = rand()%100;
    for ( i = 0; i < 5; i++)
    {
        printf("Please input a possible integer\n");
        scanf("%d",&a);
        if(i ==4)
        {
            printf("GAME OVER.You try too many times,The correct number is %d\n",rand_i);
            break;
        }
        else if(a>rand_i)
        {
            printf("too BIG\n");
        }
        else if(a<rand_i)
        {
            printf("too SMALL\n");
        }
        else if(a == rand_i)       
        {
            printf("BINGO\n");
            break;
        }
        
    }
    
    

    system("pause");
    return 0;
}
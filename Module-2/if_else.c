#include<stdio.h>
#include<stdbool.h>
int main(){
    int tk;
    bool haveMoney;

    scanf("%d", &tk);
    if(tk >= 100){
        printf("I'll eat bergar\n");
    }else{
        printf("I won't\n");
    }
    
  
    scanf("%d", &haveMoney);
    if(haveMoney){
        printf("I go to my friend house");
    }else{
        printf("I can't go");
    }
}


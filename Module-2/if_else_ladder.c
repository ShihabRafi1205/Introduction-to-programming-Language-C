#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);

    if(tk>=150){
        printf("Bergar is available\n");
    }else if(tk>=100){
        printf("sandwitch is available\n");
    }else if(tk>=50){
        printf("You can have jhalmuri\n");
    }else{
        printf("Nothing's for you\n");
    }

    return 0;
}
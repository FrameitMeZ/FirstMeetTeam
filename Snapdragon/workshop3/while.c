#include<stdio.h>

int main(){

    int i = 10;
    int count = 0;
    while (1)
    {   
        printf("%d ",i);
        i -= 1;
        if(count == 9){
        break;}
        count += 1;
    }
    

    return 0;
}
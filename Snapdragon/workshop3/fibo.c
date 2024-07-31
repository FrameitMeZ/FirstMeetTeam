#include<stdio.h>

int main(){

    int h = 0;
    int j = 1;
    int r = 0;
    printf("0 1 ");

    for (int i = 0; i < 8; i++)
    {
        r = h + j;
        printf("%d ",r);
        h = j;
        j = r;
        
    }
    


    return 0;
}
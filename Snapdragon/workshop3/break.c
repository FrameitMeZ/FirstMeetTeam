#include<stdio.h>

int main()
{
    int i = 0;
    int j;
    int r;
    int count =1;

    while (1)
    {
        scanf("%d", &j);
        r = i + j;
        i = r ;

        if(count == 10 || j <= 0){
            printf("%d",i);
            break;
        }
        count +=1;
    }
    
     
    return 0;
}
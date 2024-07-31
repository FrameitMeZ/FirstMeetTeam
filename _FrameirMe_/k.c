#include <stdio.h>
int main(){
    int n;
    while(1){
        printf("Enter Number: ");
        scanf("%d",&n);
        if(n >  0){
            continue;
        }
        else{
            break;
        }
    }
}
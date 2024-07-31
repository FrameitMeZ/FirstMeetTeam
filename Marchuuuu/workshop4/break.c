	#include<stdio.h>
int main(){
    int a=0,sum=0;
    for(int i=0;i<10;i++){

        scanf("%d",&a);
        sum+=a;
        if(a<=0){
            break;
        }
    } 
    printf("%d",sum);
}
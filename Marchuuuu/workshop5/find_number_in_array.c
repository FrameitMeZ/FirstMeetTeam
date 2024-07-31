#include<stdio.h>
int main(){
    int arr[10]= {50 ,30, 80, 10, 40, 90, 20, 70, 60, 100};
    int a; int b=999;
    scanf("%d",&a);
    for (int i = 0; i < 10; i++)
    {
        if(a==arr[i]){
            b=i;
        }
    }
    
    if(b != 999){
        printf("Value %d found at index %d",a,b);
    }else if(b=999){
    printf("Value %d not found in the array",a);
    }
    return 0;
}
#include<stdio.h>



int main(){
    int a, arr[10], i;
    
    for (int i = 0; i < 10; i++)
    {
       scanf("%d", &arr[i]);

    }
    for (int i = 0; i < 9; i++)
    {
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}


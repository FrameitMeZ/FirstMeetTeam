#include <stdio.h>
int main(){
    int arr[10],temp = 0;
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++) {     
        for (int j = i+1; j < 10; j++) {     
           if(arr[i] < arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("Array after sorting :\n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",arr[i]);
    }
}
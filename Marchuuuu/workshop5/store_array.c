#include<stdio.h>
int main(){
    int a[5],b[5],c=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        c+=a[i];
    }
    printf("Sum of entered numbers: %d\n",c);
    printf("Numbers in array: ");
    for (int i = 0; i < 5; i++)
    {
        
        printf("%d ",b[i]);
    }
    
}
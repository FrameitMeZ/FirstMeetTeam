#include<stdio.h>
#include<math.h>
int main(){
    int a[10];
    int min=2000001;
    int max=-2000001;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    
        if(a[i]<min){
            min=a[i];
        }
    
    
    }
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d",min);



    
}
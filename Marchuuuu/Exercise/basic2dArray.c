#include<stdio.h>
int main(){
    int arr[3][3];
    int temp=-2000001;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);

        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]>temp){
                temp=arr[i][j];
            }

        }
        
    }
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);

        }
        
    }*/
    printf("The maximum value in the matrix is: %d",temp);


}
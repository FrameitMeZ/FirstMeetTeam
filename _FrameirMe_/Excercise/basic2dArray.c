#include <stdio.h>
int main(){
    int x[3][3],max = -1000000;
    for(int i = 0 ; i < 3 ;i++){
        for(int j = 0 ; j < 3;j++){
            scanf("%d",&x[i][j]);
            if(max < x[i][j]){
                max = x[i][j];
            }
        }
    }
    printf("The maximum value in the matrix is: %d",max);
}
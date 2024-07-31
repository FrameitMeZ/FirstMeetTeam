#include <stdio.h>
int main()
{
    int arr[10] = {50, 30, 80, 10, 40, 90, 20, 70, 60, 100};
    int x,y = 0,z;
    scanf("%d", &x);
    for (int i = 0; i < 10; i++){
        if (x == arr[i]){
            y = 1;
            z = i;
        }
    }
    if (y == 0){
            printf("Value %d not found in the array",x);
    }
    if(y == 1 ){
            printf("Value %d found at index %d",x,z);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int Y_num;

    
    scanf("%d", &Y_num);
    
    if(Y_num%4 == 0){
        if(Y_num%100 == 0 && Y_num%400 != 0){
                printf("%d is not a leap year. February has 28 days." , Y_num);
        }
        else{
            printf("%d is a leap year. February has 29 days.", Y_num);
        }
    }
    else if(Y_num%4 != 0){
        printf("%d is not a leap year. February has 28 days.", Y_num);
    }
    
    return 0;

}
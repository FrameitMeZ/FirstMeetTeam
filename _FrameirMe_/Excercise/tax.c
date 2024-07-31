#include <stdio.h>
int main(){
    float x,y;
    printf("Enter income: ");
    scanf("%f",&x);
    y = 0;
     if (x <= 30000) {
        y = x * 0.05;
    } else if (x <= 100000) {
        y = (30000 * 0.05) + ((x - 30000) * 0.1);
    } else {
        y = (30000 * 0.05) + (70000 * 0.1) + ((x - 100000) * 0.2);
    }
    printf("Tax owed is: %.2f",y);
}
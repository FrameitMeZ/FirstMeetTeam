#include <stdio.h>
int main(){
    int x;
    float y,z,re;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&x);
    if(x == 1){
        printf("Enter the width: ");
        scanf("%f",&y);
        printf("Enter the height: ");
        scanf("%f",&z);
        re = y * z;
        if(y < 0 || z < 0){
           printf("The area of the rectangle is: Error");
        }
        else{
            printf("The area of the rectangle is: %.2f",re);
        }
    }
    else if(x == 2){
        printf("Enter the base: ");
        scanf("%f",&y);
        printf("Enter the height: ");
        scanf("%f",&z);
        re = 0.5 *y * z;
        if(y < 0 || z < 0){
            printf("The area of the triangle is: Error");
        }
        else{
            printf("The area of the triangle is: %.2f",re);
        }
    }
    else if(x == 3){
        printf("Enter the radius: ");
        scanf("%f",&y);
        re = 3.14 * y * y;
        if(y < 0){
            printf("The area of the circle is: Error");
        }
        else{
            printf("The area of the circle is: %.2f",re);
        }
    }
    else{
        printf("Invalid choice");
    }
}
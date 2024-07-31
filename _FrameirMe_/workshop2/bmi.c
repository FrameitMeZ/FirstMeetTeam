#include <stdio.h>
int main(){
    float x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    z = x/(y*y);
    printf("Your BMI is %.2f\n",z);
    if(z < 18.5){
                printf("You are underweight.\n");
        }else if(z <= 24.9){
                printf("You are normal weight.\n");
        }else if(z <= 29.9){
                printf("You are overweight.\n");
        }else{
                printf("You are obese.\n");
        }
}
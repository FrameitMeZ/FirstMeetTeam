#include<stdio.h>
int main(){
    float w;
    float h;
    scanf("%f",&w);
    scanf("%f",&h);
    float bmi=w/(h*h);
    printf("Your BMI is %.2f\n",bmi);
    if(bmi <18.5){
        printf("You are underweight.");
    }else if(bmi <=24.9){
        printf("You are normal weight.");
    }else if(bmi <=29.9){
        printf("You are overweight.");
    }else{
        printf("You are obese.");
    }
}
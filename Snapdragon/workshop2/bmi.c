#include <stdio.h>
int main() {
    float W_num;
    float H_num;
    
    scanf("%f",&W_num);
    scanf("%f",&H_num);
    float bmi_num = (W_num/(H_num*H_num));

    if(bmi_num < 18.5){
        printf("Your BMI is %.2f\nYou are underweight.",bmi_num);
    }
    else if (bmi_num <25 && bmi_num > 18.4)
    {
        printf("Your BMI is %.2f\nYou are normal weight.",bmi_num);
    }
    else if (bmi_num <30 && bmi_num > 24.9)
    {
        printf("Your BMI is %.2f\nYou are overweight.",bmi_num);
    }
    else if (bmi_num >= 30)
    {
        printf("Your BMI is %.2f\nYou are obese.",bmi_num);
    }
    
    return 0;
}
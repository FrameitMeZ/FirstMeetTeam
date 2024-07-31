#include <stdio.h>
int main() {
    float fir_num;
    float Sec_num;
    float thir_num;
    
    scanf("%f %f %f", &fir_num , &Sec_num , &thir_num);
    printf("%.2f", (fir_num + Sec_num +thir_num)/3);

    return 0;

}
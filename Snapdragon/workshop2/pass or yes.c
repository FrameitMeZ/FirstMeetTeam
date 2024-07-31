#include <stdio.h>
int main() {
    int Sim_num;
    
    scanf("%d", &Sim_num);
    
    if(Sim_num >= 50)
    {
        printf("Passed");
    }
    else if(Sim_num < 50)
    {
        printf("Failed");
    }
    
    return 0;

}
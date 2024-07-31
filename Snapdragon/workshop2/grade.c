#include <stdio.h>
int main() {
    int Sim_num;
    
    scanf("%d", &Sim_num);
    

    if(Sim_num >= 80)
    {
        printf("Grade :A");
    }
    else if(Sim_num >=75)
    {
        printf("Grade :B+");
    }
    else if(Sim_num >= 70)
    {
        printf("Grade :B");
    }
    else if(Sim_num >= 65)
    {
        printf("Grade :C+");
    }
    else if(Sim_num >= 60)
    {
        printf("Grade :C");
    }
    else if(Sim_num >=55)
    {
        printf("Grade :D+");
    }
    else if(Sim_num >= 50)
    {
        printf("Grade :D");
    }
    else
    {
        printf("Grade :F");
    }

    return 0;

}
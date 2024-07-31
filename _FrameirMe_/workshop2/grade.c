#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x >= 80){
        printf("Grade :A");
    }
    else if(x >= 75){
        printf("Grade :B+");
    }
    else if(x >= 70){
        printf("Grade :B");
    }
    else if(x >= 65){
        printf("Grade :C+");
    }
    else if(x >=60){
        printf("Grade :C");
    }
    else if(x >=55){
        printf("Grade :D+");
    }
    else if(x >=50){
        printf("Grade :D");
    }
    else {
        printf("Grade :F");
    }
}
#include<stdio.h>
int main(){

    int n;
    float a,b,r;
    
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&n);

    if (n==1)//retaggle
    {
       printf("Enter the width: ");
       scanf("%f",&a);
       printf("Enter the height: ");
       scanf("%f",&b);
       if(a<0 || b<0)
       {
        printf("The area of the rectangle is: Error");
       }
       else
       {
        r = a * b;
        printf("The area of the rectangle is: %.2f",r);
       }
       
    }
    else if (n==2)//trianggle
    {
        printf("Enter the base: ");
        scanf("%f",&a);
        printf("Enter the height: ");
        scanf("%f",&b);
        if (a<0 || b<0)
        {
        printf("The area of the triangle is: Error");
        }
        else
        {
        r = 0.5*a*b;
        printf("The area of the triangle is: %.2f",r);
        }
    }
    else if (n==3)//circle
    {
        printf("Enter the radius: ");
        scanf("%f",&a);
        r = 3.14*(a*a);
        if(a<0)
        {
        printf("The area of the circle is: Error");
        }
        else
        {
        printf("The area of the circle is: %.2f",r);  
        }
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
#include<stdio.h>
int main() 
{
    int l,b,perimeter,area;
    printf("Enter length:\n");
    scanf("%d",&l);
    printf("Enter breadth\n");
    scanf("%d",&b);
    perimeter=2*(l+b);
    printf("Perimeter: %d \n",perimeter);
    area= l*b;
    printf("Area: %d",area);
    return 0;
    
    
}

#include<stdio.h>



float area(int r) {
    return 3.142f*r*r;
}

void area1(){
    float radius;
    printf("Enter the value of radius(this is no return and no para.) :");
    scanf("%f", radius);
    printf("Area is: ", 3.142f*radius*radius);
} 

float area2() {
    float radius;
    printf("Enter the value of radius(this is return and no para.) :");
    scanf("%f", radius);
    /*printf();*/
}

int main() {
    int r;
    printf("Enter the value of the radius \n");
    scanf("%d", &r);
    printf("Area of the circle: %f", area(r));
    area1();
}





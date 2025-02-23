#include <stdio.h>

int main(){

    double width, height, perimeter, area;
    printf("Enter width and height: ");

    scanf("%lf%lf", &width, &height);

    perimeter = 2*(width + height);
    area = width*height;

    printf("Width -> %.2lf    Height -> %.2lf\nPerimeter -> %.2lf\nArea -> %.2lf", width, height, perimeter, area);

    return 0;
}
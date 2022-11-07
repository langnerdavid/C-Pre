#include <stdio.h>
int main()
{
    //initialize var and const
    double radius, height, volume, area;
    const double PI = 3.1415;
    
    //get Radius from user
    printf("Radius: ");
    scanf("%lf", &radius);
    
    //get Height from user
    printf("Height: ");
    scanf("%lf", &height);
    
    
//calculate area and volume    
area = PI * radius * radius;
volume = area * height / 3.0;

    
//print out result
printf("Volumen = %lf\n", volume);

return 0;
}
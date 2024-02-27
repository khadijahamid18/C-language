#include<stdio.h>
float fallingDistance(float time)
{
    float distance;
    float g = 9.8;

    distance = 0.5 * g * (time * time);
    return distance;
}
int main()
{
    float time, distance;
    for (time = 1; time <= 10; time++)
    {
        distance = fallingDistance(time);

        printf("The distance of falling object in %.2f seconds is %.2f\n", time, distance);
    }
    return 0;
    
}
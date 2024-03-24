#include<stdio.h>
#include<math.h>
int main(){

    int s, t;
    double w;

    printf("Ведіть значення s = ");
    scanf("%d", &s);

    printf("Ведіть значення t = ");
    scanf("%d", &t);

    if (s < 7)
    {
      w = 2 * s * pow(t, 2) + pow(s, 2) * t + 1;
    }

    else if (s == 7)
    {
       w = sqrt((10 * s) / t);
    }
    
    else if (s > 7)
    {
      w = pow(s, 2) + 2 * t;
    }
    else {
        printf("Це не можливо!");
    }
    printf("w=%.2f", w);

    return 0;
}
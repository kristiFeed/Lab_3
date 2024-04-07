#include<stdio.h>
#include<math.h>

int main(){

    float diagonal1, diagonal2, diagonal3, diagonal4;
    float square1, square2;

    printf("Ведіть diagonal1= ");
    scanf("%f", &diagonal1);
    printf("Ведіть diagonal2= ");
    scanf("%f", &diagonal2);
    printf("Ведіть diagona3= ");
    scanf("%f", &diagonal3);
    printf("Ведіть diagonal4= ");
    scanf("%f", &diagonal4);

    square1 =  diagonal1 * diagonal2 / 2;
    square2 =  diagonal3 * diagonal4 / 2;

    if (square1 > square2){
        printf("Площа 1 ромба більша \nS = %.2f", square1);
    }
    else if(square1 < square2){
        printf("Площа 2 ромба більша \nS = %.2f", square2);
    }
    else if (square1 == square2){
        printf("Площа двух ромбів одинакова %.2f=%.2f", square1, square2);
    }
    return 0;
}

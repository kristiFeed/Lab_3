#include<stdio.h>
int main(void){

    int a;
    printf("Ведіть серію ");
    scanf("%d", &a);
    switch (a)
    {
        case 1:
            printf("Назва серії «The Boy on the Bridge»\nДата прем’єрного показу 2 квітня");
        break;

        case 2:
            printf("Назва серії «A Fruitful Partnership»\nДата прем’єрного показу 5 квітня");
        break;
    
        case 3:
            printf("Назва серії «Silver Smile»\nДата прем’єрного показу 7 квітня");
        break;

        case 4:
            printf("Назва серії «These Bloody Thoughts»\nДата прем’єрного показу 9 квітня");
        break;

        case 5:
            printf("Назва серії «Hildebrandt's Starling»\nДата прем’єрного показу 11 квітня");
         break;

        case 6:
            printf("Назва серії «Ascension»\nДата прем’єрного показу 13 квітня");
        break;

        case 7:
            printf("Назва серії «Many Sainted Men»\nДата прем’єрного показу 15 квітня");
        break;

        case 8:
            printf("Назва серії «Psychopathia Sexualis»\nДата прем’єрного показу 17 квітня");
        break;

        case 9:
            printf("«Requiem»\nДата прем’єрного показу 19 квітня");
        break;

        case 10:
            printf("«Castle in the Sky»\nДата прем’єрного показу 23 квітня");
        break;

    default:
        printf("Серія не вийшла\n");
    }
    return 0;
}
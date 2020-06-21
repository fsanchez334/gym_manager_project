#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct ID{
    char *name;
    char *age;

};

int main(){
    printf("%s\n", "Hello, welcome to the gym! For now there are only treadmills available");
    printf("%s", "How many people are going to use the gym?");

    int amount_people;
    scanf("%d", &amount_of_people);

    printf("%d\n", amount_of_people);
}


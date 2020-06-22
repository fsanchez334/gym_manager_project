#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct ID{
    char *name;
    char *class
};

struct Person{
    struct ID *personal;
};

struct Treadmill{
    char *status;
    struct ID *holder;
};

int main(){

    printf("%s\n", "Hello, welcome to the gym! For now there are only treadmills available");
    printf("%s\n", "How many people are going to use the gym?");

    int amount_people;
    scanf("%d", &amount_people);

    printf("%d\n", amount_people);

    struct Person container[amount_people];
    struct ID box[amount_people];

    int racker = 0;
    

    for(int i = 0; i < amount_people; i++){
         char f_name[50];
	 char l_name[50];
	 char sum[100];
	 char class_00[40];

	 printf("%d%s\n", tracker, "What is your first name?");
	 scanf("%s", f_name);

	 printf("%s\n", "What is your last name?");
	 scanf("%s", l_name);

	 printf("%s\n", "What is your class year? Freshman, Sophomore, Junior, Senior");
	 scanf("%s", class_00);

	 strcpy(sum, f_name);
	 strcat(sum, " ");
	 strcat(sum, l_name);

	 box[i].name = sum;
	 box[i].class = class_00;

	 container[i].personal = box[i];

	 ++tracker;

    }

    printf("%s\n", "Success");

    
}


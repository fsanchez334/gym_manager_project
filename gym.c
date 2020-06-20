#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "gymfunc.h"
   

int main(){
    printf("%s\n", "We are going to simulate a gym");
    int tread_num = 0;

    struct Treadmill tester[3];
    for(int i = 0; i < 4; i++){
	++tread_num;
        tester[i].status = "Unoccupied";
	tester[i].mode = "NULL";
    }

    char user_first_name[51];
    char user_second_name[51];
    char ID_given[21];

    printf("%s\n", "Please enter your first name");
    scanf("%s", user_first_name);

    printf("%s\n", "Please enter your first name");
    scanf("%s", user_second_name);

    printf("%s\n", "Please enter your ID number");
    scanf("%s", ID_given);

    struct Person *example = (struct Person *) malloc(sizeof(struct Person));
    if(example == NULL){
        perror("Could not make space for Person object");
	exit(1);
    }
    strcpy(example -> first_name, user_first_name);
    strcpy(example -> last_name, user_second_name);
    strcpy(example -> given_id, ID_given);
    
    printf("%s%d\n", "Number of currently available treadmills: ", tread_num);

    char response[5];
    printf("%s\n", "Would you like to use a treadmill? Yes/No");
    scanf("%s", response);
    
    int user_give = determiner(response);
    if(user_give != 0){
        printf("%s\n", "Thank you for using our program - have a good day!");
	return 0;
    }
    
    tester[0].status = "Occupied";
    tester[0].holder = example;

    printf("%s\n", (tester[0].holder) -> first_name);
    printf("%s\n", (tester[0].holder) -> last_name);
    printf("%s\n", (tester[0].holder) -> given_id);

    





    return 0;

}

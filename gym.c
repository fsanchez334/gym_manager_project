#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "gymfunc.h"


int main(){
    printf("%s\n", "We are going to simulate a gym");
    int tread_num = 0;
    int number_of_mill = 0;

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

    printf("%s\n", "Please enter your last name");
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
    int time_spent = 0;
    printf("%s\n", "Would you like to use a treadmill? Yes/No");
    scanf("%s", response);

    printf("%s\n", "For how many minutes would you like to use the treadmill - MAX: 30 minutes");
    scanf("%d", &time_spent);

    int user_give = determiner(response);
    if(user_give != 0){
        printf("%s\n", "Thank you for using our program - have a good day!");
	free(example);
	return 0;
    }

    tester[0].status = "Occupied";
    tester[0].holder = example;
    ++number_of_mill;
    --tread_num;

    printf("%s%d%s\n", "Treadmill # ", number_of_mill, " is taken by the following individual :");
    printf("%s%s%s%s\n", "Name: ", (tester[0].holder) -> first_name, " " ,  (tester[0].holder) -> last_name);
    printf("%s%s\n", "ID #: ", (tester[0].holder) -> given_id);
    printf("%s%d%s\n", "Time Alloted: ", time_spent, " minutes");

    calculateElapsedTime(time_spent);



    printf("%s\n", "Would you like to continue using the treadmill? Yes/No  (Fees will be inccurred for each minute)");
    char fee_response[5];
    scanf("%s", fee_response);
    int free_result = determiner(fee_response);
    if(free_result != 0){
        printf("%s\n", "Thank you for using our program - have a good day");
	free(example);
	return 0;
    }
    int extra = 0;
    printf("%s\n", "For how many extra minutes would you like to keep using the treadmill?");
    scanf("%d", &extra);

    int min_continue = calculateOverpay(extra);
    return 0; 








    return 0;

}

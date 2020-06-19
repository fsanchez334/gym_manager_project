#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct Timer{
    int hours;
    int minute;
    int second;
};
struct Treadmill{
    char *status;
    int time;
    struct Person *holder;
    char *mode;
};

struct Person{
    char first_name[51];
    char last_name[51];
    char given_id[21];
};
int main(){
    printf("%s\n", "We are going to simulate a gym");


    struct Treadmill tester[3];
    for(int i = 0; i < 4; i++){
        tester[i].status = "Unoccupied";
	tester[i].mode = "NULL";
	tester[i].user_id = "Empty";
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
    strcpy(example -> second_name, user_second_name);
    strcpy(example -> given_id, ID_given);
    
    





    return 0;

}

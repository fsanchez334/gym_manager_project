#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct Timer{
    int hours = 0;
    int minute = 0;
    int second = 0;
};
struct Treadmill{
    char status[21];
    int time;
    char user_id[41];
    char mode;
};

struct Person{
    char first_name[51];
    char last_name[51];
};
int main(){
    printf("%s\n", "We are going to simulate a gym");
    
    
    struct Treadmill tester[3];
    for(int i = 0; i < 4; i++){
        tester[i].status = "Unoccupied";
	tester[i].mode = "NULL";
	tester[i].user_id = "Empty";
    }

    printf("%s\n", tester[1].status);



    return 0;

}


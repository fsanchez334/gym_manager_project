#ifndef _GYMFUNC_H_                                                                                                                                                                                      
#define _GYMFUNC_H_

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

int determiner(char *passer){
    int result = strcmp("Yes", passer);
        if (result == 0){
           return 0;
    }
	return 1;
}

int calculateElapsedTime(int time){
    int seconds = 0, minutes = 0;
        while(minutes < time){
            ++seconds;
            sleep(1);
        if(seconds % 60 == 0){
            ++minutes;
            printf("%d\n", minutes);
        }
    }
    return minutes;
}

void calculateOverpay(int minutes){
     double due = 1.25 * minutes;
     printf("%s%f\n", "Due to extra incurred fees, you owe the following: $", due);
}




#endif /* #ifndef _GYMFUNC_H_ */

#include "average.h"

double average (int numbers[], int idx){
    int i;
    int number = 0;
    double answer;

       for (i = 0; i < idx ; i++){
            number += numbers[i];
        }
        answer = (double) number/idx;

        return answer;
}

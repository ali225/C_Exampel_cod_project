#include <stdio.h>
#include <stdlib.h>

#define MAX  100

double powr(double, double);
double add(double, double);
double mult(double, double);


struct command{
       char * name;
       double (*pf) (double, double);
};

struct command commands [] = {{"powr", powr}, {"add", add}, {"mult", mult}};



#define SIZE (sizeof(commands)/sizeof(commands[0]))
// End of your code
int main (void){
    char line[MAX];
    double in1, in2, answer;
    int i;

    while (1){
        printf("Enter on of the following commands : \n");
        printf("1. add\n2. mult\n3. powr\n4. quit\n");
        printf(">> ");
        gets(line);

        if(strcmp(line, "quit") == 0){
            return 0;
        }


        for (i = 0; i < SIZE; i++){
            if (strcmp(line, commands[i].name) == 0){
                printf("ENTER the first argument :");
                in1 = atof(gets(line));
                printf("ENTER the second argument :");
                in2 = atof(gets(line));

                answer = commands[i].pf(in1 , in2);
                printf("Answer is %f .\n", answer);
                break;
            }
        }

        if (i == SIZE){
            printf(" Command not found .\n");
        }
        /*clear the screen  */
        printf("press Enter to continue .\n");
        gets(line);
        system("clear");
        system("cls");
    }
   return 0;
}

double add (double in1 , double in2){
    /// Add your code here

    return (in1 + in2);
    // End of your code
}


double mult (double in1 , double in2){
    /// Add your code here

        return (in1 * in2);

    // End of your code
}


double powr (double in1 , double in2){
    /// Add your code here
    int i ;
    double temp = in1;
    in2--;

    for (i = 0; i < in2; i++){
        temp = temp * in1;
    }
    return temp;
    // End of your code
}

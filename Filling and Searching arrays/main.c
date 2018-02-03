#include <stdio.h>
#include <stdlib.h>

#define Rows   13
#define COLS   33

void fill(int arr[],int Cols);
int largest(int arr[][COLS], int rows);
int smallest(int arr[][COLS], int rows);
int numbers [Rows][COLS];



int main(){
     int i;
     int max = 0;
     int min = 0;
     /* Fill numbers then get the Largest and smallest numbers */
     // add your code here ::
     for (i = 0 ; i < Rows; i++){
        fill(numbers[i], COLS);
     }
     max = largest(numbers, Rows);
     min = smallest(numbers, Rows);
     // end of Your code !!
     printf("Max: %d\n", max);
     printf("Min: %d\n", min);

     return 0;
}
/*Fill a row in a 2d array with random numbers  */
void fill(int arr[], int cols){
    // Add your code here ::
    int i;
    for (i = 0; i < COLS; i++){
        arr[i] = (int) rand();
    }
    // End of your code !!
}
/* Gets the largest number in a 2D array*/
int largest(int arr[][COLS], int rows){
    // Add your code hers !!
    int i , j ;
    int ret = arr [0] [0] ;
    for (i = 0 ; i < rows; i++){
        for (j = 0 ; j < COLS; j++){
            if (arr[i][j] > ret){
                ret = arr[i][j];
            }
        }
    }
    return ret;
    // End of your code
}
int smallest(int arr[][COLS], int rows){
    // Add your code hers !!
    int i , j ;
    int ret = arr [0] [0] ;
    for (i = 0 ; i < rows; i++){
        for (j = 0 ; j < COLS; j++){
            if (arr[i][j] < ret){
                ret = arr[i][j];
            }
        }
    }
    return ret;
    // End of your code
}

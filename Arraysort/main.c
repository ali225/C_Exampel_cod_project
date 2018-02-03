#include <stdio.h>
#include <stdlib.h>

#define SIZE   100

void asort (int * arr, int size);
void dsort (int * arr, int size);
void print (int * arr, int size);

int arr[SIZE];

int main()
{
    int i;
    /*Fill array randomly and print the array */
    // Add your code here !!
    for (i = 0; i < SIZE; i++){
         arr[i] = (int) rand();
    }
    print (arr, SIZE);
     // End of your code !!

     /* sort of array ascendingly and print it */
     // Add your code here !!
     asort(arr, SIZE);
     print(arr, SIZE);

     // End of your code here !!
     /* sort array descendingly and print it  */
     // Add your code here !!
     dsort(arr, SIZE);
     print(arr, SIZE);

     // End of your code !!
     return 0;
   }
   /*sorts array ascendingly in place */
   void asort(int * arr, int size){
        // Add your code here !!
        int i;
        int temp;

        for(i = 1; i < SIZE; i++ ){
            if (arr[i] < arr [i-1]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                asort(arr, i);
            }
        }

   }

   void dsort(int * arr, int size){
        // Add your code here !!
        int i;
        int temp;

        for(i = 1; i < size; i++ ){
            if (arr[i] > arr [i-1]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                dsort(arr, i);
            }
        }

        // End of your code

   }
  void print(int * arr, int size){
       // Add your code here !!
       int i;

       printf("New array : \n");

       for (i = 0; i < size; i ++){
           printf("%d  " , arr[i]);
       }
       printf("\n");

       // End of your code !!

       }

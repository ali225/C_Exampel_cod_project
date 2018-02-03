#include <stdio.h>


unsigned char is_right(unsigned char a , unsigned char b, unsigned char c);
int main ()
{
  if (is_right(3,4,5)== 1 )
    {
        printf("3,4 and 5 can form a right angle triangle.\n");
    }
    if (is_right(5,4,3)== 1 )
    {
        printf("5,4 and 4 can form a right angle triangle.\n ");
    }
      if (is_right(12,13,4)== 1 )
    {
        printf("12,13 and 4 can form a right angle triangle.\n ");
    }
  return 0 ;
}
unsigned char is_right(unsigned char a , unsigned char b, unsigned char c){
    /*Fill this function */
    unsigned char ret = 0 ;
    /*Get Squares of 3 sides  */
    unsigned int a_square = (unsigned int) a*a ;
    unsigned int b_square = (unsigned int) b*b ;
    unsigned int c_square = (unsigned int) c*c ;

    /*Test right Angle test */
    if ((a_square !=0) && (b_square != 0) && (c_square != 0))
    {
        if ((a_square + b_square == c_square) ||
            (a_square + c_square == b_square) ||
            (c_square + b_square == a_square))
            {
                ret = 1 ;
            }
            }
    return ret;
}


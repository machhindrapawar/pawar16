




     /*  Assignment -> 16 => multi dimensional  array

      1. Write a program  in c  to print lower triangular matrix.
      Ex:
        1 2 3      print => 5,9, 8
        5 6 7
        9 8 7

       */

      #include<stdio.h>
      int main()
      {
          int i,j,sumcolumn=0,sumrow=0;
          int A[3][3]={{1, 2, 3},{5, 6, 7},{9, 8, 7}};

          for(i=0; i<=2 ; i++){
              for(j=0 ; j<=2 ; j++)
              {
                if(j>i)
                    A[i][j]=0;
              }
       }
       printf("lower triangular matrixe is: \n");
       for(i=0; i<=2 ; i++){
              for(j=0 ; j<=2 ; j++)
              {
                printf("%d ",A[i][j]);
              }
              printf("\n");
       }
      }

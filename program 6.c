


     /*  Assignment -> 16 => multi dimensional  array

      1. Write a program  in c to find the sum of rows and columns  a matrix.
      Ex:
        1 2 3 4
        5 6 7 8
        9 8 7 6
        5 4 3 2
       */

      #include<stdio.h>
      int main()
      {
          int i,j,sumcolumn=0,sumrow=0;
          int A[4][4]={{1, 2, 3, 4},{5, 6, 7, 8},{9, 8, 7, 6},{5, 4, 3, 2}};

          for(i=0; i<=3 ; i++){
              for(j=0 ; j<=3 ; j++)
              {
                 sumcolumn = sumcolumn + A[i][j];
                 sumrow = sumrow + A[j][i];
              }
          }
         printf("sum of column is %d \n",sumcolumn);
         printf("sum of rows is %d",sumrow);

         getch();
       }

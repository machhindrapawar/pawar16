





     /*  Assignment -> 15 => multi dimensional  array

      1. Write a program to find the sum of right diagonal of a matrix.
      Ex:
        1 2 3 4
        5 6 7 8
        9 8 7 6
        5 4 3 2
        sum = 1+6+7+2;  16 sum of right diagonal
       */

      #include<stdio.h>
      int main()
      {
          int i,j,sum=0,m;
          int A[4][4];
          printf("Enter a matrices 16 of first element");
          for(i=0 ; i<=3 ; i++)
          {
              for(j=0 ; j<=3 ; j++)
                scanf("%d",&A[i][j]);
         }
          for(i=0; i<=3 ; i++)
              for(j=i ; j<=i ; j++)
              {
                 sum = sum+A[i][j];
              }
              printf("%d",sum);

      }

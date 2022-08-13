

     /*  Assignment -> 16 => multi dimensional  array

      1. Write a program to find the sum of left  diagonal of a matrix.
      Ex:
        1 2 3 4
        5 6 7 8
        9 8 7 6
        5 4 3 2
        sum = 4+7+8+5; 24 sum of left diagonal
       */

      #include<stdio.h>
      int main()
      {
          int i,j,sum=0,m;
          int A[4][4]={{1, 2, 3, 4},{5, 6, 7, 8},{9, 8, 7, 6},{5, 4, 3, 2}};
          printf("Enter a matrices 16 of first element");
          for(i=0 ; i<=3 ; i++)
          {
                for(j=0 ; j<=3 ; j++)
                scanf("%d",&A[i][j]);
         }
          for(i=0; i<=3 ; i++){
              for(j=0 ; j<=3 ; j++)
              {
                  if(i==j)
                 sum = sum + A[j][i];
              }
          }
           printf("sum of left diagonal of matrices %d",sum);
          return 0;

       }

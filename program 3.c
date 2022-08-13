






     /*  Assignment -> 15 => multi dimensional  array

      1. Write a program to find the  transpose of given matrices .

      10 20      transpose  => 10 30 40
      30 50                    20 50 60
      40 60
      */
      #include<stdio.h>
      int main()
      {
          int i,j,n,n1;
          printf("Enter a number of rows and columes ");
          scanf("%d%d",&n,&n1);
          int A[n][n1],C[n1][n];
          printf("Enter a matrices of  element");
          for(i=0 ; i<=n ; i++)
          {
              for(j=0 ; j<=n1 ; j++)
                scanf("%d",&A[i][j]);
          }
          for(i=0; i<=n1 ; i++)
              for(j=0 ; j<=n ; j++)
               {
                   C[i][j] = A[j][i];
               }

          for(i=0 ; i<=n ; i++)
          {
             for(j=0 ; j<=n1 ; j++)
             printf("%d\t",C[i][j]);
             printf("\n");
          }

      }

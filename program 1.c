

    /*  Assignment -> 16 => multi dimensional  array

      1. Write a program to calculate the sum of two matrices each of order  3*3. */
      #include<stdio.h>
      int main()
      {
          int i,j;
          int A[3][3],B[3][3],C[3][3];
          printf("Enter a matrices 9 of first element");
          for(i=0 ; i<=2 ; i++)
          {
              for(j=0 ; j<=2 ; j++)
                scanf("%d",&A[i][j]);
         }
           printf("Enter a matrices 9 of first element");
          for(i=0 ; i<=2 ; i++)
          {
              for(j=0 ; j<=2 ; j++)
                scanf("%d",&B[i][j]);
          }
          for(i=0 ; i<=2 ; i++)
          {
              for(j=0 ; j<=2 ; j++)
              C[i][j]=A[i][j]+B[i][j];
          }
          for(i=0 ; i<=2 ; i++)
          {
            for(j=0 ; j<=2 ; j++)
           printf("%d\t",C[i][j]);
           printf("\n");
          }

      }

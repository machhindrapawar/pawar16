




    /*  Assignment -> 15 => multi dimensional  array

      1. Write a program to calculate the  product of two matrices each of order  3*3.

    0  1 2 3     0  1 2 3
    1  1 2 3     1  1 2 3
    2  1 2 3     2  1 2 3

      c[0][0]= A[0][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]
      c[0][1]= A[0][0]*B[0][1] + A[0][1]*B[1][1] + A[0][2]*B[2][2]
      c[0][2]= A[0][0]*B[0][2] + A[0][1]*B[1][2] + A[0][2]*B[2][2]

      c[1][0]= A[1][0]*B[0][0] + A[1][1]*B[1][0] + A[1][2]*B[2][0]
      c[1][1]= A[1][0]*B[0][1] + A[1][1]*B[1][0] + A[0][2]*B[2][0]
      c[1][2]= A[1][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]

      c[2][0]= A[2][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]
      c[2][1]= A[2][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]
      c[2][2]= A[2][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]

      */
      #include<stdio.h>
      int main()
      {
          int i,j,sum=0,m;
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
          for(i=0; i<=2 ; i++)
              for(j=0 ; j<=2 ; j++)

                 {
                     sum=0;
                     for(m=0 ; m<=2 ; m++)
                     sum = sum+A[i][m]*B[m][j];
                C[i][j] = sum;
                 }
          for(i=0 ; i<=2 ; i++)
          {
            for(j=0 ; j<=2 ; j++)
            printf("%d\t",C[i][j]);
             printf("\n");
          }

      }

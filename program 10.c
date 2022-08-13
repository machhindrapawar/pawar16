







     /*  Assignment -> 16 => multi dimensional  array

      1. Write a program  in c to find row with maximum number of 1s .
      Ex:
        1 2 3
        5 6 7
        9 8 7

       */

      #include<stdio.h>
      int main()
      {
          int i,j,m=3,n=3,count=0;
          int  m1[m][n];
           printf("Enter a 9 element ");


          for(i=0; i<=2 ; i++){
              for(j=0 ; j<=2 ; j++)
              {
                  scanf("%d",&m1[i][j]);
              }
            }
          for(i=0; i<=2 ; i++){
              for(j=0 ; j<=2 ; j++)
              {
                if(m1[i][j]==0)
                    count++;
              }

           }
           if(count>(m*n)/2)
            printf("given matrix is sparse matrix ");
           else
            printf("given matrix is not sparse matrix");
           return 0;
      }

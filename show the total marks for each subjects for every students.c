# include <stdio.h>
# include <conio.h>

int main()
{
  /*Array Declaration*/
   int s[3][4][3],t[3][4],tmp;
   int i,j,k;
/*Marks Entry*/

for (i=1;i<=3;i++)
   {
      for (j=1;j<=4;j++)
      {
        printf("Enter Part1, Part2 & Tutorial marks for student no. %d & subject no. %d\n",i,j);

         for (k=1;k<=3;k++)
         {
   	   scanf("%d",&s[i][j][k]);
         }
      }
   }
/*Total Marks Calculation*/

for (i=1;i<=3;i++)
   {
      for (j=1;j<=4;j++)
      {
         tmp=0;
         for (k=1;k<=3;k++)
         {
   	   tmp=tmp+s[i][j][k];
         }
         t[i][j]=tmp;
      }
   }
 /*Total Marks Display*/

    printf("\n\nTotal marks\n\n");
   for (i=1;i<=3;i++)
   {
      printf("%d\t",i);
   	for (j=1;j<=4;j++)
      {
   	   printf("%d\t",t[i][j]);
      }
      printf("\n");
   }

   getch();
   return 0;
}

# include <stdio.h>
int main()
{
   int s[4][3],t[4],tmp=0;
   int i,j;

   for (i=0;i<4;i++){
      printf("Enter three marks for student no. %d \n",i);
      for (j=0;j<3;j++){
   	   scanf("%d",&s[i][j]);
      }

   }for (i=0;i<4;i++){
   	printf("\n");
      for (j=0;j<3;j++){
   	   printf("%d\t",s[i][j]);
         tmp=tmp+s[i][j];
      }
      t[i]=tmp;
   }
   
   printf("\n\nTotal marks\n\n");
   for (i=0;i<3;i++){
   	   printf("%d\t%d\n",i,t[i]);
      }

   return 0;
}

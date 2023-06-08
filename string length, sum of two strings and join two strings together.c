#include<stdio.h>
#include<string.h>

int main(){
  char str1[] = "* * * * * Hello, ";
  char str2[] = "Sujon Mahamud * * * * *"; 
  char joinTwostrings[100];
  int sum;
  
  int lengthString1 = strlen(str1);
  int lengthString2 = strlen(str2);
  
  sum = lengthString1 + lengthString2;
  
  strcpy(joinTwostrings, str1);
  strcat(joinTwostrings, str2);

  printf("\n\n%s\n\n", joinTwostrings);
  printf("Length of String 1 = %d\nLength of String 2 = %d\nSum of two strings = %d\n\n", lengthString1, lengthString2, sum);
  
  return 0;
}

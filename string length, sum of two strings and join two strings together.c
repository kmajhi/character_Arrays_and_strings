#include<stdio.h>
#include<string.h>

int main(){
  char str1[]= "Hello, ";
  char str2[]= "Sujon Mahamud"; 
  int LengthString [100];
  int sum;
  
  int lengthString1 = strlen(str1);
  int lengthString2 = strlen(str2);
  
  sum = lengthString1+lengthString2;
  
  printf("Length of String 1 is = %s \nLength of String 2 is = %s\nSum of String 1 and String2 is = %d", lengthString1, lengthString2, sum);
  
  return 0;
}

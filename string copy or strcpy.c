#include<stdio.h>
#include<string.h>

int main(){
  char str1[]= "Hello, ";
  char str2[]= "Sujon Mahamud";
  char destination[50];
  
  strcpy(destination, str1);
  strcat(destination, str2);
  
  printf("Copied String %s", destination);
  
  return 0;
}

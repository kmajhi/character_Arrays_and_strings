#include<stdio.h>
#include<string.h>

int main(){
  
  char ch1[]= "Hello, ";
  char ch2[] = "Bro!";
  char joinLine[100];
  
  int i,j;
  
 for(i=0; ch1[i]!='\0'; i++){
   joinLine[i] = ch1[i];
 }
  
  for(j=0; ch2[i+j]!='\0'; j++){
    joinLine[i+j] = ch2[j];
  }
  
  joinLine[i+j]= '\0';
  
  printf("%s", joinLine);
  
return 0;
}

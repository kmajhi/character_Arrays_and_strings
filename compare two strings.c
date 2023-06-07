#include<stdio.h>
#include<string.h>

int main(){
  char ch1[]= "Hello!";
  char ch2[]= "Hello!";
  
  int compare = strcmp(ch1,ch2);
  
  if(compare==0){
    printf("Equal");
  } else{
    printf("Not Equal");
  }

  return 0;
  }

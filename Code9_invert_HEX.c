#include<stdio.h>
#include<conio.h>
int main(){
  char h[6];
  int a[6],i=0;
  printf("Enter the Hexadecimal number:");
  scanf("%s",&h);
  while(i<6){
    if((int)h[i]>=48&&(int)h[i]<=53||(int)h[i]>57){
      a[i]=118-(int)h[i];
    }
    else{
      a[i]=111-(int)h[i];
    }
    i++;
  }
  printf("\nThe inverted equivalent 
  

#include<stdio.h>
#include<conio.h>
int main(){
  char h[6];
  int a[6],i=0;
  printf("Enter the Hexadecimal number:");
  scanf("%s",&h);
  while(i<6){
    if((int)h[i]>=48&&(int)h[i]<=53||(int)h[i]>57){
      a[i]=118-(int)h[i];                           /*USE OF ASCII VALUES*/
    }
    else{
      a[i]=111-(int)h[i];                           /*USE OF ASCII VALUES*/
    }
    i++;
  }
  printf("\nThe inverted equivalent is:%c%c%c%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5]);
}

#include<stdio.h>
#include<conio.h>
int main() {
	int number,remainder,i=0,array[8]={0,0,0,0,0,0,0,0};
	printf("This program converts a Decimal number(8 bits maximum) into its equivalent Binary number\n\n");
	printf("Enter a number:");
	scanf("%d",&number);
	if(number>=0&&number<=255){
		while(number>=1){
			remainder=number%2;
			array[i]=remainder;
			number=number/2;
			i++;
		}
		printf("\nThe binary equivalent is:%d%d%d%d%d%d%d%d",array[7],array[6],array[5],array[4],array[3],array[2],array[1],array[0]);
	}
	else{
		printf("\nThe number you entered is greater than 8 bits, enter a number between 0 and 255");
	}
}


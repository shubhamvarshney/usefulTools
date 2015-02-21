#include<stdio.h>
#include<conio.h>
int main() {
	int power=1,array[9]={0,0,0,0,0,0,0,0,0},i=0;
	long number;
	printf("This program converts a Binary number(8 bits maximum) into its equivalent Decimal number\n\n");
	printf("Enter a number:");
	scanf("%ld",&number);
	if(number>=0&&number<=11111111){
	while(i<=7){
		array[i]=number%10;
		number=(number-array[i])/10;
		array[i]=array[i]*power;
		power=power*2;
		i++;
	}
	array[8]=array[7]+array[6]+array[5]+array[4]+array[3]+array[2]+array[1]+array[0];
	printf("\nThe Decimal equivalent is:%d",array[8]);
	}
	else{
		printf("\nThe number you entered is greater than 8 bits, the number should be between 00000000 and 11111111");
	}
}

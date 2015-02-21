#include<stdio.h>
#include<conio.h>
int main() {
	char array[2];
	int x,y,remainder,i=0,bin[8]={0,0,0,0,0,0,0,0},decimal;
	printf("This program converts a Hexadecimal number(8 bits maximum) into its equivalent binary number\n\nINSTRUCTIONS: If AE is the number then enter A as first chracter and then enter E as second character. Characters are not case sensitive\n");
	printf("\nEnter the FIRST character of the hex number:");
	scanf("%s",&array[0]);
	printf("Enter the SECOND character of the hex number:");
	scanf("%s",&array[1]);
	printf("The hex number is:%c%c",array[0],array[1]);
	switch(array[0]){
		case '0':
			x=0;
			break;
		case '1':
			x=1;
			break;
		case '2':
			x=2;
			break;
		case '3':
			x=3;
			break;
		case '4':
			x=4;
			break;
		case '5':
			x=5;
			break;
		case '6':
			x=6;
			break;
		case '7':
			x=7;
			break;
		case '8':
			x=8;
			break;
		case '9':
			x=9;
			break;
		case 'A':
			x=10;
			break;
		case 'B':
			x=11;
			break;
		case 'C':
			x=12;
			break;
		case 'D':
			x=13;
			break;
		case 'E':
			x=14;
			break;
		case 'F':
			x=15;
			break;
		case 'a':
			x=10;
			break;
		case 'b':
			x=11;
			break;
		case 'c':
			x=12;
			break;
		case 'd':
			x=13;
			break;
		case 'e':
			x=14;
			break;
		case 'f':
			x=15;
			break;
	}
	switch(array[1]){
		case '0':
			y=0;
			break;
		case '1':
			y=1;
			break;
		case '2':
			y=2;
			break;
		case '3':
			y=3;
			break;
		case '4':
			y=4;
			break;
		case '5':
			y=5;
			break;
		case '6':
			y=6;
			break;
		case '7':
			y=7;
			break;
		case '8':
			y=8;
			break;
		case '9':
			y=9;
			break;
		case 'A':
			y=10;
			break;
		case 'B':
			y=11;
			break;
		case 'C':
			y=12;
			break;
		case 'D':
			y=13;
			break;
		case 'E':
			y=14;
			break;
		case 'F':
			y=15;
			break;
		case 'a':
			y=10;
			break;
		case 'b':
			y=11;
			break;
		case 'c':
			y=12;
			break;
		case 'd':
			y=13;
			break;
		case 'e':
			y=14;
			break;
		case 'f':
			y=15;
			break;
	}
	decimal=(16*x)+y;
	if(decimal>=0&&decimal<=255){
		while(decimal>=1){
			remainder=decimal%2;
			bin[i]=remainder;
			decimal=decimal/2;
			i++;
		}
		printf("\n\nThe binary equivalent is:%d%d%d%d%d%d%d%d",bin[7],bin[6],bin[5],bin[4],bin[3],bin[2],bin[1],bin[0]);
	}
}

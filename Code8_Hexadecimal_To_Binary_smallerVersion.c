#include<stdio.h>
#include<conio.h>
int main(){
	char array[2];
	int x,y,z,bin[8]={0,0,0,0,0,0,0,0},i=0;
	printf("This program converts a Hexadecimal number(8 bits maximum) into its equivalent binary number\n\nINSTRUCTIONS: If AE is the number then enter A as first chracter and then enter E as second character. Characters are not case sensitive\n");
	printf("\nEnter FIRST character of the hex number:");
	scanf("%s",&array[0]);
	printf("Enter SECOND character of the hex number:");
	scanf("%s",&array[1]);
	printf("The hex number is:%c%c",array[0],array[1]);
	x = (int)array[0];
	y = (int)array[1];
	if(x>=48&&x<=57){
		x=x-48;
	}
	else{
		x=x-55;
	}
	if(y>=48&&y<=57){
		y=y-48;
	}
	else{
		y=y-55;
	}
	z=(16*x)+y;
	if(z>=0&&z<=255){
		while(z>=1){
			bin[i]=z%2;
			z=z/2;
			i++;
		}
		printf("\n\nThe binary equivalent is:%d%d%d%d%d%d%d%d",bin[7],bin[6],bin[5],bin[4],bin[3],bin[2],bin[1],bin[0]);
	}
}

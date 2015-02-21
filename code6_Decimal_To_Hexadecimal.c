#include<stdio.h>
#include<conio.h>
int main() {
	int number,remainder[2]={0,0},i=0;
	printf("This program converts a Decimal number(8 bits maximum) into its equivalent hexadecimal number\n\nINSTRUCTIONS: If AE is the number then enter A as first chracter and then enter E as second character. Characters are not case sensitive\n");
	printf("\nEnter a number:");
	scanf("%d",&number);
	while(i<=1){
		remainder[i]=number%16;
		number=number/16;
		i++;
	}
	if(remainder[1]>=10){
		if(remainder[1]==10){
			printf("\nThe Hexadecimal equivalent is:A");
		}
		else if(remainder[1]==11){
			printf("\nThe Hexadecimal equivalent is:B");
		}
		else if(remainder[1]==12){
			printf("\nThe Hexadecimal equivalent is:C");
		}
		else if(remainder[1]==13){
			printf("\nThe Hexadecimal equivalent is:D");
		}
		else if(remainder[1]==14){
			printf("\nThe Hexadecimal equivalent is:E");
		}
		else if(remainder[1]==15){
			printf("\nThe Hexadecimal equivalent is:F");
		}
	}
	else{
		printf("\nThe Hexadecimal equivalent is:%d",remainder[1]);
	}
	if(remainder[0]>=10){
		if(remainder[0]==10){
			printf("A");
		}
		else if(remainder[0]==11){
			printf("B");
		}
		else if(remainder[0]==12){
			printf("C");
		}
		else if(remainder[0]==13){
			printf("D");
		}
		else if(remainder[0]==14){
			printf("E");
		}
		else if(remainder[0]==15){
			printf("F");
		}
	}
	else{
		printf("%d",remainder[0]);
	}
}

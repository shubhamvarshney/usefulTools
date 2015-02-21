#include<stdio.h>
#include<conio.h>
int main() {
	long number;
	int array[10]={0,0,0,0,0,0,0,0,0,0},i=0,power=1;
	printf("This program converts a Binary number(8 bits maximum) into its equivalent Hexadecimal number\n\n");
	printf("Enter a number:");
	scanf("%ld",&number);
	if(number>=0&&number<=11111111){
		while(i<=3){
			array[i]=number%10;
			number=(number-array[i])/10;
			array[i]=array[i]*power;
			power=power*2;
			i++;
		}
		i=4;
		power=1;
		while(i<=7){
		array[i]=number%10;
		number=(number-array[i])/10;
		array[i]=array[i]*power;
		power=power*2;
		i++;
		}
		array[8]=array[0]+array[1]+array[2]+array[3];
		array[9]=array[4]+array[5]+array[6]+array[7];
		if(array[9]>=10){
			if(array[9]==10){
				printf("\nThe Hexadecimal equivalent is:A");
			}
			else if(array[9]==11){
				printf("\nThe Hexadecimal equivalent is:B");
			}
			else if(array[9]==12){
				printf("\nThe Hexadecimal equivalent is:C");
			}
			else if(array[9]==13){
				printf("\nThe Hexadecimal equivalent is:D");
			}
			else if(array[9]==14){
				printf("\nThe Hexadecimal equivalent is:E");
			}
			else if(array[9]==15){
				printf("\nThe Hexadecimal equivalent is:F");
			}
		}
		else{
			printf("\nThe Hexadecimal equivalent is:%d",array[9]);
		}
		if(array[8]>=10){
			if(array[8]==10){
				printf("A");
			}
			else if(array[8]==11){
				printf("B");
			}	
			else if(array[8]==12){
				printf("C");
			}
			else if(array[8]==13){
				printf("D");
			}	
			else if(array[8]==14){
				printf("E");
			}
			else if(array[8]==15){
				printf("F");
			}
		}
		else{
			printf("%d",array[8]);
		}
	}
	else{
		printf("\nThe number you entered is greater than 8 bits, the number should be between 0000 and 11111111");
	}
}

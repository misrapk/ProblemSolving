//luhman formula

#include<bits/stdc++.h>
using namespace std;

//declare the functions
void luhnValidation(char digit);
int doubleDigitVlaue(int digit);

//main Functions
int main(){
	char digit;
	cout<<"Enter a number: ";
	digit = cin.get();
	
	luhnValidation(digit);

	return 0;
}

//function to double the digit
int doubleDigitValue(int digit){
	int doubleDigit = digit *2;
	int sum; 
	if(doubleDigit > 10){
		sum = 1+doubleDigit %10;
	}
	else {
		sum = doubleDigit;
	}
	return sum;
}

//function to check the Luhn Validation
void luhnValidation(char digit){
	int oddLenChecksum =0;
	int evenLenChecksum =0;
	int pos = 1;
	while(digit !=10){
		if(pos %2 ==0){
			oddLenChecksum += doubleDigitValue(digit -'0');
			evenLenChecksum += digit - '0';
		}else
		{
			oddLenChecksum += digit -'0';
			evenLenChecksum += doubleDigitValue(digit - '0');
			
		}
		digit = cin.get();
		pos++;
	}
	int checksum;
	if((pos -1 %2) ==0){
		checksum = evenLenChecksum;
	}
	else {
		checksum = oddLenChecksum;
	}
	cout<<"Checksum is: "<<checksum<<"\n";
	if(checksum %10 ==0){
		cout<<"Checksum is divisible by 10. VALID!\n";
	}
	else 
	cout<<"Check sum is not valid!!!!\n";
	
}

//DECODE NUMBER
#include<iostream>
using namespace std;

int main(){
	char output;
	cout<<"ENter the number :";
	char digitchar;
	
	enum modeType{
	Ucase, Lcase, Pcase
	};
	
	modeType mode = Ucase;
	
	do{
	   //step1: read the digit and convert to integer
	   digitchar= cin.get();
	   int number = (digitchar - '0');
	   	digitchar = cin.get();
	while((digitchar != 10) && (digitchar != ',')){
		number = number * 10 + (digitchar - '0');
		digitchar = cin.get();
	}
		
		//deal with mode switching
		switch(mode){
			case Ucase: 
				 number = number % 27;
				 output = number + 'A' -1;
				 if(number ==0){
				 	
				 	mode = Lcase;
				 	continue;
				 }
				 break;
 		    case Lcase:
 		    	 number  = number %27;
 		    	 output = number + 'a' -1;
				 if(number ==0){
				 	mode = Pcase;
				 	continue;
				 }
				 break;
		    case Pcase:
		    	number  = number % 9;
 		    	switch (number) {   
		            case 1: output = '!'; break; 
		     		case 2: output = '?'; break; 
		  		    case 3: output= ','; break;
  			    	case 4: output = '.'; break; 
				    case 5: output = ' '; break; 
				    case 6: output = ';'; break;
                    case 7: output = '"'; break; 
				    case 8: output = '\''; break;
				    } 
							
				 if(number ==0){
				 	mode = Ucase;
				 	continue;
				 }
				 break;
		}
		cout<<output;
	} while(digitchar != 10);    //break the  loop
	cout<<"\n";


   
	return 0;

}














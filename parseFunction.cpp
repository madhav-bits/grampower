#include "functions.h"
#include<iostream>
using namespace std;

bool parForHello(char token){
	
	if(subString[count]==token){
		count++;//count indicates the index(Character) of the substring that it's checking in the input sequence to match for. 
		if(count==length){//Whenever there are consecutive "length" number characters matched it meant that the substring has been found in the input sequence.
		return 1;
		}
	}	
	else{
		count=0;
	}
	if(token==' '){//If space bar is encountered, then it has to start looking for the first character of the substring so, count is made equal to "0".
		count=1;
	} 
	cout<<"afadf"<<count<<endl;
	//else{
		return 0;
	//

}

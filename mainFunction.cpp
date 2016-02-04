#include<cstdio>
#include<iostream>
#include<string>
#include "functions.h"//Working fine even when this header file isn't added.

using namespace std;

int count=1;
string subString;
int length;


bool parForHello(char c);

int main(){
	cout<<"Give the searching string"<<endl;
	cin>>subString;//Substring parsing for modified to will.So, taking it from stdin.
	getchar();//To consume the "ENTER TAB" delimiter from the above line.
	subString=' '+subString+' ';
	length=subString.size();//Length of the substring parsing for.
	cout<<"dfadf"<<length<<endl;
	while(true){
		char token=getchar();//Would be considering a stream of character sequence from STDIN as a character in each iteration.
		bool subStrFound=parForHello(token);
		if(subStrFound){
			//cout<<"String Found"<<endl;
			break;//If the required substring is found in the sequence of input characters, then stops taking input from STDIN, if not goes on forever.
		}
	}
	return 0;
}			

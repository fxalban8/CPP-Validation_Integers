#include <iostream>
#include <limits>
using namespace std;

int main(){
	int input;
	cout<<"Enter an integer"<<endl;
	cin>>input;
	while(!cin){	//verifies if an error occurs when taking the input from cin
		cin.clear();	//used to get rid of the error flag, the input which failed
				//will be sitting in some sort of buffer
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	//it takes out all 
									//the characters on 
									//the buffer but it 
									//will stop when it 
									//finds an '\n'
		cout<<"Enter an integer"<<endl;
		cin>>input;
	}


	//flushing the buffer
	int c;
	do{
		c=cin.get();
	}while(c!='\n'&&c!=EOF);

	//expecting ENTER
	cin.get();
	return 0;
}

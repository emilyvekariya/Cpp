#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream input;
	int count=0;
	input.open("file.txt",ios::in);
	char word[30];

	if(!input)
		cout<<"the file cannot open"<<endl;
	else{
		while(!input.eof()){
			input>>word;
			count++;
		}
	}
	cout<<"total white space : "<<count-1<<endl;
	input.close();
}



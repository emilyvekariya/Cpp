#include<iostream>
#include<fstream>
using namespace std;

//count the number of lines in the file
int main(){
	ifstream input;
	int count=0;
	string str;
	input.open("file.txt",ios::in);
	char word[30];

	if(!input)
		cout<<"the file cannot open"<<endl;
	else{
		while(getline(input,str)){
			//input>>word;
			count++;
		}
	}
	cout<<"total lines : "<<count<<endl;
	input.close();
}



//count the number of words in the file
/*int main(){
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
	cout<<"total words : "<<count<<endl;
	input.close();
}
*/

//with eof() read with delimeters/separators
/*int main(){
	ifstream input;
	string str,str2,str3;
	input.open("data.txt",ios::in);

	if(!input)
		cout<<"the file cannot open"<<endl;
	else{
		while(!input.eof()){
			input>>str>>str2>>str3;
			cout<<str<<"\t"<<str2<<"\t"<<str3<<endl;
		}
	}
	input.close();
}
*/

//one line at a time
/*int main(){
	ifstream input;
	string str;
	input.open("file.txt",ios::in);

	if(!input)
		cout<<"the file cannot open"<<endl;
	else{
		while(getline(input,str)){
			//input>>str;
			cout<<str<<endl;
		}
	}
}
*/

//print all the data from the life
/*int main(){
	ifstream input;
	string str;
	input.open("file.txt",ios::in);

	if(!input)
		cout<<"the file cannot open"<<endl;
	else{
		while(!input.eof()){
			input>>str;
			cout<<str<<endl;
		}
	}
}*/

//check file is exist or not

/*#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream myfile;
	myfile.open("file.txt",ios::in);

	if(!myfile)
		cout<<"the file cannot open"<<endl;
}*/

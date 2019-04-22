#include<iostream>
#include<string>
using namespace std;

int main(){

string str;
string str2;

cin >> str;



int i;
for(i = 0; i < str.size(); i++){

	if(str[i] == '0' || str[i] == '1'){
		
		str2.push_back( str[i] );
	}
	else{

		if(str2[0] != '\0'){
		str2.pop_back();
		}
	}

}


cout << str2 << endl;


}
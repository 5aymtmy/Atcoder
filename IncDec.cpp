#include<iostream>
#include<string>
using namespace std;

int main(){


	int n;
	string str;
	int x = 0;
	int sum = 0;

	cin >> n;
	cin >> str;

	int i;
	for(i = 0; i < n; i++){

		if(str[i] == 'I'){
			sum++;
		}
		else{
			sum--;
		}

		if(sum > x){
			x = sum;
		}
	}

	cout << x << endl;
}
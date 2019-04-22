#include<iostream>
using namespace std;

int main(){

	int alice,bob;

	cin >> alice >> bob;

	if(alice == 1) alice = 14;
	if(bob == 1) bob = 14;

	if(alice > bob)      cout << "Alice" << endl;
	else if(bob > alice) cout << "Bob" << endl;
	else                 cout << "Draw" << endl;
}

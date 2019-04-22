#include <iostream>
using namespace std;

int main(){

int x,y,z;
int flg = 0;

cin >> x >> y >> z;


if(x + y == z)      flg = 1;
else if(x + z == y) flg = 1;
else if(y + z == x) flg = 1;

if(flg == 1) cout << "Yes" << endl;
else         cout << "No" << endl;



}
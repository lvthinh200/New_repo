#include<iostream>

using namespace std;

bool isEven(int n)
{
	if (n==1) return false;
	return !isEven(n-1);
}

int main(){
	int a;
	cin >> a;
	if(isEven(a)) cout<<a<<" la so chan";
	else cout<<a<<" la so le" <<endl;
	cout << "Cau hay lam";
	return 0;
	
}

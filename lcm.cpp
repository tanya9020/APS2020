#include <iostream> 
using namespace std; 
 
int gcd(int a, int b){ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int lcm(int a, int b) 
{ 
	return (a*b)/gcd(a, b); 
} 

int main() 
{ 
	int a = 15, b = 20; 
	cout<<lcm(a, b); 
	return 0; 
} 
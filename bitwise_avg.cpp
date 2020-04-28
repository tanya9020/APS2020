#include <iostream>
using namespace std;

int main() {
    int a=2,b=4,avg;
    avg = (a & b) + ((a ^ b) >> 1);
    cout<<avg;
	return 0;
}

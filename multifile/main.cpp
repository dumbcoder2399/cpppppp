#include <iostream>
#include <string>
using namespace std;
#include "Math.h"
int main()
{
	int num1, num2, result;
	Math maths;
	num1=8;
	num2=4;
	// cin>>num1;
	// cin>>num2;
	result = maths.add(num1, num2); 
	cout <<result<<endl;
	result = maths.subtract(num1, num2);
	cout <<result<<endl;
	result = maths.multiply(num1, num2);
	cout <<result<<endl;
	result = maths.divide(num1, num2);
	cout <<result<<endl;
	return 0;
}
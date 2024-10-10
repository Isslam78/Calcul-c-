#include <iostream>
using namespace std;
int main(){
	cout << "please enter the first number :";
	float number1, number2,result1,result2,result3,result4;
	string operator_1;
	cin >> number1;
	cout << "please enter the secend number";
	cin >> number2;
	cout << "enter the operator(/,+,-,*)";
	cin >> operator_1;
	if(operator_1 == "/"){
		result1 = number1 / number2;
		cout << result1;
	
	}
	
	if(operator_1 == "*"){
		result2 = number1 * number2;
		cout << result2;
		
	}
	if(operator_1 == "+"){
		result3= number1 + number2;
		cout << result3;
	
		}
	if(operator_1 == "-"){
		result4 = number1 - number2;
		cout << result4;
	
	}
}
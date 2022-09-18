#include<iostream>
using namespace std;

int main()
{
char a;
float num1, num2;

	cout<<"Menu\n";
	cout<<"---------------------------------------------------\n";
	cout<<"+ Addition\n- Subtraction\n* Multiplication\n/ Division\n. Cancel\n";
	
	cout<<"---------------------------------------------------\n";
	cout << "Enter first number: ";
	cin >> num1;
  
	cout<<"Enter second number: ";
	cin>>num2;

	cout << "Enter operation: ";
	cin >> a;

	cout<<"---------------------------------------------------\n";

  switch(a) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      switch(num1/num2!=0){
      	case 1:
      		cout<<"\n num1/num2 is not equal to zero";
      		break;
      	case 0:
      		cout<<"False output";
      		break;
	  }
      break;
	
	case '.':
		cout<<"Cancelled";
		break;
	
    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}


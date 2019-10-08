
// Scientific Calculator 
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	int power;
	char operation;
	// 
	cout<<"Enter number here >> ";
	cin>>a;
	cout<<endl;
	cout<<setw(22)<<"({+}, {-}, {*}, {/}"<<endl;
	cout<<setw(23)<<"PRESS P FOR POWER"<<endl;
	cout<<setw(29)<<"PRESS S FOR SQUARE ROOT"<<endl;
	cout<<setw(21)<<"PRESS L FOR LOG"<<endl;
	cout<<setw(26)<<"PRESS E FOR EXPONENT"<<endl;
	cout<<setw(21)<<"PRESS C FOR COS"<<endl;
	cout<<setw(21)<<"PRESS I FOR SIN"<<endl;
	cout<<setw(21)<<"PRESS T FOR TAN"<<endl;

	cout<<setw(21)<<"Enter operation >>  ";
	cout<<endl;
	cin>>operation;
	switch(operation)
	{
		// code for square-root
		case 'S':
		case 's':
		cout<<"Square-root is "<<sqrt(a)<<endl;
		break;
		// code for power
		case 'P':
		case 'p':
		cout<<"Enter power here >>  ";
		cin >> power;
		cout<<"Answer is "<<pow(a,power)<<endl;
		break;
		// code for finding log
		case 'L':
		case 'l':
		cout<<"Answer is "<<log(a)<<endl;
		break;
		// code for finding exponential
		case 'E':
		case 'e':
		cout<<"Answer is "<<exp(a)<<endl;
		break;
		// for finding Cos
		case 'C':
		case 'c':
		cout<<"Answer is "<<cos(a)<<endl;
		break;
		// for finding Sin
		case 'I':
		case 'i':
		cout<<"Answer is "<<sin(a)<<endl;
		break;
		// for finding Tan
		case 'T':
		case 't':
		cout<<"Answer is "<<tan(a)<<endl;
		break;
		// for adding
		case'+':
		cout<<"Enter number here >> ";
		cin>>b;
		cout<<"Sum is >>  "<<a+b<<endl;
		break;
		// for difference
		case'-':
		cout<<"Enter number here >>  ";
		cin>>b;
		cout<<"Difference is >>  "<<a-b<< endl;
		break;
		// for division
		case '/':
		cout<<"Enter number here >>  ";
		cin>>b;
		cout<<"Division is >>  "<<a/b<<endl;
		break;
		// for multiplication
		case'*':
		cout<<"Enter number here >>  ";
		cin >> b;
		cout<<"Multiplication is >>  "<<a*b<<endl;
		break;
		// in case of wrong input
		default:
		cout<<"oye rangbaazi na kr sai number add kr ";
	}
	
	return 0;
}


#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
double a,b;
int power;
char operation;
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
case 'S':
case 's':
cout<<sqrt(a)<<endl;
break;
case 'P':
case 'p':
cout<<"Enter power here >>  ";
cin >> power;
cout<<pow(a,power)<<endl;
break;
case 'L':
case 'l':
cout<<log(a)<<endl;
break;
case 'E':
case 'e':
cout<<exp(a)<<endl;
break;
case 'C':
case 'c':
cout<<cos(a)<<endl;
break;
case 'I':
case 'i':
cout<<sin(a)<<endl;
break;
case 'T':
case 't':
cout<<tan(a)<<endl;
break;

case'+':
cout<<"Enter number here >> ";
cin>>b;
cout<<"Sum is >>  "<<a+b<<endl;
break;
case'-':
cout<<"Enter number here >>  ";
cin>>b;
cout<<"Difference is >>  "<<a-b<< endl;
break;
case '/':
cout<<"Enter number here >>  ";
cin>>b;
cout<<"Division is >>  "<<a/b<<endl;
break;
case'*':
cout<<"Enter number here >>  ";
cin >> b;
cout<<"Multiplication is >>  "<<a*b<<endl;
break;
default:
	cout<<"oye rangbaazi na kr sai number add kr";
}
	
	return 0;
}


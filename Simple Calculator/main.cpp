#include <iostream>

using namespace std;

int main()
{cout<<"*****CONSOLE CALCULATOR PROGRAM*****"<<endl;
char op;
int num1;
int num2;
int result;

cout<<"Enter either ( + , - , * , /)"<<endl;
cout<<"operator = " ;
cin>>op ;
 cout <<"Enter first number here: " ;
 cin>>num1;
 cout<<"Enter second number here: " ;
 cin>>num2;
 cout<<endl ;

 if(op == '+'){
        result=num1 + num2 ;
    cout<<"Result of Addititon is : "<<num1<<'+'<<num2<<" = "<< result;
 }
 else if(op == '-'){
        result=num1 - num2 ;
    cout<<"Result of Subtaction is : "<<num1<<'-'<<num2<<" = "<< result;

 }
 else if(op == '*'){
        result=num1 * num2 ;
    cout<<"Result of Multiplication is : "<<num1<<'*'<<num2<<" = "<< result;}

    else if(op == '/'){
        result=num1 / num2 ;
    cout<<"Result of Division is : "<<num1<<'/'<<num2<<" = "<< result;

 }
 else {
    cout<<"Invalid response" ;
 }


    return 0;
}

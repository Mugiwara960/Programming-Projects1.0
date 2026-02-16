#include <iostream>

using namespace std;

int main()
{
    int temp;
    char unit;

    cout<<"*****Temperature clculating program*****"<<endl ;
    cout<<"Fahrenheit = F"<<endl;
    cout<<"Celsisus   = c"<<endl;
    cout<<"What unit would you like to convert to: " ;
    cin>>unit;
    cout<<endl;

    if (unit =='f' || unit =='F'){
        cout<<"Enter Temperature in Celsius: " ;
        cin>>temp;
        temp=(1.8*temp)+32;
        cout<<"Temperature in Celsius is "<<temp<<"C" ;
    }
    else if (unit =='c' || unit =='C'){
        cout<<"Enter Temperature in Fahrenheit: " ;
        cin>>temp;
        temp=(temp-32)/1.8;;
        cout<<"Temperature in Fahrenheit is"<<temp<<"F" ;
    }
    else{
        cout<<"Invalid Response";
    }
    return 0;
}

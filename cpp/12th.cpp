#include<iostream>

using namespace std;

int main()
{
    int base,exponent,result=1;
    cout<< "///Program to calculate power///"<<endl<<endl<<endl;
    cout<< "Enter base: ";
    cin>> base;
    cout<< "Enter exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< c;
    cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}

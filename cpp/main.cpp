#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int add_2()
{
    int a,b;
    cout<< "///Program to add two number///"<<endl<<endl<<endl;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<< "Addition of entered number is: "<< a+b<<endl;
    return 0;
}

int average()
{
  int a[20], i, n;
  float avg = 0;
  cout << "///Program to display average of entered n numbers///" << endl << endl << endl;
  cout << "Enter number of numbers you want to get average of: ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    cout << i << " number: ";
    cin >> a[i];
    avg = avg + a[i];
  }
  cout << "Average of " << n << " number(s) is: " << avg / n<<endl;
  return 0;
}

int base_pow()
{
    int base,exponent;
    long long result=1;
    cout<< "///Program to Calculate Power of a Number///"<<endl<<endl<<endl;
    cout<< "Enter base: ";
    cin>> base;
    cout<< "Enter exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< result;
    return 0;
}

int main()
{
 int choice;
 cout<< "///Main Program///"<<endl<<endl;
 while(1)
 {
   cout<< "Programs:\n";
   cout<< "1 for Program to add two numbers\n";
   cout<< "2 for Program to get average\n";
   cout<< "Anything else to exit!\n";
   cout<< "choice: ";
   cin>> choice;
   switch(choice)
   {
     case 1: add_2();
             break;
     case 2: average();
             break;
     case 3: base_pow();
             break;
     default: cout<< "Exiting...";
             exit(0);
   }
   cout<<"\n";
 }
}

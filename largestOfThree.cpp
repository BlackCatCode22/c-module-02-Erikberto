//largestOfThree.cpp
// eS 2/9/25
// CIT-66
#include <iostream>

using namespace std;
int main()
{   cout<<"Please enter 3 different numbers:";
    int a;
    int b;
    int c;
    cin >>a>>b>>c;
    cout<<"You have entered: "<<a<<", "<<b<< " and, "<<c<<endl;
    if (a>=b && a>=c)
        cout<<"The largest number is: "<< a;
    else if (b>=a && b>=c)
        cout<<"The largest number is: "<< b;
    else if (c>=a && c>=b)
        cout<<"The largest number is: "<< c;

    return 0;
}
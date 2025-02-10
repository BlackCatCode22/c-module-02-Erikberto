// reversedString.cpp
// eS 2/9/25
// CIT-66

#include <iostream>
#include <algorithm>
//#include <string>
using namespace std;

int main() {
    string str;
    cout<<"\n" << "Enter a word or number: "<<"\n";
    cin >> str;
    reverse(str.begin(), str.end());
    cout<<"The reversed is:\n"<<str<<"\n";


    return 0;
}

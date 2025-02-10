// funWithFunctions.cpp
// eS 2/9/25
// CIT-66

#include <iostream>
using namespace std;


int main() {

    cout <<"\n" << "Enter two numbers separated, to check if their addition even or odd: ""\n";
    int userInput ;
    int userInput1;

    cin >> userInput>> userInput1;
    int userInput2 = userInput + userInput1;
    cout << "You entered: " << userInput << "+" << userInput1 << "\n";
    cout << "The sum is: "<< userInput2<<"\n";
    if (userInput2 %2== 0) {
        cout << "You have entered: " << userInput2 << " an even number"<<endl;
    }
    else {
        cout <<"You have: " << userInput2 << " an odd number"<<endl;
    }
    return 0;
}
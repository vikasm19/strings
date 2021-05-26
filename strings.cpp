#include <iostream>
#include <string>
using namespace std;
int main() {
    
    //This code only run till single space in string input.
    //coz c++ has it's limitations so we use getLine function
    //so we will check one by one, first normal userInput in string and then using getline.
    
    string userName;
    string anotherName;
    cout<<"Enter your nickname: ";
    cin>>userName;
    cout<<"Enter you Full name: ";
    cin.ignore();         //To buffer out other characters  from the input buffer.
    getline(cin, anotherName);
    cout<<"Hello "<<userName<<"\n";   //Printing without getline
    cout<<"Hello "<<anotherName<<"\n";  //Printing while using getline
    return 0;
}
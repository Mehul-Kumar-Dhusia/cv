#include<iostream>
using namespace std ;
int main(){
    int year ;
    cout << "Enter the year :" << endl ;
    cin >> year ;
    if ((year % 4) == 0){
        if((year % 100) == 0){
            if((year % 400) == 0){
                cout << "The year is Leap Year." << endl ;
            }
            else{
                cout << "The year is not Leap Year." << endl ;
            }
        }
        else{
            cout << "The year is Leap Year." << endl ;
        }
    }
    else{
        cout << "The year is not Leap Year." << endl ;
    }
}
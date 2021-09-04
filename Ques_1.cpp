#include<iostream>
using namespace std ;
int main(){
    int x , y , s ;
    cout << "Enter first Number :" << endl ;
    cin >> x ;
    cout << "Enter second number :" << endl ;
    cin >> y ;
    s = x ;
    x = y ;
    y = s ;
    cout << "The value of first Number after swaping is :" << x << endl ;
    cout << "The value of second Number after swaping is :" << y << endl ;
    return 0 ;
}
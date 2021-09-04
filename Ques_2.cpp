#include<iostream>
using namespace std ;
int main(){
    int x , y ,z , maximum ;
    cout << "Enter the first Number :"<<endl ;
    cin >> x ;
    cout << "Enter the second Number :"<< endl;
    cin >> y ;
    cout << "Enter the third Number :" << endl ;
    cin >> z ;
    if((x > y) && (x > z)){
        maximum = x ;
    }
    else if ((y > x) && (y > z)){
        maximum = y ;
    }
    else{
        maximum = z ;
    }
    cout << "The largest of three number is :" << maximum ;
}
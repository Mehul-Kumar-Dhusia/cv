#include<iostream>
using namespace std ;
int main(){
    int num ;
    bool prime ;
    cout << "Enter the Number :" << endl ;
    cin >> num ;
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0){
            prime = false ;
            break ;
        }
        else{
            prime = true ;
        }
    }
    if(prime){
        cout << "The number is prime" << endl ;
    }
    else{
        cout << "The number is not prime" << endl ;
    }
}
#include<iostream>
using namespace std ;
int main(){
    int n1 , n2 , n3 , n ;
    n1 = 0 ; 
    n2 = 1 ;
    n3 = n1 + n2 ;
    cout << "Enter the number of terms :" << endl ;
    cin >> n ;
    cout<< n1<< " " << n2 << " ";
    for(int i = 3 ; i <= n ; i++){
        cout << n3 << " ";
        n1 = n2 ;
        n2 = n3 ;
        n3 = n1 + n2 ;
    }

}
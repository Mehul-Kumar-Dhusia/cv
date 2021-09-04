#include<iostream>
using namespace std ;
int main(){
    int arr[20] , n , s ;
    cout << "Enter the size of the array :" ;
    cin >> n ;
    cout << "Enter elements of array : " ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j= i + 1 ; j < n ; j++){
            if(arr[i] < arr[j]){
                s = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = s ;
            }
        }
    }
    cout << "Second largest number is : " << arr[1] ;
}
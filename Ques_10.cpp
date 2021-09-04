#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count = 1;
    for (const char c : s) {
        if (c >= 'A' && c <= 'Z')
            ++count;
    }
    cout<<count<<endl;
}
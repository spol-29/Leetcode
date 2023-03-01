#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int n = x;
    int b = 0;
    while(x != 0){
        b *= (x%10);
        b *= 10;
        n /= 10;
    }
    if(b == x){
        cout << "True" << endl;
    }else if(x < 0){
        cout << "False" << endl;
    }else if(x > 10){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}
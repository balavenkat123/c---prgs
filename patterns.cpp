#include<bits/stdc++.h>
using namespace std;
/*
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    pattern3(n);
    return 0;
}
*/

void pattern4(int n){
    for(int i=n;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<< "enter the number";
    cin>>n;
    pattern4(n);
    return 0;
}
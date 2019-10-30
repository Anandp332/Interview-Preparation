#include<iostream>
using namespace std;
void pattern4(int n){
    for (int i=1;i<=n;i++){
        if (i<=(n+1)/2){
            for (int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
    }
    else{
        for(int k=1;k<(n-i)+1;k++){
            cout<<" ";
        }
        for(int j=1;j<=(n-i)+1;j++){
            cout<<"* ";
        }
    }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern4(n);
    return 0;
}
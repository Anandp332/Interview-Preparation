#include<iostream>
using namespace std;
void pattern3(int n){
    int number=1; 
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=2*(n-1);k>2*(i-1);k--){
            cout<<" ";
        }
        for(int p=i;p>=1;p--){
            cout<<p;
        }
        cout<<endl;
   
    }
}
int main(){
    int n;
    cin>>n;
    pattern3(n);
    return 0;
}
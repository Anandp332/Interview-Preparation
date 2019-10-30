#include<iostream>
using namespace std;
void pattern2(int n){
for(int i=1;i<=n;i++){
    for(int j=n-1;j>=i;j--){
        cout<<" ";
    }
    int temp=i;
    for(int j=1;j<=i;j++,temp++){
    cout<<temp;
    }
    cout<<endl;
}

}
int main(){
    int n;
    cin>>n;
    pattern2(n);
    
    return 0;
    }
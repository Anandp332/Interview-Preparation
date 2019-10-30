#include<iostream>
using namespace std;
void pattern1(int n){
for (int i=1;i<=n;i++){
for(int j=n-1;j>=i;j--){
cout<<" ";

}
int temp=i;
int count=1;
for (int k=1;k<=(2*i-1);k++,count++){
	cout<<temp;
if ( count>=i){
		temp--;
		}
		else{
		temp++;
		}
		
}
cout<<endl;
}
}
int main(){
int n;
cin>>n;
pattern1(n);
	return 0;
}

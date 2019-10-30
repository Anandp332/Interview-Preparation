#include<iostream>
using namespace std;
void rotate(int **input, int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    int **input1 = new int*[n];
    for (int i=0,k=n-1;i<n,k>=0;i++,k--){
        for (int j=0;j<n;j++){
            input1[i][j]=input[j][k];
        }
    }
  for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<input1[i][j]<<" ";
        }
        cout<<endl;
    }   
    delete input1;
}


int main() {
    int n;
    cin >> n;
    
    int **input = new int*[n];
    
    for(int i = 0; i < n; i++) {
        input[i] = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }
    
    rotate(input, n);
    /*
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }*/
}

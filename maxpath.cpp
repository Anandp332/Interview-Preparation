#include <iostream>
using namespace std;

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
     */
int temp1=0,temp2=0;
int i=0,j=0;
long result=0,sum1=0,sum2=0;
while(i<m && j<n){
    if(ar1[i]<ar2[j]){
        sum1 += ar1[i++];
    }
    else if ( ar1[i]>ar2[j]){
        sum2 += ar2[j++];
    }
    else{
        result += max( sum1 , sum2);
        sum1=0,sum2=0;
        while(i<m && j<n && ar1[i] == ar2[j]){
            result += ar1[i++];
            j++;
        }
    }
}
while(i<m){
    sum1 += ar1[i++];
}
while(j<n){
    sum2 +=ar2[j++];
}
result += max( sum1 , sum2);
return result;
}




int main() {
    int *a,*b,m,n,i;
    cin>>m;
    a=new int[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    b=new int[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    long ans = maxPathSum(a,b,m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}
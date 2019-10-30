#include<iostream>
#include<string.h>
using namespace std;
void breakWords(char* S)
{
	/*
	 * Don't write main.
	 * Don't return or print anything.
	 * Changes should be done in the given string.
	*/
    int count=0;
    for ( int i=0;S[i]!='\n';i++){
    	i+=1;
        count=0;
        for( int j=i;S[j]!=' ' || S[j]!= '\n';j++){
            count++;
        }
        if(count>=4 && count%2==0){
            int start =(count/2);
            char temp = S[start];
            S[start]=' ';
            int k;
            for(k=start+1;S[k]!='\n';k++){
                char temp1= S[k];
                S[k]=temp;
                temp=temp1;
            }
            S[k]='\n';
        }
    }
}


int main(){
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
	return 0;
}

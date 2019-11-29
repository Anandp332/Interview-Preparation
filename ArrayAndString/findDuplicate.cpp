#include <iostream>
using namespace std;

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int arrsum=0;
    for (int i=0;i<size;i++){
        arrsum+=arr[i];
    }
    int dup=arrsum-((size-1)*(size-2))/2;
    return dup;
    

}

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << MissingNumber(input, size);	
	
	delete [] input;

	return 0;
}

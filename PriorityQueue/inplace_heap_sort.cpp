/*

Code : In-place heap sort
Send Feedback
Given an integer array of size n. Sort this array (in decreasing order) using heap sort.
Space complexity should be O(1).
Input Format :
Line 1 : Integer n, Array size
Line 2 : Array elements, separated by space
Output Format :
Array elements after sorting
Constraints :
1 <= n <= 10^6
Sample Input:
6 
2 6 8 5 4 3
Sample Output:
8 6 5 4 3 2


*/

#include <iostream>
using namespace std;

void inplaceHeapSort(int input[], int n)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */

    for (int i = 1; i < n; i++)
    {

        int childIndex = i;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (input[childIndex] < input[parentIndex])
            {
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    // Remove elements

    int size = n;

    while (size > 1)
    {
        int temp = input[0];
        input[0] = input[size - 1];
        input[size - 1] = temp;

        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndx = 2 * parentIndex + 2;

        while (leftChildIndex < size)
        {
            int minIndex = parentIndex;
            if (input[minIndex] > input[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndx < size && input[rightChildIndx] < input[minIndex])
            {
                minIndex = rightChildIndx;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = input[minIndex];
            input[minIndex] = input[parentIndex];
            input[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndx = 2 * parentIndex + 2;
        }
    }
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    inplaceHeapSort(input, size);

    for (int i = 0; i < size; i++)
        cout << input[i] << " ";

    return 0;
}

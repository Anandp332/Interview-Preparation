/*

Running median
Send Feedback
You are given a stream of n integers. For every ith integer, add it to the running list of integers and print the resulting median (of the list till now).
Print the only integer part of median.
Input Format :
Line 1 : An integer N denoting the number of integers in the stream
Line 2 : N integers which are separated by spaces
Output Format :
After each new integer is added to the list print the updated median on a new line
Input Constraints
1 <= n <= 10^5
1 <= Ai <= 10^5
Sample Input 1 :
6
6 2 1 3 7 5
Sample Output 1 :
6
4
2
2
3
4
Sample Output explanation :
S = {6}, median = 6
S = {6, 2} -> {2, 6}, median = 4
S = {6, 2, 1} -> {1, 2, 6}, median = 2
S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4





*/

#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;
void findMedian(int arr[], int n)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */

    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;
    //for each element in the data stream
    for (int i = 0; i < n; i++)
    {
        if (maxHeap.size() && arr[i] > maxHeap.top())
        {
            minHeap.push(arr[i]);
        }
        else
        {
            maxHeap.push(arr[i]);
        }
        if (abs((int)maxHeap.size() - (int)minHeap.size()) > 1)
        {
            if (maxHeap.size() > minHeap.size())
            {
                int temp = maxHeap.top();
                maxHeap.pop();
                minHeap.push(temp);
            }
            else
            {
                int temp = minHeap.top();
                minHeap.pop();
                maxHeap.push(temp);
            }
        }
        int median;
        int totalsize = maxHeap.size() + minHeap.size();
        //when number of element are odd
        if (totalsize % 2 == 1)
        {
            if (maxHeap.size() > minHeap.size())
            {
                median = maxHeap.top();
            }
            else
            {
                median = minHeap.top();
            }
        }
        //when number of element are even
        else
        {
            median = 0;
            if (maxHeap.empty() == false)
            {
                median += maxHeap.top();
            }

            if (minHeap.empty() == false)
            {
                median += minHeap.top();
            }
            median /= 2;
        }
        cout << median << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findMedian(arr, n);

    delete[] arr;
}

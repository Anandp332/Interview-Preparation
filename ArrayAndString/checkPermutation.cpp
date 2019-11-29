/*



Code : Check Permutation
Send Feedback
Given two strings, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.
Input format :
Line 1 : String 1
Line 2 : String 2
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false


*/

#include <bits/stdc++.h>
using namespace std;
// input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[])
{
    // Write your code here
    int n1 = strlen(input1);
    int n2 = strlen(input2);

    if (n1 != n2)
        return false;

    sort(input1, input1 + n1);
    sort(input2, input2 + n2);

    for (int i = 0; i < n1; i++)
        if (input1[i] != input2[i])
            return false;

    return true;
}

int main()
{
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if (isPermutation(input1, input2) == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

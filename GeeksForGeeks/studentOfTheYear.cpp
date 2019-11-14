/*

Student of the Year



Given a vector containing name of N student (in lowercase letters) and their marks in an exam. The task is to sort the students with respect to their marks (student with highest marks will be on top). If marks are same, consider lexicographic sorting for names.

 

Input Format:
First line of input contains number of testcases T. First line of each testcase contains N, number of students. Next line contains data of N students name and marks seperated by space (name, marks).

Output Format:
For each testcase, output the name of students with their marks in decreasing order, each student in new line.

Your Task:
Since this is a function problem, you don't need to take any input. You just need to complete the provided function sortMarks().

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= marks <= 106

Example:
Input:
1
4
michal 56
john 100
abbas 98
jordan 45

Output:
john 100
abbas 98
michal 56
jordan 45

Explanation:
Testcase 1: marks of students in decreasing order is as 100, 98, 56, 45. So, their names are as john 100, abbas 98, michal 56, jordan 45.

** For More Input/Output Examples Use 'Expected Output' option **





*/

{
//Initial Template for C++
#include <bits/stdc++.h>
    using namespace std;
    //Position this line where user code will be pasted.
    // Driver code
    int main()
    {

        int testcase;
        cin >> testcase;

        while (testcase--)
        {
            int N;
            cin >> N;

            // Declaring vector
            vector<pair<string, int>> v;

            // Taking input to vector
            for (int i = 0; i < N; i++)
            {
                string s;
                cin >> s;
                int k;
                cin >> k;
                v.push_back(make_pair(s, k));
            }

            // Calling function
            v = sortMarks(v, N);

            // Printing student name with their marks
            for (auto it = v.begin(); it != v.end(); it++)
            {
                cout << it->first << " " << it->second << endl;
            }
        }

        return 0;
    }
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to sort students with respect to their marks
* v : vector input with student name and their marks
* N : size of vector
* Your need to implement comparator to sort on the basis of marks.
*/

bool mycomp(pair<string, int> a, pair<string, int> b)
{
    if (a.second > b.second)
        return 1;                  //if first marks are greater
    else if (b.second == a.second) //if marks are same
        if (b.first > a.first)
            return 1; //then comparing them by name
        else
            return 0;
    return 0;
}

vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N)
{

    sort(v.begin(), v.end(), mycomp);
    return v;
    //Complete the code and return the sorted vector
}
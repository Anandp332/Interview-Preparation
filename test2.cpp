#include <iostream>
using namespace std;

void allStringHelper(char *input, int k, char output[][100], string prefix, int &j)
{
    if (k == 0)
    {
        //temp[j++] = prefix;
        for (int i = 0; i < prefix.length(); i++)
        {
            output[j][i] = prefix[i];
        }
        j++;

        return;
    }
    int n = strlen(input);
    for (int i = 0; i < n; i++)
    {
        string newPrefix = prefix + input[i];
        allStringHelper(input, k - 1, output, newPrefix, j);
    }
    return;
}
int allStrings(char input[], int k, char output[][100])
{

    int j = 0;
    allStringHelper(input, k, output, "", j);
    return j;
}

int main()
{
    char a[100];
    char b[1000][100];
    cin >> a;
    int k;
    cin >> k;
    int size = allStrings(a, k, b);
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << endl;
    }
}
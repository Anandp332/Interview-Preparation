#include <iostream>
using namespace std;
void rotate(int a[], int n, int rot, int *out)
{

    int j = 0;
    for (int i = rot; i < n; i++, j++)
    {
        out[j] = a[i];
    }
    for (int i = 0; i < rot; i++, j++)
    {
        out[j] = a[i];
    }
}

int main()
{
    //code
    int cnt;
    cin >> cnt;
    while (cnt--)
    {
        int n;
        cin >> n;
        int a[n];
        int rot;
        cin >> rot;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int out[n];
        for (int i = 0; i < rot; i++)
        {
            out[i] = 0;
        }
        rotate(a, n, rot, out);
        for (int i = 0; i < n; i++)
        {
            cout << out[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
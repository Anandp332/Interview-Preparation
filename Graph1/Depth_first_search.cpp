#include <iostream>
using namespace std;
void print(int **edge, int vertex, int startVertex, bool *visited)
{
    cout << startVertex << endl;
    visited[startVertex] = true; // marking as vertex has visited
    for (int i = 0; i < vertex; i++)
    {
        if (i == startVertex)
        {
            continue;
        }
        if (edge[startVertex][i] == 1)
        {
            if (visited[i]) //cheackng vertex has visted or not
            {
                continue;
            }
            print(edge, vertex, i, visited); //calling print function again
        }
    }
}
int main()
{
    int vertices; //total no of vertex
    int edge;     //total edges
    cin >> vertices >> edge;
    int **edgeMat = new int *[vertices]; //herecreating 2D array for storing edge availble or not from vertex a ->b
    for (int i = 0; i < vertices; i++)
    {
        edgeMat[i] = new int[vertices];
        for (int j = 0; j < vertices; j++)
        {
            edgeMat[i][j] = 0;
        }
    }
    for (int i = 0; i < edge; i++)
    {
        int first, second;
        cin >> first >> second;
        edgeMat[first][second] = 1; // if a->b = haspath then
        edgeMat[second][first] = 1; // b->a = has also path
    }
    bool *visited = new bool[vertices]; // created a visited array to assigning the visited vertices as false
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
    }
    print(edgeMat, vertices, 0, visited); // funtion for print the graph
}
//  input:
//  4 3
//  0 1
//  1 2
//  2 3
//  output:
//  0
//  1
//  2
//  3

// for example :  0->1->2->3

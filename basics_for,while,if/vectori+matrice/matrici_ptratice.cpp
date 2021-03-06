#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MMAX = 20;
    int a[MMAX][MMAX] = {0};
    int n = 0;

    cout<<"Constructie matrice identitate. Introduceti n:"<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
        a[i][i] = 1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<"Constructie patrate suprapuse. Introduceti n:"<<endl;
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i <= j)
                a[i][j] = i+1;
            else
                a[i][j] = j+1;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j)
                cout<<a[i][j]<<" ";
            else
                cout<<". ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=0; i<n; i++)
        cout<<a[i][n-i-1]<<" ";
    cout<<endl;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j == n-i-1)
                cout<<a[i][j]<<" ";
            else
                cout<<". ";
        }
        cout<<endl;
    }
}

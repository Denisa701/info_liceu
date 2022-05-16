#include <iostream>
#include <cstdlib>

using namespace std;

const int mmax=20;
unsigned int v[mmax];
int n;

int main()
{
    cout<<"cate vagoane?";
    cin>>n;

    // verificare ca numarul citit este conform
    if( n<0 || n>20 )
    {
        cerr<<"nr eronat de intrare";
        exit(EXIT_FAILURE);
    }

    // citirea elementelor de la tastatura si introducerea lor in vector
    for (int i=0; i<n; i++)
    {
        cout<<"incarcatura vagon "<<i<<" este ";
        cin>>v[i];
    }

    // afisarea continutului vectorului
    cout<<"incarcaturi vagon";
    for (int i=0; i<n; i++)
    {
        cout<<v[i]<<'\t';
    }
    cout<<endl;
  ////////////////////////////////////
    bool ok=false;
    cout<<"vagone maxime";
    for (int i=0; i<n; i++)
    {
        if (v[i] == 5000)
        {
            cout<<i<<'\t';
            ok=true;
        }
        if (!ok)
            cout<<endl;
    }

    if (n == 0)
        cout<<"nu sunt vagoane"<<endl;
    else
    {
        int minim=v[0];
        for (int i=1; i<n; i++ )
            if(minim>v[i])
                minim=v[i];

        cout<<"vagoane minime";
        for (int i=0; i<n; i++ )
            if (v[i] == minim)
                cout << v[i] << '\t';
    }
    return 0;
}

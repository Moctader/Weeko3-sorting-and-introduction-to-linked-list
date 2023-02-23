#include<iostream>
#include<vector>

using namespace std;
int n,t;

int main()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    cin>>t;
    vector<int>b(t);
    for(int i=0; i<t; i++)
        cin>>b[i];
    
    vector<int>c;
    
    int idx1=0;
    int idx2=0;
    for(int i=0; i<a.size()+b.size(); i++)
    {
        if(idx1==a.size())
            {
            c.push_back(b[idx2]);
            idx2++;
            }
        else if(idx2==b.size())
            {
            c.push_back(a[idx1]);
            idx1++;
            }
        else if(a[idx1]>b[idx2])
            {
            c.push_back(a[idx1]);
            idx1++;
            }
        else
        {
            c.push_back(b[idx2]);
            idx2++;
        }
    }

    for(int i=0; i<a.size()+b.size(); i++)
        cout<<c[i]<<" ";
    return 0;
}

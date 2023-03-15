#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, a,b;
    cin>>n;
    vector<int>l(n);
    for(int i=0; i<n; i++)
    {
        cin>>l[i];
    }
    cin>>a>>b;

    l.erase(l.begin()+a-1, l.begin()+b);
    for(int i=0; i<l.size(); i++)
    {
        cout<<l[i]<<" ";
    }
    

    return 0;
}
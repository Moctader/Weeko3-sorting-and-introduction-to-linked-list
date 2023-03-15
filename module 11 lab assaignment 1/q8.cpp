#include<iostream>
#include<vector>

using namespace std;

vector<int>even_generator(vector<int>v)
{
    vector<int>x;
    for(int i=0; i<v.size(); i++)
    {
        if (v[i]%2==0)
        {
            x.push_back(v[i]);

        }
        
    }
    return x;
}
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>x=even_generator(v);
    for (int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }

    return 0;
}
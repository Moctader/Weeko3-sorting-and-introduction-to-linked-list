#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, t;
    cin>>n;
    vector<int>a(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>t;
    vector<int>b(t);
    for(int i=0; i<t; i++)
    {
        cin>>b[i];
    }

    int i=0;
    int j=0;
    
    vector<int>sorted_c;

        for( i=0; i<a.size(); i++)
        {
            for( j=0; j<b.size(); j++)
            {
                if (a[i]==b[j])
                {
                    sorted_c.push_back(b[j]);
                    break;
                }

            }
        
    }
    if (a==sorted_c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

    return 0;
}

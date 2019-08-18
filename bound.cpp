#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>s;
    for(int i=0;i<n;i++)
    {   int x;
        cin>>x;
        s.push_back(x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(x==s[i])
                {
                    cout<<"Yes"<<" "<<(i+1)<<endl;
                    c++;
                    break;
                }
        }
        if(c==0)
        {   std::vector<int>::iterator up;
                up= std::upper_bound (s.begin(), s.end(), x);
                cout<<"No"<<" "<<(up - s.begin()+1)<<endl;
        }
    
    }
    
    return 0;
}

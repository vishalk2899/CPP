#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v; 
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x,p,q;
    cin>>x>>p>>q;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(p-1),v.begin()+(q-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

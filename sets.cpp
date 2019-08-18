#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,p;
        cin>>p>>x;
        switch(p)
        {
            case 1: s.insert(x);
            break;
            case 2: s.erase(x);
            break;
            case 3: set<int>::iterator it=s.find(x);
                    if(it==s.end())
                        cout<<"No"<<endl;
                    else
                        cout<<"Yes"<<endl;
        }
    }
   
    return 0;
}




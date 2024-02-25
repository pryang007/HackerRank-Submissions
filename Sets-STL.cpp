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
    cin >>n;
    while (n){
        int i,val;
        cin>>i>>val;
        if(i==1){
            s.insert(val);
        }
        else if(i==2){
            s.erase(val);
        }
        else if(i==3){
            if(s.find(val) !=s.end()){
                cout <<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
        n -=1;
    }
    return 0;
} 
 



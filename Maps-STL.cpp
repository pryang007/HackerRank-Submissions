#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;i++){
        int ch,val;
        string name;
        cin>>ch>>name; 
        if(ch==1){
            cin>>val;
            m[name]+=val;
        }
        else if(ch==2){
            m.erase(name);
        }
        else if(ch==3){
            cout<<m[name]<<endl;
        }
        else{
            cout<<"0";
        }
    }
    return 0;
    return 0;
}




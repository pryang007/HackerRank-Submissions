#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char c1,c2;
    c1=a[0];
    c2=b[0];
    a[0]=c2;
    b[0]=c1;
    cout<<a<<" "<<b;
    return 0;
}

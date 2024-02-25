#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ans="";
    if(s[0]=='1'&&s[1]=='2'&&s[8]=='P'&&s[9]=='M')
    for(int i=0;i<8;i++)
    {
        ans+=s[i];
    }
    else if(s[0]=='1'&&s[1]=='2'&&s[8]=='A'&&s[9]=='M')
    {
        s[0]='0';s[1]='0';
        for(int i=0;i<8;i++)
        {
            ans+=s[i];
        }
    }
    else if(s[8]=='P'&&s[9]=='M')
    {
       int result = (s[0]-'0')+(s[1]-'0');
       
       result=result+12;
       ans+=to_string(result);
       for(int i=2;i<8;i++){
           ans+=s[i];
       }
    }
    else{
        string n(s.begin(),s.end()-2);
        return n;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

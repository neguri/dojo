#include <iostream>
#include <string>
#include <vector>


using namespace std;

string s;
int a[26];

int main()
{
    cin>>s;

    for(int i = 0; i<s.size(); i++){
        a[s[i] - 'a'] +=1;
    }

    for(int i = 0; i<26; i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    return 0;
}

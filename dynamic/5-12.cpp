// 다이내믹을 사용하는 최장 공통 부분 수열 길이 구하기
// 이 예제에서는 연속하지 않은 부분 문자열도 가능함. 
// 만약 연속한 부분 문자열이라고 하면 조건이 달라짐
// 가장 긴 문자열을 출력 하기

#include <iostream>
#include <vector>

#define DBG true

using namespace std;

int main()
{
#if 1
    string s1 = "ABCD";
    string s2 = "AEBD";
#else
    string s1 = "AAACCGTGAGTTATTCGTTCTAGAA";
    string s2 = "CACCCCTAAGGTACCTTTGGTTC";
#endif

    int ans = 0;

    vector<vector<int>>A(30,vector<int>(30,0));

    s1.insert(s1.begin(),'0');
    s2.insert(s2.begin(),'0');

    for(int i = 1; i<s1.size(); i++){
        for(int j = 1; j<s2.size(); j++){
            if(s1[i] == s2[j]) {
                A[i][j] = A[i-1][j-1] + 1;
                ans = max(ans, A[i][j]);
            }else{
                A[i][j] = max(A[i][j-1], A[i-1][j]);
            }
        }
    }
#if DBG
    for(int i = 0; i<s1.size(); i++){
        for(int j = 0; j<s2.size(); j++){
            cout<<A[i][j]<<' ';
        }cout<<endl;
    }
#endif
    cout<<ans<<endl;

    int i = s1.size();
    int j = s2.size();

    string p;
 
    while(true) {
        if (i == 0 || j == 0) break;
        int k = A[i][j];
        if(s1[i] == s2[j] ) {
            p.push_back(s1[i]);
            i--; j--;
        }else if(A[i-1][j] == k){
            i--;
        }else{
            j--;
        }
    }
    
    cout<<p<<endl;

    return 0;
}
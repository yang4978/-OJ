// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
int main()
{  
    int n, m;
    cin>>n>>m;
    vector<int> w;
    vector<int> c;
    for(int i = 0; i < n; ++i) {
        int wi, ci;
        cin>>wi>>ci;
        w.push_back(wi);
        c.push_back(ci);
    }
    int l = c.size();
    vector<int> dp(m + 1, 0);
    
    for(int i = 0; i < l; ++i) {
        for(int j = m; j > 0; --j) {
            if(j >= w[i]) {
                dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
            }
        }
    }
    cout<<dp.back()<<endl;
    return 0;
}

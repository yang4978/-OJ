// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n,total;
    while(cin>>n>>total){
        int temp;
        vector<int> arr;
        
        while(cin>>temp){
            arr.push_back(temp);
        }
        vector<vector<bool>> dp(n+1,vector<bool>(total+1,false));
        
        for(int i=0;i<n+1;++i){
            dp[i][0] = true;
        }
        
        for(int i=0;i<n;++i){
            for(int j=0;j<total;++j){
                dp[i+1][j+1] = dp[i][j+1];
                if(j+1-arr[i]>=0){
                    dp[i+1][j+1] = dp[i+1][j+1]|dp[i][j+1-arr[i]];
                }
            }
        }

        cout<<(dp[n][total]?"YES":"NO")<<endl;

            
    }
    return 0;
}

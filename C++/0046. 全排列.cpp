#include<vector>
vector<vector<int>> res;
int n;

void dfs(int index, vector<int>& arr, vector<int>& used, int l){
    if(l==n){
        res.push_back(arr);
        return;
    }
    for(int i=1;i<=n;++i){
        if(used[i]==0){
            used[i] = 1;
            arr.push_back(i);
            dfs(i,arr,used,l+1);
            arr.pop_back();
            used[i] = 0;
        }
    }
    return;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    while(cin>>n){
        vector<int> used(n+1,0);
        vector<int> arr = {};
        res = vector<vector<int>>{};
        dfs(0,arr,used,0);
        for(auto arr:res){
            if(n>1){
                for(int i=0;i<n-1;++i){
                    cout<<arr[i]<<" ";
                } 
            }
            cout<<arr[n-1]<<endl;
        }
    }
    return 0;
}

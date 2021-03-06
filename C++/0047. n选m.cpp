// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
vector<vector<int>> res;
int n,m;

void dfs(int index, vector<int>& arr, vector<int>& used, int l){
    if(l==m){
        res.push_back(arr);
        return;
    }
    if(l+n-index<m){
        return;
    }
    for(int i=index+1;i<=n;++i){
        if(used[i]==0){
            used[i] = 1;
            arr.push_back(i);
            dfs(i,arr,used,l+1);
            arr.pop_back();
            used[i] = 0;
        }
    }
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    while(cin>>n>>m){
        vector<int> used(n+1,0);
        vector<int> arr = {};
        res = vector<vector<int>>{};
        dfs(0,arr,used,0);
        for(auto arr:res){
            if(m>1){
                for(int i=0;i<m-1;++i){
                    cout<<arr[i]<<" ";
                } 
            }
            cout<<arr[m-1]<<endl;
        }
    }
    return 0;
}

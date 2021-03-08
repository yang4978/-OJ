// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    while(cin>>n){
        vector<vector<int>> arr;
        for(int i=0;i<n;++i){
            vector<int> temp_arr;
            int temp;
            for(int j=n-i;j>0;--j){
                cin>>temp;
                temp_arr.push_back(temp);
            }
            arr.push_back(temp_arr);
        }
        vector<int> res(n+1,0);
        
        for(int i=1;i<=n;++i){
            int temp = (1<<31)-1;
            for(int j=0;j<i;++j){
                temp = min(temp,res[j]+arr[j][i-j-1]);
            }
            res[i] = temp;
        }
        cout<<res.back()<<endl;
    }
    return 0;
}

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
        int temp = n;
        string res = "";
        vector<int> arr(n+1,0);
        for(int i=2;i<=n;++i){
            if(arr[i]==0){
                for(int k=2;k<=n/i;++k){
                    arr[i*k] = 1;
                }
                while(temp%i==0){
                    temp /= i;
                    res = res + to_string(i) + '*';
                }
            }
        }
        cout<<res.substr(0,res.size()-1)<<'='<<n<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int n;
    while(cin>>n){
        vector<int> arr;
        int temp;
        int total = 0;
        int res = 0;
        for(int i=0;i<n;++i){
            cin>>temp;
            arr.push_back(temp);
            total += temp;
        }
        for(auto x:arr){
            res += ((total-x)%2)?0:1;
        }
        cout<<res<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int test;
    string m,n;
    int res;
    cin>>test;
    for(int _=0;_<test;++_){
        cin>>m>>n;
        res = 0;
        vector<int> arr(10,0);
        for(auto c:n){
            arr[c-'0']++;
        }
        for(auto c:m){
            for(int i=1;i<10;++i){
                res += (c-'0')%i*arr[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

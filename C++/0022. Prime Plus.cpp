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
        vector<bool> arr(n+1,true);
        vector<int> prime={2};
        for(int i=3;i<=n;i=i+2){
            if(arr[i]){
                prime.push_back(i);
            }
            for(auto p:prime){
                if(p*i>n){
                    break;
                }
                arr[p*i] = false;
                if(i%p==0){
                    break;
                }
            }
        }
        cout<<prime.size()<<endl;
    }
    
    return 0;
}

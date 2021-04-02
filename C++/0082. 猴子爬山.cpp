// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    while(cin>>n) {
        vector<int> arr(n + 1, 1);
        for(int i=3;i<=n;++i) {
            arr[i] = arr[i - 1] + arr[i - 3];
        }
        cout<<arr[n]<<endl;
    }
    return 0;
}

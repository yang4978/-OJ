// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
#include<algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int n, m;
    while(cin>>n>>m) {
        int temp = 0;
        vector<int> arr;
        for(int i=0;i<n;++i) {
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.rbegin(), arr.rend());
        for(int i=0;i<m;++i) {
            cout<<arr[i]<<(i != m - 1?" ":"\n");
        }
    }
    return 0;
}

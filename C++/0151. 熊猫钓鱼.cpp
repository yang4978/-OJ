// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
#include <algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    cin>>n;
    vector<vector<int>> arr;
    int m;
    
    for(int i = 0; i < 2; ++i) {
        vector<int> temp;
        for(int j = 0; j < n; ++j) {
            cin>>m;
            temp.push_back(m);
        }
        arr.push_back(temp);
    }
    
    int r = 0;
    vector<int> desk;
    
    while(!arr[0].empty() && !arr[1].empty()) {
        for(int i = 0; i < 2; ++i) {
            m = arr[i][0];
            arr[i].erase(arr[i].begin());
            auto it = find(desk.begin(), desk.end(), m);
            if(it != desk.end()) {                
                arr[i].push_back(m);
                for(auto j = desk.end() - 1; j >= it; --j) {
                    arr[i].push_back(*j);
                }
                desk.erase(it, desk.end());
            } else {
                desk.push_back(m);
            }
        }
        r++;
    }
    
    for(int i = 0; i < 2; ++i) {
        if(arr[i].empty()){
            cout<<r<<endl;
            cout<<(i == 1 ? "mm" : "xx") << endl;
            for(int j = 0; j < arr[1 - i].size() - 1; ++j) {
                cout<<arr[1 - i][j] << " ";
            }
            cout<<arr[1 - i].back()<<endl;
            return 0;
            }
    }
    return 0;
}

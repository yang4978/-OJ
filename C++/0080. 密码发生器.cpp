// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    cin>>n;
    string s;
    while(n > 0) {
        n--;
        cin>>s;
        vector<int> res (6, 0);
        for(int i=0;i<s.size();++i) {
            res[i % 6] += int(s[i]);
        }
        for(auto x:res) {
            int temp = x;
            int tt = 0;
            while(temp >= 10) {
                while(temp != 0) {
                    tt += temp % 10;
                    temp /= 10;
                }
                temp = tt;
                tt = 0;       
            }
            cout<<temp;
        }
        cout<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
#include<set>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int n;
    while(cin>>n){
        if(n==0) break;
        vector<string> arr;
        string s;
        int flag = 0;
        int l = (1<<31)-1;
        for(int i=0;i<n;++i){
            cin>>s;
            l = s.size()<l?s.size():l;
            arr.push_back(s);
        }
        set<string> ss;
        for(auto s:arr){
            string temp = s.substr(0,l);
            if(ss.count(temp)){
                flag = 1;
                break;
            }
            ss.insert(s.substr(0,l));
        }
        cout<<(flag?"NO":"YES")<<endl;
    }
    return 0;
}

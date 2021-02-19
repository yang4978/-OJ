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
        vector<int> num = {1};
        for(int i=2;i<=n;++i){
            int temp = i;
            for(auto x:num){
                if(temp%x==0){
                    temp /= x;
                }
            }
            if(temp!=1){
                num.push_back(temp);
            }
        }
        string s1 = "1";
        int l1,l2;
        for(auto x:num){
            string s2 = to_string(x);
            l1 = s1.size();
            l2 = s2.size();
            string res(l1+l2,0);
            for(int i=l1-1;i>=0;--i){
                for(int j=l2-1;j>=0;--j){
                    res[i+j+1] += (s1[i]-'0')*(s2[j]-'0');
                    res[i+j] += res[i+j+1]/10;
                    res[i+j+1] %= 10;
                }
            }
            
            for(auto& c:res){
                c += '0';
            }
            
            int id = 0;
            while(res[id] == '0'){
                id++;
            }
            s1 = res.substr(id);
        }
        cout<<s1<<endl;
    }
    
    return 0;
}

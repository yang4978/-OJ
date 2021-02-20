// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<map>
#include<vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s;
    while(cin>>s){
        map<char,int> letter;
        vector<int> fac(s.size()+1,1);
        
        for(int i=2;i<fac.size();++i){
            fac[i] = i*fac[i-1];
        }
        
        for(auto c:s){
            if(letter.count(c)){
                letter[c] ++;
            }
            else{
                letter[c] = 1;
            }
        }
        int res = fac.back();
        for(map<char,int>::iterator iter=letter.begin();iter!=letter.end();++iter){
            res /= fac[iter->second];
        }
        cout<<res<<endl;
    }
    return 0;
}

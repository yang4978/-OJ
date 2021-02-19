int main(){
    string s1;
    int n;
    while(cin>>s1>>n){
        size_t id = s1.find('.');
        int deci = (s1.size()-1-id)*n;
        s1 = s1.substr(0,id) + s1.substr(id+1);
        
        int l1 = s1.size();
        string s2 = s1;
        while(n>1){
            int l2 = s2.size();
            string res(l1+l2,0);
            for(int i=l1-1;i>=0;--i){
                for(int j=l2-1;j>=0;--j){
                    res[i+j+1] += (s1[i]-'0')*(s2[j]-'0');
                    res[i+j] += res[i+j+1]/10;
                    res[i+j+1] %= 10;
                }
            }
            
            for(auto &c:res){
                c += '0';
            }
            
            int i = 0;
            while(res[i]=='0'){
                i += 1;
            }
            s2 = res.substr(i);
            n--;
        }
        if(deci > s2.size()){
            s2 = string(deci-s2.size(),'0')+s2;
        }
        s2 = s2.substr(0,s2.size()-deci)+"."+s2.substr(s2.size()-deci);
        
        int i = s2.size()-1;
        while(i>s2.size()-deci and s2[i]=='0'){
            i--;
        }
        s2 = s2.substr(0,i+1);
        
        cout<<s2<<endl;
    }
    
}

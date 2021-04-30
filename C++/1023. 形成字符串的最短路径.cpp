// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
bool isSubstr(string sub, string s) {
    int m = sub.size();
    int n = s.size();
    int i = 0;
    int j = 0;
    
    while(i < m && j < n) {
        if(sub[i] == s[j]) {
            i++;
        }
        j++;
    }
    return i == m;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string source, target;
    cin>>source;
    cin>>target;
    int i = 0;
    int j = 1;
    int m = target.size();
    int res = 0;
    while(i < m) {
        if(isSubstr(target.substr(i, j - i), source)) {
            if(j < m) {
                j++;
            } else {
                res++;
                break;
            }
        } else {
            if(j - i == 1) {
                res = -1;
                break;
            } else {
                i = j - 1;
                res++;
            }
        }
    }
    cout<<res<<endl;
    
    return 0;
}

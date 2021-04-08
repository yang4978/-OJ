// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    cin>>n;
    string s;
    while(cin>>s) {
        string res="0";
        for(auto c:s) {
            if(c == res.back()) {
                res.pop_back();
            } else {
                res += c;
            }
        }        
        cout<<(res.size() == 1 ? "Yes" : "No")<<endl;
    }
    return 0;
}

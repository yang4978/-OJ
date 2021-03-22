// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    cin >> n;
    for(int i=0;i<n;++i) {
        string ss;
        cin >> ss;
        ss += '-';
        int result = 0;
        int temp = 0;
        char last = '0';
        for(auto c:ss) {
            if(c == last) {
                temp += 1;
            } else {
                result = max(result, temp);
                temp = 1;
                last = c;
            }
        }
        cout<<result<<endl;
    }
    
    return 0;
}

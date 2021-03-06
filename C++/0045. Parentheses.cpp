// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string s;
    while(cin>>s){
        int l = 0;
        int r = 0;
        for(auto c:s){
            if(c=='('){
                l++;
            }
            else if(l>0){
                l--;
            }
            else{
                r++;
            }
        }
        cout<<l+r<<endl;
    }
    return 0;
}

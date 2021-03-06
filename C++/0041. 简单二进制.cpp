// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    while(cin>>n){
        int res = 0;
        while(n>0){
            res += n&1;
            n >>= 1;
        }
        cout<<res<<endl;
    }
    return 0;
}

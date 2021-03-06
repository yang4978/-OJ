// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
  
    int n;
    while(cin>>n){
        for(int i=1;i<=n;++i){
            string s(n-i,' ');
            for(int j=1;j<=i;++j){
                s = s + char('0'+j);
            }
            for(int j=i-1;j>0;--j){
                s = s + char('0'+j);
            }
            cout<<s<<endl;
        }      
    }
    
    return 0;
}

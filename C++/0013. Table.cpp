// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n,m;
    while(cin>>n>>m){
        string s1 = "";
        string s2 = "";
        for(int j=0;j<=4*m;++j){
            if(j%4){
                s1 += '-';
                s2 += ' ';
            }
            else{
                s1 += '+';
                s2 += '|';
            }
        }
        for(int i=0;i<=2*n;++i){
            cout<<(i%2?s2:s1)<<endl;
        }
    }
    return 0;
}

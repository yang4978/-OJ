// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n,k;
    while(cin>>n>>k){
        if(n<7){
            for(int i=1;i<n;++i){
                cout<<i<<" ";
            }
            cout<<n;
        }
        else{
            cout<<1<<" ";
            if(k<=4){
                for(int i=2;i<=k+2;++i){
                    cout<<i<<" ";
                }
            }
            else{
                cout<<"... ";
                for(int i=k-2;i<=min(k+2,n-1);++i){
                    cout<<i<<" ";
                }
            }
            if(k<n-3){
                cout<<"... ";
            }
            cout<<n<<endl;
        }
    }
    return 0;
}

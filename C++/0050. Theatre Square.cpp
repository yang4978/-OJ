// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    long long m,n,a;
    while(cin>>m>>n>>a){
        cout<<(m/a+min(1LL,m%a))*(n/a+min(1LL,n%a))<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl;     

    int a,k,n;
    while(cin>>a>>k>>n){
        cout<<((n+1)*a+n*(n+1)/2*k)<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int m,n;
    while(cin>>m>>n){
        if(m%2==0 || n%2==0){
            cout<<m*n/2<<endl;
        }
        else{
            cout<<m*(n/2)+m/2<<endl;
        }
    }
    return 0;
}

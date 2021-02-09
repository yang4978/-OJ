// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int m;
    while(cin>>m){
        while(m>1){
            if(m%2){
                cout<<"YES"<<endl;
                return 0;
            }
            m /= 2;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
  
    int a, b;
    while(cin>>a>>b) {
        while(a >= b) {
            a -= b;
        }
        cout<<a<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string s1;
    string s2;
    while(getline(cin,s1)){
        getline(cin,s2);
        string _s1;
        string _s2;
        for(auto c:s1){
            if(c!=' '){
                _s1 += tolower(c);
            }
        }
        for(auto c:s2){
            if(c!=' '){
                _s2 += tolower(c);
            }
        }
        cout<<(_s1==_s2?"Yes":"No")<<endl;
    }
    
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s1,s2;
    while(cin>>s1>>s2){
        for(int i=s1.size()-1;i>=0;--i){
            if(s1[i]!='0' && s1[i]!='.'){
                s1 = s1.substr(0,i+1);
                break;
            }
        }
        for(int i=s2.size()-1;i>=0;--i){
            if(s2[i]!='0' && s2[i]!='.'){
                s2 = s2.substr(0,i+1);
                break;
            }
        }
        cout<<(s1==s2?"YES":"NO")<<endl;
    }
    return 0;
}

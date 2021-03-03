// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s;
    while(cin>>s){
        int res = 0;
        int flag = 1;
        for(auto c:s){
            if(c=='('){
                ++res;
            }
            else if(c==')'){
                if(res==0){
                    flag = 0;
                    break;
                }
                --res;
            }
        }
        cout<<((res!=0||flag==0)?"NO":"YES")<<endl;
    }
    return 0;
}

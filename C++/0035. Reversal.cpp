// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s;
    string res="";
    while(cin>>s){
        reverse(s.begin(),s.end());
        if(res!=""){
            res += " "+s;
        }
        else{
            res = s;
        }
    }
    cout<<res<<endl;
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <iomanip>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s;
    while(getline(cin,s)){
        int total_length = 0;
        int words = 1;
        for(int i=0;i<s.length();++i){
            if (s[i] == ' '){
                words += 1;
            }
            else{
                total_length += 1;
            }
        }
        cout<<fixed<<setprecision(2)<<1.0*total_length/words<<endl;
    }
    return 0;
}

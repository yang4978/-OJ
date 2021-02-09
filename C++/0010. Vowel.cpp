// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
#include <algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string diary;
    while (getline(cin,diary)){
        vector<char> vowel{'a','e','i','o','u','A','E','I','O','U'};
        for(auto s:diary){
            if(s!=' '){
                if(std::find(vowel.begin(),vowel.end(),s)!=vowel.end()){
                    s = toupper(s);
                }
                else{
                    s = tolower(s);
                }
            }
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}

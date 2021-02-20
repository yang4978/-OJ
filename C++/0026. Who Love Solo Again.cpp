// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <regex>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string sentence;
    while(getline(cin,sentence)){
        regex r1("[^a-zA-Z]");
        sentence = regex_replace(sentence,r1," ");
        sentence = regex_replace(sentence,regex(" +")," ");
        int flag = 1;
        
        sentence = sentence.front()==' '?sentence.substr(1):sentence;
        
        for(int i=0;i<sentence.size();++i){
            if(flag){
                sentence[i] = toupper(sentence[i]);
                flag = 0;
            }
            else if(sentence[i]==' '){
                flag = 1;
            }
        }
        
        sentence = sentence.back()==' '?sentence.substr(0,sentence.size()-1):sentence;
        cout<<sentence+"."<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string word;
    cin>>word;
    transform(word.begin(), word.end(), word.begin(), ::tolower); 
    int n;
    cin>>n;
    for(int i=0;i<n;++i) {
        string sentence;
        string temp;
        cin>>sentence;
        temp = sentence;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if(temp.find(word) != string::npos) {
            cout<<sentence<<endl;
        }
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
int main()
{  
    
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
  int n;
  while (cin>>n){
      string s1 = "1";
      while(n>1){
          string s2 = to_string(n);
          string res(s1.size()+s2.size(),0);
          for(int i=s1.size()-1;i>=0;--i){
              for(int j=s2.size()-1;j>=0;--j){
               res[i+j+1] += (s1[i]-'0')*(s2[j]-'0');
               res[i+j] += res[i+j+1]/10;
               res[i+j+1] %= 10;               
              }
          }
          n--;
          for(auto &c:res){
          c += '0';
          }
          
          int i = 0;
          
          while(i<res.size() & res[i]=='0'){
              i++;
          }

          s1 = res.substr(i);
      }     
      cout<<s1<<endl;
  }
  return 0;
}

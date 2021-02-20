// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <algorithm>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string brick;
    while(cin>>brick){
        int l = brick.size();
        int c = count(brick.begin(),brick.end(),'R');
        int res = c;
        for(auto s:brick){
            c += s=='G'?1:-1;
            res = min(res,c);
        }
        cout<<res<<endl;
    }
    return 0;
}

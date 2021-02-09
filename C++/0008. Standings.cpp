// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<math.h>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl;
    int n;
    int num = 0;
    while(cin>>n){
        int sq = floor(sqrt(n));
        string res;
        if(sq*sq==n){
            res = to_string(sq);
            num = 1;
        }
        for(int i=sq;i>0;--i){
            if(n%i==0 and i*i!=n){
                if (res == ""){
                    res = to_string(i)+" "+to_string(int(n/i));
                }
                else{
                    res = to_string(i)+" "+res+" "+to_string(int(n/i));
                }
                num += 2;
            }
        }
        cout<<num<<" "<<res<<endl;
    }
    return 0;
}

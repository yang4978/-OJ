// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

#include <math.h>

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    double m,n;
    while(cin>>m>>n){
        if (m == 0 && n == 0){
            break;
        }
        string result = "0.";
        cout<<result;
        int digit;
        for(int i=0;i<10;++i){
            digit = floor(m*n);
            m = m*n-digit;
            cout<<digit;
        }
        cout<<endl;
    }
    return 0;
}

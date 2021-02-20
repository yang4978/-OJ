// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
#include <iostream>
#include <sstream>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int n;
    while(cin>>n){
        int number;
        int xor_res = 0;
        int total = 0;
        int min_candy = (1<<31)-1;
        for(int i=0;i<n;++i){
            cin>>number;
            total += number;
            min_candy = min(min_candy,number);
            xor_res ^= number;
        }
        cout<<(xor_res!=0?"NO":to_string(total-min_candy))<<endl;
    }
    return 0;
}

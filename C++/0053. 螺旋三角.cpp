// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    while(cin>>n){
        vector<vector<int>> arr = vector(n,vector<int>(n,0));
        int num = 1;
        for(int i=0;i<n;++i){
            switch(i%3){
                case 0:
                    for(int j=i/3;j<n-1-i/3*2;++j){
                        arr[i/3][j] = num++;
                    }
                    break;
                case 1:
                    for(int j=i/3;j<n-i/3*2;++j){
                        arr[j][n-j-1-i/3] = num++;
                    }
                    break;
                case 2:
                    for(int j=n-i/3*2-2;j>i/3;--j){
                        arr[j][i/3] = num++;
                    }
                    break;
            }
        }
        if(n%3==1){
            arr[n/3][n/3] = (1+n)*n/2;
        }
        for(auto l:arr){
            for(int i=0;i<n;++i){
                if(i==0) cout<<l[i];
                else if(l[i]!=0) cout<<" "<<l[i];
            }
            cout<<endl;
        }
    }
                    
    return 0;
}

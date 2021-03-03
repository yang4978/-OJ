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
        vector<vector<int>> arr(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                if(i==1||j==1){
                    arr[i][j] = 1;
                }
                else if(i<j){
                    arr[i][j] = arr[i][i];
                }
                else if(i==j){
                    arr[i][j] = 1+arr[i][j-1];
                }
                else{
                    arr[i][j] = arr[i-j][j] + arr[i][j-1];
                }
            }
        }
        cout<<arr[n][n]<<endl;
    }
    return 0;
}

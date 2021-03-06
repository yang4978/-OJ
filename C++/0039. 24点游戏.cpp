// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
vector<int> arr(4,0);
bool dfs(float res,vector<int>&used,int sum){
    if(sum==4 && res>=0.995*24 && res<=1.005*24){
        return true;
    }
    for(int i=0;i<4;++i){
        if(used[i]==0){
            used[i] = 1;
            sum++;
            if(dfs(res+arr[i],used,sum)) return true;
            if(dfs(abs(res-arr[i]),used,sum)) return true;
            if(dfs(res*arr[i],used,sum)) return true;
            if(dfs(res/arr[i],used,sum)) return true;
            if(res!=0 && dfs(arr[i]/res,used,sum)) return true;
            used[i] = 0;
            sum--;
        }
    }
    return false;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
    char c;
    
    int times = 0;
    while(cin>>c){
        times++;
        int temp;
        switch(c){                   
            case 'A': temp = 1; break;
            case 'T': temp = 10; break;
            case 'J': temp = 11; break;
            case 'Q': temp = 12; break;
            case 'K': temp = 13; break;
            default : temp = c-'0';
        }
        arr[times-1] = temp;
        if(times==4){
            vector<int> used(4,0);
            int flag = 0;
            int sum = 0;
            for(int i=0;i<4;++i){
                used[i] = 1;
                sum++;
                if(dfs(arr[i],used,sum)){
                    flag = 1;
                    break;
                }
                used[i] = 0;
                sum--;
            }
            cout<<(flag==1?"Yes":"No")<<endl;
            arr = vector<int>{};
        }
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include<vector>
#include<map>

int main()
{  
    int b;
    cin>>b;
    vector<int> arr;
    
    int temp;
    while(cin>>temp) {
        arr.push_back(temp);
    }
    int l = arr.size();
    
    vector<int> cost(l, (1<<31) - 1);
    cost[0] = 0;
    
    map<int, string> res;
    res[l - 1] = "-1";
    res[0] = "1";
    
    for(int i=0;i<l-1;++i) {
        if(arr[i] == -1) {
            continue;
        }
        for(int j=1;j<min(b+1,l-i);++j) {
            if(arr[i + j] == -1) {
                continue;
            }
            int c = cost[i] + arr[i + j];
            if(c < cost[i + j]) {
                cost[i + j] = c;
                res[i + j] = res[i] + " " + to_string(i + j + 1);
            }
            else if(c == cost[i + j]) {
                res[i + j] = min(res[i + j], res[i] + " " + to_string(i + j + 1));
            }          
        }      
    }
    cout<<res[l - 1]<<endl;
    
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

#include<tuple>
#include<vector>
#include<algorithm>
bool compare_tuple(const tuple<string,int,int,int>&x, const tuple<string,int,int,int>&y){
    if (get<1>(x) == get<1>(y)){
        if (get<2>(x) == get<2>(y)){
            if (get<3>(x) == get<3>(y)){
                return get<0>(x) < get<0>(y);
            }
            else{
                return get<3>(x) > get<3>(y);
            }
        }
        else{
            return get<2>(x) > get<2>(y);
        }
    }   
    else{
        return get<1>(x) > get<1>(y);
    }
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    while(cin>>n){
        string country;
        int gold;
        int silver;
        int bronze;
        vector<tuple<string,int,int,int>> arr(n);
        for(int i=0;i<n;++i){
            cin>>country;
            cin>>gold;
            cin>>silver;
            cin>>bronze;
            arr[i] = make_tuple(country,gold,silver,bronze);
        }
        sort(arr.begin(),arr.end(),compare_tuple);
        
        for(auto x:arr){
            cout<<get<0>(x)<<endl;
        }
        
    }
    return 0;
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>

vector<vector<int>> spy(3); // 初始化记录间谍信息的二维数组，每行对应不同数字的间谍

int binary_search(int idx, int num){
    if(idx >= spy[num-1].back()){  // 如果idx比数组中最大的i都要大，那不必查找，直接返回idx-i_max
        return idx - spy[num-1].back();
    }
    if(idx <= spy[num-1].front()){ // 如果idx比数组中最小的i都要小，那不必查找，直接返回i_min-idx
        return spy[num-1].front() - idx;
    }
    int l = 0;
    int r = spy[num-1].size();
    int m;
                                   // 二分查找
    while(l<r){
        m = (l+r)>>1;
        if(spy[num-1][m] < idx){
            l = m + 1;
        }
        else{
            r = m;
        }
    }
    return min(spy[num-1][l]-idx, idx-spy[num-1][l-1]);
}

int main()
{  
    
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        spy[temp-1].push_back(i);   // 对spy数组进行初始化，其中i是数组中当前数字temp的位置
    }
    
    int m;
    cin >> m;
    for(int i=0;i<m;++i){
        int idx,num;
        cin>>idx>>num;             // 获取查询的索引和间谍数字
        if(spy[num-1].size() == 0){// 如果间谍数字对应的一行没有索引，即原数组中没出现过该数字，返回-1
            cout<<-1<<endl;
        }
        else{
            cout<<binary_search(idx,num)<<endl;
        }
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.


#include<vector>
#include<tuple>

int m,n;
string word;

int dfs(vector<string> arr, int x,int y,vector<vector<int>> used,int id){
    if(id == word.length()){
        return 1;
    }
    
    if(arr[x][y] == word[id] && used[x][y] == 0){
        used[x][y] = 1;
        for(int dx=-1;dx<2;++dx){
            for(int dy=-1;dy<2;++dy){
                if(dx+dy==-1 || dx+dy==1){
                    if (x+dx>=0 && x+dx<m && y+dy>=0 && y+dy<n){
                        if(dfs(arr,x+dx,y+dy,used,id+1) == 1){
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}


int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    while(cin>>m>>n){     
        cin>>word;
        vector<string> arr(m," ");
        for(int i=0;i<m;++i){
            cin >> arr[i];
        }
        
        vector<vector<int>> used(m,vector<int>(n,0));
        int id = 0;
        int flag = 0;
         
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if (dfs(arr,i,j,used,id) == 1){
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


/*
#include<vector>
#include<tuple>
//int dfs(vector<string> arr,int x,int y,string word,vector<tuple<int,int>> direction ,vector<vector<int>> used,int id, int m, int n){
int dfs(vector<string> arr,int x,int y,string word,vector<vector<int>> direction ,vector<vector<int>> used,int id, int m, int n){
    if(id == word.length()){
        return 1;
    }
    
    if(arr[x][y] == word[id] && used[x][y] == 0){
        used[x][y] = 1;
        for(auto pair:direction){
            //int dx = std::get<0>(direction[i]);
            //int dy = std::get<1>(direction[i]);
            int dx = pair[0];
            int dy = pair[1];
            if (x+dx>=0 && x+dx<m && y+dy>=0 && y+dy<n){
                if(dfs(arr,x+dx,y+dy,word,direction,used,id+1,m,n) == 1){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int m,n;
    while(cin>>m>>n){
        string word;
        cin>>word;
        vector<string> arr(m," ");
        for(int i=0;i<m;++i){
            cin >> arr[i];
        }
        
        vector<vector<int>> used(m,vector<int>(n,0));
        int id = 0;
        int flag = 0;
        //vector<tuple<int,int>> direction{make_tuple(0,1),make_tuple(1,0),make_tuple(-1,0),make_tuple(0,-1)};
        vector<vector<int>> direction{{0,1},{0,-1},{1,0},{-1,0}};
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if (dfs(arr,i,j,word,direction,used,id,m,n) == 1){
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
*/

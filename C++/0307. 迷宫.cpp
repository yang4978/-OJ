// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <vector>
#include <queue>
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int n, m;
    cin>>n>>m;
    vector<string> maze;
    string s;
    queue<vector<int>> step;
    int sx, sy, ex, ey;
    for(int i=0;i<n;++i) {
        cin>>s;
        maze.push_back(s);
        for(int j=0;j<m;++j) {
            if(s[j] == 'S') {
                sx = i;
                sy = j;
                step.push({i, j});
            }
        }
    }
    vector<vector<int>> count(n, vector<int>(m, n * m));
    vector<vector<int>> direction = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    count[sx][sy] = 0;
    
    int tx, ty, dx, dy;
    while(!step.empty()) {
        tx = step.front()[0];
        ty = step.front()[1];
        step.pop();
        for(auto arr:direction) {
            dx = tx + arr[0];
            dy = ty + arr[1];            
            if(dx >= 0 && dx < n && dy >= 0 && dy < n && maze[dx][dy] != '1' && count[dx][dy] > count[tx][ty] + 1) {
                count[dx][dy] = count[tx][ty] + 1;
                step.push({dx, dy});
                if(maze[dx][dy] == 'E') {
                cout<<count[tx][ty] + 1<<endl;
                return 0;
                }
            }
        }
    }
    int result = n * m;
    for(int i=0;i<n;++i) {
        for(int j=0;j<m;++j) {
            if(maze[i][j] == 'E') {
                result = min(result, count[i][j]);
            }
        }
    }
    
    if(result == n * m) {
        cout<<"No way"<<endl;
    } else {
        cout<<result<<endl;
    }
    
    return 0;
}

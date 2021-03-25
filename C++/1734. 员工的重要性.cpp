// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <map>
#include <vector>
#include <queue>
int main()
{

    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
    
    // please finish the function body here.
    
    // please define the C++ output here. For example:cout<<____<<endl;
    
    string ss;
    int n;
    
    while(getline(cin,ss)) {
        cin>>n;
        vector<int> importance;
        importance.push_back(0);
        map<int, vector<int>> relationship;
        int flag = 0;
        int id = 0;
        int w = 0;
        int temp = 0;
        vector<int> arr;
        
        ss = ss.substr(1, ss.size() - 2);
        
        for(auto c:ss) {
            if(c == ' ') {
                continue;
            }
            if(c == '[') {
                flag++;
            } else if(isdigit(c)) {
                temp = temp * 10 + (c - '0');
            } else if(c == ',') {
                if(temp == 0) {
                    continue;
                }
                if(flag == 1) {
                    if(id == 0) {
                        id = temp;
                        temp = 0;
                    } else {
                        w = temp;
                        temp = 0;
                        importance.push_back(w);
                    }
                } else {
                    arr.push_back(temp);
                    temp = 0;
                }
            } else {
                flag--;
                if(id != 0) {
                    relationship[id] = arr;
                    id = 0;
                    arr = {};
                }
            }
        }
        
        int result = 0;
        queue<int> emp;
        emp.push(n);
        
        while(!emp.empty()) {
            int x = emp.front();
            emp.pop();
            result += importance[x];
            for(auto i:relationship[x]) {
                emp.push(i);
            }
        }
        cout<<result<<endl;
    }

return 0;
}

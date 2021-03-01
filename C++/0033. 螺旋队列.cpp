#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y;
    while (cin >> x >> y) {
        y = -y;
        int base;
        int diff;
        int res=0;
        bool ver_flag, hor_flag;
        
        ver_flag = y>0;
        hor_flag = x>0;
        
        if(abs(x)<abs(y)){
            base = abs(x);
            diff = abs(y)-base;
            res += (ver_flag?7:3)*diff + 8*(base*2+diff-1)*diff/2;
        }
        else{
            base = abs(y);
            diff = abs(x)-base;
            res += (hor_flag?1:5)*diff + 8*(base*2+diff-1)*diff/2;
        }
        
        int delta = 0;
        
        if(hor_flag){
            delta = ver_flag?8:2;
        }
        else{
            delta = ver_flag?6:4;
        }
        
        res += 1 + delta*base + 8*base*(base-1)/2;
        
        if(hor_flag && base==y && diff>0){
            res -= 8*base;
        }
        cout<<res<<endl;
    }
    return 0;
}

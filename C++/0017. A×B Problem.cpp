// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

/*
#include<string.h>

string string_plus(string s1,string s2){
    string res = "";
    int flag = 0;

    int l1 = s1.length();
    int l2 = s2.length();
    if (l1<l2){
        swap(s1,s2);
        swap(l1,l2);
    }
    for(int i=l2-1;i>=0;--i){
        int s_sum = int(s1[i+l1-l2]-'0')+int(s2[i]-'0')+flag;
        flag = int(s_sum>=10);
        s_sum = s_sum%10;
        res = to_string(s_sum) + res;
    }

    for(int i=l1-l2-1;i>=0;--i){
        int s_sum = int(s1[i]-'0')+flag;
        flag = int(s_sum>=10); 
        s_sum = s_sum%10;
        res = to_string(s_sum) + res;
    }

    if(flag){
        res = '1' + res;
    }
    
    if(res!="0"){
        int i;
        for(i=0;i<res.length()-1;i++){
            if(res[i]!='0'){
                break;
            }
        }
        res = res.substr(i);
    }
    
    return res;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s1,s2;
    
    while(cin>>s1>>s2){
        
        string res = "0";
        string temp = "";
        int flag = 0;

        int l1 = s1.length();
        int l2 = s2.length();
        
        for(int i=l2-1;i>=0;--i){
            temp = "";
            for(int j=l1-1;j>=0;--j){
                int s_sum = int(s1[j]-'0')*int(s2[i]-'0')+flag;
                flag = int(s_sum/10);
                s_sum = s_sum%10;
                temp = to_string(s_sum) + temp;

            }
            if(flag){
                temp = to_string(flag) + temp;
                flag = 0;
            }
            temp.append(l2-1-i,'0');
            res = string_plus(res,temp);
            
        }

        cout<<res<<endl;
    }
    return 0;
}
*/

#include<string.h>

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    string s1,s2;
    
    while(cin>>s1>>s2){    
        int l1 = s1.length();
        int l2 = s2.length();
        string res(l1+l2,0);
        
        for(int i=l1-1;i>=0;--i){
            for(int j=l2-1;j>=0;--j){
                res[i+j+1] += (s1[i]-'0')*(s2[j]-'0');
                res[i+j] += res[i+j+1]/10;
                res[i+j+1] %= 10;
            }
        }
        
        for(auto& c:res){
            c += '0';
        }
        
        size_t idx = res.find_first_not_of('0');

        cout<<(idx==string::npos?"0":res.substr(idx))<<endl;
    }
    return 0;
}

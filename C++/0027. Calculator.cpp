// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string s;
    while(getline(cin,s)){
        int res = 0;
        int temp = 0;
        int power = 1;
        for(int i=s.size()-1;i>=0;--i){
            char c = s[i];
            if(c!=' '){
                if(c=='+'){
                    res += temp;
                    temp = 0;
                    power = 1;  
                }
                else if(c=='-'){
                    res -= temp;
                    temp = 0;
                    power = 1;
                }
                else{
                    temp += power*(c-'0');
                    power *= 10;
                }
            }
        }
        res += temp;
        cout<<res<<endl;
    }
    return 0;
}

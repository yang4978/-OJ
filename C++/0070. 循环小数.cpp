// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
int gcd(int a, int b){
    while(a%b!=0){
        a %= b;
        if(a<b) swap(a,b);
    }
    return b;
}
int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    string s;
    while(cin>>s){
        if(s=="0"){
            return 0;
        }
        int p = 1;
        int l =s.size();
        while(l-->0){
            p *= 10;
        }
        p--;
        int n = stoi(s);
        int x = gcd(n,p);
        cout<<n/x<<'/'<<p/x<<endl;
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
int gcd(int a,int b){
    if(b==0) return ((1<<30)-1);
    
    while(a%b!=0){
        a %= b;
        if(b>a) swap(a,b);
    }
    return b;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int a,b,n;
    
    while(cin>>a>>b>>n){
        while(true){
            int delta;
            delta = gcd(a,n);
            if(delta>n){
                cout<<1<<endl;
                break;
            }
            n -= delta;
            delta = gcd(b,n);
            if(delta>n){
                cout<<0<<endl;
                break;
            }
            n -= delta;
        }
    }

    return 0;
}

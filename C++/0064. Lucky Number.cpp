// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
int gcd(int a, int b){
    while(a%b!=0){
        a = a%b;
        if(a<b) swap(a,b);
    }
    return b;
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 

    int n,x,y,z;
    while(cin>>n>>x>>y>>z){
        cout<<n/x+n/y+n/z-n/lcm(x,y)-n/lcm(x,z)-n/lcm(y,z)+n/lcm(x,lcm(y,z))<<endl;       
    }
    return 0;
}

// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int n;

void dfs(int num,int index,string s){
    if(num==0){
        cout<<n<<'='<<s.substr(1)<<endl;
        return;
    }
    for(int i=index;i<=num;++i){
        dfs(num-i,i,s+'+'+to_string(i));
    }            
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    while(cin>>n){
        dfs(n,1,"");
    }
    return 0;
}

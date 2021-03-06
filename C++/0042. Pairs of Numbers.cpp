// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
int k;
int recursive(int a, int b){
    if(b>a){
        swap(a,b);
    }
    if(b==0){
        return k;
    }
    if(b==1){
        return a-1;
    }
    return recursive(a%b,b)+a/b;
}

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    while(cin>>k){
        int res = (1<<31)-1;
        
        for(int i=1;i<=k/2+1;++i){
            res = min(res,recursive(k,i));
        }
        
        cout<<res<<endl;   
    }
    return 0;
}

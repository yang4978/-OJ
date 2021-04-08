// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{  
  // please define the C++ input here. For example: int a,b; cin>>a>>b;;  
  // please finish the function body here.  
  // please define the C++ output here. For example:cout<<____<<endl; 
    int T;
    cin>>T;
    for(int t=0;t<T;++t) {
        int n;
        cin>>n;
        long temp;
        long sum = 0;
        long h = 0;
        long l = (1<<31) - 1;
        for(int i=0;i<n;++i) {
            cin>>temp;
            sum += temp;
            h = max(h, temp);
            l = min(l, temp);
        }
        cout<<int(0.5 + 1.0L * (sum - h - l)/ (n - 2))<<endl;
    }
    return 0;
}

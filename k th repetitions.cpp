{
    int n,k,a[60],j=0;
    cout<<"enter the n and k value"<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
         j++;
        }
    }
    cout<<j;
    return 0;
}

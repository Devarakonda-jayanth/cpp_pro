int hammingWeight() 
{
    int binar[1000],i=0,j=0,count=0,n;
    while(n>0)
    {
        binar[i]=n%2;
        n=n/2;
        i++;
        count++;
    }
    for(i=0;i<count;i++)
    {
        if(binar[i]==1)
        {
            j++;
        }
    }
    printf("%d",j);
}
int main()
{
	hammingWeight(11);
	return 0; 
}

#include <iostream>

void mergesort(int p,int r);
void merge(int p,int q,int r);
int a[1000000],L[(1000000/2)+5],R[(1000000/2)+5];
int cnt;

void mergesort(int p,int r)
{
    if(p<r)
    {
        int q;
        q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);

    }

    return;
}
void merge(int p,int q,int r)
{
    int ind1,ind2,k,i,j;
    for(i=p,ind1=1; i<=q; i++)
        L[ind1++]=a[i];
    L[ind1]=100000000;
    for(i=q+1,ind2=1; i<=r; i++)
        R[ind2++]=a[i];
    R[ind2]=100000000;
    i=j=1;
    for(k=p; k<=r; k++)
    {

        if(L[i]>R[j])
        {
            cnt+=ind1-i;
            a[k]=R[j];
            j++;
        }
        else
        {
            a[k]=L[i];
            i++;
        }

    }
    return ;
}

int main()
{
    int n,i;
    while(std::cin>>n && n)
    {
        for(i=1; i<=n; i++)
            std::cin>>a[i];
        cnt=0;
        mergesort(1,n);
        std::cout<<cnt<<std::endl;

    }
    return 0;

}
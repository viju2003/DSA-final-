class Heapsort{
    public void heapsort(int a[], int n){
        for(int i=((n/2)-1);i>=0;i--){
            heapify(a,n,i);
        }
    }
    public void heapify(int a[], int n, int i){
        int s,L,l,r;
        L=i;
        l=2*i+1;
        r=2*i+2;
        if(l<n && a[l]>a[L]){
            L=l;
        }
        if(r<n && a[r]>a[L]){
            L=r;
        }
        if(L!=i){
            s=a[i];
            a[i]=a[L];
            a[L]=s;
            heapify(a,n,L);
        }
    }
    public void dis(int a[],int n){
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
    public static void main(String args[]){
        int a[]={5,2,3,4,1};
        int n=a.length;
        Heapsort A=new Heapsort();
        A.heapsort(a,n);
        System.out.println("The Sorted array is: ");
        A.dis(a,n);
    }
};
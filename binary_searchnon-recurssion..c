
include<stdio.h>
int binarySearch(int[],int,int);
int main(){
        int a[30],n,i,x,p;
        printf("Enter size of list:");
        scanf("%d",&n);
        printf("Enter %d elements:",n);
        for (i=0;i<n;i++){
                 scanf("%d",&a[i]);
        }
        printf("Element to be searched:");
        scanf("%d",&x);
        p =binarySearch(a,n,x);
        if(p == -1){
             printf("Element not found");
        }
        else{
            printf("Element found at %d position ",p);
        }
}
int binarySearch(int a[],int n,int x){
        int beg=0,end=n-1,mid;
        while(beg<=end){
                mid=(beg+end)/2;
                if(x<a[mid])
                        end = mid-1;
                else if(x>a[mid])
                        beg = mid+1;
                else
                        return mid;
        }
        return -1;
}



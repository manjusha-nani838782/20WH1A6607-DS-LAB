	include<stdio.h>
int linearSearch(int[] ,int , int);
	int main(){
	        int a[30],n,i,x,p;
	        printf("Enter size of list:");
	        scanf("%d", &n);
	        printf("Elements of array:");
	        for(i=0;i<n;i++){
	                scanf("%d" ,&a[i]);
	        }
	        printf("Element to be searched:");
	        scanf("%d",&x);
	        p = linearSearch(a,n,x);
	        if(p == -1){
	             printf("Element not found");
	        }
	        else{
	             printf("Element found at position %d :",p);
	       }
	}
	int linearSearch(int a[],int n,int x){
	        int i;
	        for(i=0;i<n;i++){
	                if(x == a[i]){
	                        return i;
	                }
	        }
	        return -1;
	}
	


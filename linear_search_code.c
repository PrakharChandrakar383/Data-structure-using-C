//WAP A RPOGRAM FOR LINEAR SEARCH
#include <stdio.h>
int linearsearch(int a[],int n ,int val){
	for(int i=0;i<n;i++){
		if(a[i]==val){
			return i+1;
}
}
}
int main(){
	int a[]={75,12,68,56,98,74,12,32,36};
	int val = 12;
	int n= sizeof(a)/sizeof(a[0]);
	int res=linearsearch(a,n,val);
	
	printf("the element of the array are - ");
	
	for(int i =0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n element to be searched is = %d",val);
	if(res==-1){
		printf("\n elements is not present in array");
	}
	else{
		printf("\n elements is prenset in the array");
	}
	return 0;
	}
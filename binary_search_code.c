// WAP IN C TO IMPLEMENT BINARY SEARCH
#include <stdio.h>
#include <conio.h>
int main(){
int arr[10],i,search,first,last,middle;
printf("enter the elements in ascending order :");

for(i=0;i<10;i++){
	scanf("%d",&arr[i]);
}	
printf("\n enter the elements to search:");
scanf("%d",&search);
first = 0;
last=9;
middle = (first + last)/2;
while(first<=last){
	if(arr[middle]<search){
		first = middle + 1;
	}
	else if(arr[middle]==search){
		printf("\n the number %d is found at the position %d",search,middle +1);
	break;
	}
	else{
		last = middle+1;
		middle=(first + last)/2;
	}
}
if(first>last){
	printf("\n the number , %d is not found in given array",search);
}
return 0;
}

	
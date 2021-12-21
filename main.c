#include<stdio.h>

int main(){
int n=0;
printf("How many columns would you like to print?\n");
scanf("%d",&n);

//Filling the n*(2*n-1) matrix with " " and "*"
for(int i=1;i<n;i++){

	for(int j=1;j<=2*n-1;j++){
	
	if(j>=(n-(i-1))&&(j<=n+(i-1))){
	
	printf("*");
	}
	
	else if(j==2*n-1){
	printf(" \n");	//to print a new line when the loop reaches the end of the line
	}
	else{
	printf(" ");
	}
	}
	}
	
	return 0;
}














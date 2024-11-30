#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],product[2][2]={0},i,j,k;
	clrscr();
	printf("enter element of the first matrix (3*3): \n:");
	for(i=0 ; i < 2 ; i++){
	 for(j=0 ; j < 2 ; j++){
		scanf("%d",&arr1[i][j]);
			 }
	       }
	       printf("enter element of second matrix (3*3):\n:");
	       for(i=0 ; i < 2; i++){
		  for(j=0 ;j < 2; j++){
		    scanf("%d",&arr2[i][j]);
		    }
		  }
	 for(i=0 ; i<2 ; i++){
	 for(j=0 ; j<2 ; j++){
	    for(k=0 ; k<2 ;k++)
	    product[i][j] += arr1[i][k]*arr2[k][j];
	 }
       }
       printf("product of two matrix:");
       for(i=0;i<2;i++){
       for(j=0;j<2;j++){
	 print(" %d",product[i][j]);
	 }
	 printf("\n");
	 }
	 return 0;
	}


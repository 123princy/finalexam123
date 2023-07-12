#include<stdio.h>
main()
{
	   
     int i,j,n;
     
     printf("enter the array size:");
     scanf("%d",&n);
          int a[n][n];
      printf("enter the arry elements:");
	  
	  for(i=0;i<n;i++){
	  
	    for(j=0;j<n;j++){
		printf("enter the a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		
	}
}
        printf("the cub of all elements is:\n");
        for(i=0;i<n;i++){
		           for(j=0;j<n;j++){
		           a[i][j]*a[i][j]*a[i][j];
				   printf("%d",a[i][j]);
				   
			}
	}
}
		
	      

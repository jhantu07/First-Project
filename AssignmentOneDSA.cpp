#include<stdio.h>
int main()
{ int a[50],i,n,c,max,min;
printf("Insert the size of the element\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++){
	scanf("%d",&a[i])
}
	printf("1.MAXIMUM AND MINIMUM\n");
	printf("INSERTION\n");
	printf("DELETION\n");
	printf("Display");
	
	while(1){
		printf("Enter the choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1:{
				max=min=a[0];
				for(i=1;i<n;i++ ){
					if(min>a[i]){
					min=a[i];
					d=a[i];	
					}
					
					if(max>a[i]){
						max=a[i];
						e=a[i];
						
					}
					printf("minimum :%d position:%d",min,d)
					
				}
				break;
			}
		}
	}
}

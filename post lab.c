#include<stdio.h>
int main()
{
    static int a[100]={0};
    int n=0;
    int s;
    int c=1;
    
    printf("Type 1 for \"first class\"\n\nType 2 for \"economy class\"\n\n");
    printf("Type 3 for \"Exit\"\n");
    printf("Select type of class:");
    scanf("%d",&n);
    if(n==1){
    printf("Select seat number (1-30): ");
    scanf("%d", &s);
    
    printf("Enter between 1-30: ");
    	scanf("%d",&s);	
	}
    if(a[s]==1){
   
    printf("Sorry Not available Enter another seat number: ");
    scanf("%d",&s);
	    a[s]=1;  
    c++;}
    
    else if(n==2){
    printf("Select seat number (31-100):");
    scanf("%d", &s);
     
     printf("Enter between 31-100: ");
    	scanf("%d",&s);	
	}
    if(a[s]==1){
    while(a[s]==1)
        printf("Sorry Not available Enter another seat number: ");
    	scanf("%d",&s);
	
    a[s]=1;
    c++;
}
    
    
   else if (n==3)
   {
   	printf("Exit");
   }
}
    
    
 


#include<stdioh>
int main(){
	int x,y,z;
    
    printf("Enter number1 :");
    scanf("%d",&x);

    printf("Enter number2 :");
    scanf("%d",&y);

    printf("Enter number3 :");
    scanf("%d",&z);

    if(x>=y && x>=z){
        printf("The number %d is MAXIMUM",x);
    }
    else if(y>=x && y>=z){
        printf("The number %d is MAXIMUM",y);
    }
    else if(z>=x && z>=y){
        printf("The number %d is MAXIMUM",z);
    }
    else if(x==y && y==z && z==x){
        printf("All the three numbers are equal");
    }

    return 0;
}

#include <stdio.h>
 
int main() {
 
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    
    if(a>b && a>c){
        if(b>c){
            printf("%d\n%d\n%d\n", c,b,a);
        }
        else{
            printf("%d\n%d\n%d\n",b,c,a);
        }
    }
    
    
    else if(b>a && b>c){
        if(c>a){
            printf("%d\n%d\n%d\n",a,c,b);
        }
        else{
            printf("%d\n%d\n%d\n",c,a,b);
        }
    }
    else if(c>b && c>a){
        if(b>a){
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else{
            
            printf("%d\n%d\n%d\n",b,a,c);
        }
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}

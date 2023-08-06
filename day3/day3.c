#include<stdio.h>
#include<math.h>

int is_prime(int n){
    if(n==0) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int noDigits(int n){
    int dig = 0;
    while(n){
        dig++;
        n = n/10;
    }
    return dig;
}

int rotate(int num){
    int l,r;
    int n = noDigits(num);
    int p = pow(10,n-1);
    for(int i=0;i<n;i++){
        l = num/10;
        r = num%10;
        num = (r * p) + l;
        printf("%d\n" ,num);
    }
    return num;
}

void circularPrime(int num){
    
    for(int i=1;i<=num;i++){
        is_prime(num);
    }
    if(is_prime(num)){
        printf("yes Circular prime\n");
    }
    else{
        printf(" no \n");
    }
}

void single_prime(int num){
    while(num > 0){
        int temp = num % 10;
        if(is_prime(temp)){
            printf("%d\t",temp);
        }
        
        num = num / 10;
        
    }

}

int main(){
    // int num,l,r;
    // scanf("%d",&num);
    // is_prime(num);
    // rotate(num);
    // circularPrime(num);
    // single_prime(num);

    int num = 0,val = 1;
    scanf("%d",&num);
    // pattern problem
    // for (int  row = 1; row <= num; row++)
    // {
    //     val = (row & 1 ) ? 1 : 2;
    //     for (int col = 1; col <= row; col++,val += 2){
    //         printf("%d ",val);
    //     }
    //     printf("\n");
        
    // }

    // for(int row = 1;row<=num;row++){
    //     if(row%2==0){
    //         for(int i =1;i<=num;i++){
    //             printf("%d ",--val);
    //         }
    //     }else{
    //         for(int i =1;i<=num;i++){
    //             printf("%d ",val++);
    //         }
    //     }
    //     printf("\n");
    //     val = val + num;
    // }
    
    // for(int i =1;i<=num;i++){
    //     val = i;
    //     for(int j = 1;j<=num;j++,val += num){
    //         printf("%d ",val);
    //     }
    //     printf("\n");
    // }

    // int val1,val2=1;
    // val1=2*num-1;
    // for(int i = 1;i<=num;i++){
    //     val = i;
    //     for(int j = 1;j<=num;j++){
    //         printf("%d ",val);
    //         if(j&1){
    //             val += val1;
    //         }
    //         else{
    //             val += val2;
    //         }
    //     }
    //     printf("\n");
    // }



    // plus and cross pattern
    for(int i= 1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==j){
                printf(" %d ",val);
            }
            else if(i == (num/2)){

            }
            else if(j == (num/2)){
                
            }
        }
    }

    return 0;
}
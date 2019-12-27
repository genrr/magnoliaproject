
#include <stdio.h>
#include <math.h>

long long n1;
int k1;
int a1;
int a2;
int c;
long long b1;
long long b2;
int m;
int t;
int m2 = 25;


long f(int x)
{
    //printf("%d\n",(x + m*(n1 % x) + (b1 % x) - m2*(b2 % x)));
    return (x + m*(n1 % x) + (b1 % x) - m2*(b2 % x));
}


int main()
{
    start:

    printf("give number:\n");
    scanf("%lu",&n1);

    k1 = 13;
    a1 = 23;
    a2 = 15;
    c = 138;
    m = round(32*log(n1))+t;
    b1 = pow(10,16)-51;//(k1*n1 - a1*a2 - c) - (((k1*n1-a1*a2-c)%2)-1);
    b2 = b1-1;//k1*n1 - c - pow(a2,3);


    for(t = -64; t<=64; t++){
        for(int x = 2; x <= 51; x++){
            if(n1 % f(x) == 0 && n1 != f(x) && f(x) != -1 && f(x) != 1){
                printf("%lu = %d * %d\nfound at t = %d, x = %d, %d",n1,f(x),n1/f(x),t,x,(t+64)*50+x);
                t = 65;
                break;
            }
        }
         m = round(32*log(n1))+t;
    }

    char c;

    printf("\nscan more? y/n\n");
    scanf("%c",&c);

    while(5 != 4){
        scanf("%c",&c);
        if(c == 'y'){
            goto start;
        }
        else if(c == 'n'){
            return 0;
        }
        else{
            printf("invalid char!");
            continue;
        }
    }


    return 0;

}

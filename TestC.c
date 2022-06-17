#include <stdio.h>

int addone(x){
    return x + 1;
}

int fibonacci(n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int u = 0;
    int v = 1;
    for (int i = 2; i < n+1; i++){
        int vmem = v;
        v = u + v;
        u = vmem;
    }
    return v;
}

int * stock_numbers(){
    // stock les nombres plus petits entiers pairs que n dans un tableau
    static int t[6];
    for (int i =0; i<11; i = i+2){
        t[i/2] = i;
    }
    return t;
}

void print_tableau(int *t, int len){
    for (int i = 0; i < len; i++){
        printf("%d \n", t[i]);
    }
}

void print_char(){
    char c[20];
    scanf("%c", c); 
}

int main(){
    // ex 1
    int a = 5;
    int b;
    b = addone(a);
    //printf("%d \n", b);

    // ex tableau
    int t[5];
    t[0] = 3;
    t[1] = 9;
    t[2] = 3;
    t[3] = 9;
    t[4] = 1;
    for (int j = 0; j < 6; ++j)
    {
        //printf("%d \n", t[j]);
    }   

    int f = fibonacci(11);
    //printf("%d \n ", f);

    int *s;
    s = stock_numbers();
    printf("%d \n", s[5]); 
    print_tableau(s, 6);

    print_char();
    return 0;
}

#include <stdio.h>

void iterativeFibonacci(int);
void recursiveFibonacci(int,int,int);

int main() {
    unsigned int input=0;//Till which number should the program run.

    printf("Wie lange soll die Sequenz laufen?:");//Output so the user knows, what he needs to input
    scanf("%d",&input);//get input

    printf("Recursive Fibonacci:\n");
    recursiveFibonacci(1,0,input);

    printf("\n");

    printf("Iterative Fibonacci:\n");
    iterativeFibonacci(input);

    return 0;
}

void iterativeFibonacci(int count) {
    int fibonaccci[3]={0,1,0};//Need a first number, a second number and the sum of these.

    for(int i=0;fibonaccci[2]<=count;i++) {

        printf("%d ",fibonaccci[2]);

        fibonaccci[0]=fibonaccci[1];//first number will be second number
        fibonaccci[1]=fibonaccci[2];//second number will be the previous sum
        fibonaccci[2]=fibonaccci[0]+fibonaccci[1];//sum from number 1 and 2
    }
}
void recursiveFibonacci(int a,int b,int count) {
    printf("%d ",b);

    if(a+b<count) {
        recursiveFibonacci(b,a+b,count);
    }

}
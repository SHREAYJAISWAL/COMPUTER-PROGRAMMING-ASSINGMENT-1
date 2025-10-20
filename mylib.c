#include "mylib.h"

int reverseDigits(int n){
    int r=0;
    while(n>0){
        r=r*10 + (n % 10);
        n/=10;
    }
    return r;
}

int isArmstrong(int num){
    int original=num;
    int sum=0;
    while (num>0){
        int digit = num % 10;
        sum += digit*digit*digit;
        num/=10;
    }
    return sum==original;
}

int isAdams(int num){
    int squareOriginal=num*num;
    int reversedNum=reverseDigits(num);
    int squareReversed = reversedNum*reversedNum;
    return reverseDigits(squareOriginal)== squareReversed;
}

int isPrime(int num){
    if(num<2) return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}

int isPrimePalindrome(int num){
    return isPrime(num) && (num==reverseDigits(num));
}
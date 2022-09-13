package com.pravin;

public class Reversal {
    public static void main(String[] args) {

        // if n = 23597 then output = 79532
    int n= 1431234;
    int rev=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        rev=rev*10+rem;
    }
        System.out.println(rev);
    }
}
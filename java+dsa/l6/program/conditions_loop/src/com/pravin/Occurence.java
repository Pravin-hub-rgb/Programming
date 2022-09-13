package com.pravin;

public class Occurence {
    public static void main(String[] args) {

    // how many times 7 occurs in 1385757879
    int num = 577879;
   int occur=0;
    while(num>0){
        int rem = num%10;
       if(rem==7){
           occur++;
       }
       num/=10;
   }
    System.out.println("7 occurs "+occur+"times");
    }
}

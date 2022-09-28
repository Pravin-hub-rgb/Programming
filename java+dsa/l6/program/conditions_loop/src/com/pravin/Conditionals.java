package com.pravin;

public class Conditionals {
    public static void main(String[] args) {
        int salary = 25400;
        if(salary<10000){
            salary += 2000;
        } else {
            salary+=1000;
        }

        // multiple if-else
        if(salary > 10000){
            salary+=2000;
        } else if(salary>20000){
            salary+=30000;
        } else {
            salary+=1000; // if none of the above condidtion is true then execute this one
        }

        System.out.println((salary));
    }
}

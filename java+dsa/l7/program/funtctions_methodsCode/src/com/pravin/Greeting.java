package com.pravin;

import java.util.Scanner;

public class Greeting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String name = in.next();
        in.close();
        greeting(name);
        greeting(name);
        int key =1;
        switch (key) {
            case 1 -> System.out.println("hi");
            case 2 -> System.out.println("hi");          
                
        
            default ->System.out.println("hey");
                
        }
    }
    static void greeting(String name){
        System.out.println("Hi, Good Morning " + name);
    }
    
}

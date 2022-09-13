package com.pravin;

import java.util.Arrays;

public class VarArgs {
    public static void main(String[] args) {
        // variable arguments - when we don't know how many arguments we want to pass to a function
        //func(1,2,3,4,5);

        // for some known no. of arguments and unknown no. of arguments
        int a= 2;
        int b =3;

        multiple(a, b, 6,5,7,8,9,4,55);
        multi2(2,"hey hey",2,3,5,6,5,6);

    }
    static void func(int ...v){ // so we do this, this is taking it as array
        System.out.print(Arrays.toString(v)+" ");
    }
    static void multiple(int x, int y, int ...z){
        System.out.println(x +" "+ y + Arrays.toString(z));
    }
    static void multi2(int a, String b,int ...v){
        System.out.println(a + " "+ b + " "+ Arrays.toString(v));
    }
}

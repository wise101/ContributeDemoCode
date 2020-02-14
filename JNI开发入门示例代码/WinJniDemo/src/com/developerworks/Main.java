package com.developerworks;

public class Main {

    public static void main(String[] args) {
	      //load dynamic library
      if(Environment.initEnvironment())
        {
           // invoke the native method
            HelloJNI hello = new HelloJNI();
            hello.sayHello();
            String input = hello.getLine("this is a prompt");
            System.out.println("User typed: "+ input);

            // 计算从1到100
            int data[] = new int[100];
                for (int i =0;i<100;i++)
                data[i] = i+1;

            int sum = hello.sumArray(data);
            System.out.println("the sum of arrary:" + sum);

        }
    	
    }
}

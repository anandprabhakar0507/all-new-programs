import java.util.*;
public class calculator{
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    float a,b;
    
    while(true){
        System.out.println("1. Addition");
        System.out.println("2. subtration");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Exit");
        System.out.print("Enter Your Choice (1-5): ");
        int choice=sc.nextInt();
        switch(choice){
            case 1:
            System.out.println("enter the first number");
             a=sc.nextFloat();
            System.out.println("enter the second number");
             b=sc.nextFloat();
            System.out.println(addition(a,b));
             break;
            case 2:
            System.out.println("enter the first number");
             a=sc.nextFloat();
            System.out.println("enter the second number");
             b=sc.nextFloat();
            System.out.println(subtraction(a,b));
             break;
            case 3:
            System.out.println("enter the first number");
             a=sc.nextFloat();
            System.out.println("enter the second number");
             b=sc.nextFloat();
            System.out.println(multiplication(a,b));
            break;
            case 4:
            System.out.println("enter the first number");
             a=sc.nextFloat();
            System.out.println("enter the second number");
             b=sc.nextFloat();
            System.out.println(division(a,b));
            break;
            case 5:
            return;
            default:
            System.out.println("enter valid choice");
            break;

        }
    }

    //System.out.println(addition(a,b));
   

}
 public static float addition(float a,float b){
    float sum=a+b;
    return sum;
    
}
public static float subtraction(float a,float b){
    float sub=a-b;
    return sub;
}
public static float multiplication(float a,float b){
    float mul=a*b;
    return mul;
}
public static float division(float a,float b){
    float div=a/b;
    return div;
}

}


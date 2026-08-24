import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter first number :");
        int a=sc.nextInt();
        System.out.println("Enter second number :");
        int b=sc.nextInt();
        
        int sum =a+b;
        int product=a*b;
        System.out.println("Sum is "+ sum);
        System.out.println("Product is "+ product);
    }
}


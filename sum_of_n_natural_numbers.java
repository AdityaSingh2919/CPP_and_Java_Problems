import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter range :");
        int a=sc.nextInt();
        int ans=0;
       for(int i=0;i<=a;i++){
           ans+=i;
       }
           System.out.println(ans);
       
       
    

        
    }
}



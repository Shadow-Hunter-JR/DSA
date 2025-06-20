import java.util.Scanner;

public class javabasic {
    public static void main(String[] args) {
        System.out.print("* * * *\n* * *\n* *\n*\n");
        
        int a = 12;
        System.out.println(a);
        
        String b = "anik";
        System.out.println(b);
        
        // Create a single Scanner instance
        Scanner sc = new Scanner(System.in);

        // Read input correctly
        String input = sc.next();
        sc.nextLine(); // Consume leftover newline before reading full line
        String inputt = sc.nextLine();
        System.out.println(input + " " + inputt);

        // Read another string input
        String i = sc.nextLine();
        System.out.println(i);

        // Read integer inputs
        int d = sc.nextInt();
        int e = sc.nextInt();
        int f = e + d;
        System.out.println(f);

        // Close Scanner to avoid resource leaks
        sc.close();
    }
}

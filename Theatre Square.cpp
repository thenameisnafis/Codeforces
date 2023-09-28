import java.util.Scanner;

public class TheatreSquare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input values
        long n = scanner.nextLong();
        long m = scanner.nextLong();
        long a = scanner.nextLong();

        // Calculate the number of flagstones needed
        long flagstonesNeeded = (n + a - 1) / a * ((m + a - 1) / a);

        // Output the result
        System.out.println(flagstonesNeeded);

        scanner.close();
    }
}

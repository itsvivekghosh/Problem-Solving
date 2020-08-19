import java.util.Scanner;

public class PathThroughGraph {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        if(n == m)
            System.out.println("0");
        else if((m > n && largestFactor(m) == n) || (n > m && largestFactor(n) == m)) {
            System.out.println("1");
        }
        else {
            int count = 0;
            int max = Math.max(n, m);
            int min = Math.min(n, m);
            boolean isGcd = false;
            while (max > 1){
                count ++;
                max = largestFactor(max);
                if (max == min) {
                    isGcd = true;
                    break;
                }
            }
            if (!isGcd) {
                while (min > 1) {
                    min = largestFactor(min);
                    count++;
                }
            }
            System.out.println(count);
        }
    }
    public static int largestFactor(int num) {
        for (int i = (num/2); i >= 2 ; i--) {
            if (num % i == 0) {
                return i;
            }
        }
        return 1;
    }
}
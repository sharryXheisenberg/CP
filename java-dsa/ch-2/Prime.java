public class Prime {
    static boolean isPrime(int x) {
        if (x <= 1) return false;
        if (x <= 3) return true;
        if (x % 2 == 0) return (x == 2);
        int r = (int)Math.sqrt(x);
        for (int d = 3; d <= r; d += 2) {
            if (x % d == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        int n = 100;
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                System.out.println(i);
            }
        }
    }
}

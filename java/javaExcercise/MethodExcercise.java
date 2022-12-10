public class MethodExcercise {
    
    public static void main(String[] args) {
        System.out.println("The sum is: " + MethodExcercise.addNumbers(5, 6));
        System.out.println("The product is: " + MethodExcercise.multiplyNumbers(5, 6));
    }
    
    public static int addNumbers(int x, int y) {
        return x + y;
    }
    
    public static int multiplyNumbers(int x, int y) {
        return x * y;
    }
}
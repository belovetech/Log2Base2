package lesson4.src.exceptionExample;

public class PhoneExceptionTester {
    
    public static void main(String[] args) {
                
        String[] numbers = new String[] {"123-456", null, "567-897", "123-095"};
        
        for (int i = 0; i < numbers.length; i++) {
            try {
                System.out.println(new Phone("redmi", numbers[i]));
            } catch (IllegalArgumentException ex) {
                System.out.println(ex.getLocalizedMessage());
            }
        }
    }
}

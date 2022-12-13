package lesson4.src.StringMethods;

public class StringMethods {
    
    
    public static void main(String[] args) {
        String text = "Hello";
        System.out.println(text.charAt(2));
        
        System.out.println(text.equalsIgnoreCase("hello"));
        
         System.out.println(text.contains("el"));
        
        String commaSeparatedText = "This, is, a, goal!";
        String[] stringArray = commaSeparatedText.split(",");
        
        for (int i = 0; i < stringArray.length; i++) {
             System.out.println(stringArray[i]);
        }
        
        System.out.println(commaSeparatedText.substring(0, 4));
        
        System.out.println(text.replace('e', 'a'));
        
    }
}

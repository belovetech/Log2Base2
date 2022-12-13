package lesson4.src.RegexExample;

import java.util.regex.Pattern;

public class regEXTester {
 
    
    public static void main(String[] args) {
        String emailRegex = "^(.+)@(.+).com$";
        Pattern pattern = Pattern.compile(emailRegex);
        String  email = "jeffy@gmail.com";
        
        System.out.println(pattern.matcher(email).matches());
    }
}

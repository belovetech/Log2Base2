package lesson4.src.RegexExample;

import java.util.regex.Pattern;

public class Person {
    private String name;
    private String email;
    private final String emailRegex = "^(.+)@(.+).com$";
    private final Pattern pattern = Pattern.compile(emailRegex);
    
    public Person(String name, String email) {
        if (!pattern.matcher(email).matches()) {
            throw new IllegalArgumentException("Error, Invalid email!");
        }
        this.name = name;
        this.email = email;
    }
    
    @Override
    public String toString() {
        return "Person{"+
        "Name:'" + name + '\'' +
        ", Email:'" + email + '\'' +
        "}";
    }
    
}

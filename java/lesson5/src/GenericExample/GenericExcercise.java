package lesson5.src.GenericExample;

import java.util.ArrayList;

public class GenericExcercise {
    
    public static void main(String[] args) {
        ArrayList<Object> variables = new ArrayList<Object>();
        
        Double doubleNumber = 123.45;
        String stringText = "Hey there!";
        Integer integerNumber = 1234;
        Character letter = 'Z';
        
        variables.add(doubleNumber);
        variables.add(stringText);
        variables.add(integerNumber);
        variables.add(letter);
        
        for (Object variable: variables) {
            GenericExcercise.displayClassName(variable);
        }
    }
    
    static <T> void displayClassName(T variable) {
        System.out.println(variable.getClass().getName());
    }
}

package lesson4.src.DateAndCalender;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class DatesAndCalenders {
    
    public static void main(String[] args) {
        System.out.println("<<<<displayCurrentDate>>>>");
        DatesAndCalenders.displayCurrentDate();
        System.out.println("<<<<displaySetDate>>>>");
        DatesAndCalenders.displaySetDate();
        System.out.println("<<<<SimpleDateFormat>>>>");
        DatesAndCalenders.formatDate();
    }
    
    public static void displayCurrentDate() {
        Calendar calender = Calendar.getInstance();
        System.out.println(calender);
        
        Date date = new Date();
        System.out.println("<<<<Date>>>>");
        System.out.println(date);
        
        calender.setTime(date);
        System.out.println(calender.getTime());
    }
    
    public static void displaySetDate() {
        Calendar calendar = Calendar.getInstance();
        calendar.set(2032, 10, 02);
        
        Date date =  calendar.getTime();
        System.out.println(date);
        
        
    }
    
    public static void formatDate() {
        SimpleDateFormat formatter = new SimpleDateFormat("dd-mm-yyyy");
        String date = formatter.format(new Date());
        System.out.println(date);
    }
}

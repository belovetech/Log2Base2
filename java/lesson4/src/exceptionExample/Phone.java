package lesson4.src.exceptionExample;

public class Phone {
    private String phoneType;
    private String phoneNumber;
    
    
    public Phone(String phoneType, String phoneNumber) {
        super();
        if (phoneType == null || phoneNumber == null) {
            throw new IllegalArgumentException("The type and number cannot be null");
        }
        this.phoneType = phoneType;
        this.phoneNumber = phoneNumber;
    }
    
    public String getPhoneType() {
        return phoneType;
    }
    
    public void setPhoneType(String phoneType) {
        this.phoneType = phoneType;
    }
    
    public String getPhoneNumber() {
        return phoneNumber;
    }
    
    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }
    
    @Override
    public String toString() {
        return "Phone Type: " + phoneType + ", Phone Number: " +  phoneNumber;
    }
}
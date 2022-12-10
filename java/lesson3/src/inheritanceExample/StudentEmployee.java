package lesson3.src.inheritanceExample;

public class StudentEmployee extends Student{
    private double rateOfPayPerHour;
    private String employeeId;
    
    public StudentEmployee(String firstName, String lastName,  String studentId, double rateOfPayPerHour, String employeeId) {
        super(firstName, lastName, studentId);
        this.rateOfPayPerHour = rateOfPayPerHour;
        this.employeeId = employeeId;
    }
    
    public double getRateOfPayPerHour() { return rateOfPayPerHour; }
    
    public void setRateOfPayPerHour(double rateOfPayPerHour) {
        this.rateOfPayPerHour = rateOfPayPerHour; 
    }
    
    public String getEmployeeId() { return employeeId; }
    
    public void setEmloyeeId(String employeeId) { this.employeeId = employeeId; }
    
    @Override
    public String toString() {
        return super.toString() + " Employee ID :" + employeeId + " Pay: " + rateOfPayPerHour;
    }
}

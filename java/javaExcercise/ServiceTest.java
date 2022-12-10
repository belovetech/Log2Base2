public class ServiceTest {
    private String serviceId;
    
    private String generateServiceId() {
        if (serviceId == null) {
            return "1111";
        }
        return serviceId;
    }
    
    public String getServiceId() {
        return generateServiceId();
    }
    
    // Entry point
    public static void main(String[] args) {
        ServiceTest serviceTest = new ServiceTest();
        
        System.out.println(serviceTest.getServiceId());
    }
}

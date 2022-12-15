package lesson6.src.overridingHashAndEqual;

import java.util.Objects;

public class People {
    // private String name;
    private String address;
    // private String number;
    
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (this == null || getClass() != o.getClass()) return false;
        People  people = (People) o;
        return address.equals(people.address);
    }
    
    @Override
    public int hashCode() {
        return Objects.hash(address);
    }
}

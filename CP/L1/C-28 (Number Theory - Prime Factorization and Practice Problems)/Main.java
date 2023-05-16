// Define a class named "Person" to represent both players and staff members
class Person {
    // Instance variables
    private String name;
    private int age;
    private String role;

    // Constructor
    public Person(String name, int age, String role) {
        this.name = name;
        this.age = age;
        this.role = role;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getRole() {
        return role;
    }

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setRole(String role) {
        this.role = role;
    }

    // Method to display person information
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Role: " + role);
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Create an array of Person objects to represent both players and staff members
        Person[] squad = new Person[22];

        // Add player information to the array
        squad[0] = new Person("Lionel Messi", 34, "Forward");
        squad[1] = new Person("Sergio Agüero", 33, "Forward");
        squad[2] = new Person("Paulo Dybala", 28, "Forward");
        // Add more players...

        // Add staff information to the array
        squad[19] = new Person("Lionel Scaloni", 44, "Coach");
        squad[20] = new Person("Pablo Aimar", 42, "Assistant Coach");
        squad[21] = new Person("Martin Tocalli", 55, "Goalkeeping Coach");
        // Add more staff members...

        // Display information for all persons in the squad
        for (Person person : squad) {
            person.displayInfo();
            System.out.println("-----------------------");
        }
    }
}

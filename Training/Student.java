public class Student {
    int id;
    String name;
}

class TestStatement {
    public static void main(String[] args) {
        Student S1 = new Student();
        S1.id = 10;
        S1.name = "Sonoo";
        System.out.println(S1.id + S1.name);
    }
}
class Student{

    String name;
    int rollNumber;
    double marks;

    public void setName(String name) {
        this.name = name;
    }

    public void setRollNumber(int rollNumber) {
        this.rollNumber = rollNumber;
    }

    public void setMarks(double marks) {
        this.marks = marks;
    }


    public void display() {
        System.out.println("Student Name: "+ name);
        System.out.println("Roll Number: "+rollNumber);
        System.out.println("Marks: " +marks);
        System.out.println("Grade: " +calculateGrade());
    }

    public String calculateGrade() {
        if (marks >= 90) {
            return "A";
        } else if (marks >= 80) {
            return "B";
        } else if (marks >= 70) {
            return "C";
        } else if (marks >= 60) {
            return "D";
        } else {
            return "F";
        }
    }
}

public class Main {
    public static void main(String[] args) {

        Student student1 = new Student();
        student1.setName("Nish");
        student1.setRollNumber(101);
        student1.setMarks(92);

        Student student2 = new Student();
        student2.setName("Ayush");
        student2.setRollNumber(102);
        student2.setMarks(75);

        student1.display();
        student2.display();
    }
}

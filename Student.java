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


// output
"C:\Program Files\Java\jdk-23\bin\java.exe" "-javaagent:C:\Users\nishj\OneDrive\Desktop\IntelliJ IDEA Community Edition 2024.3.1.1\lib\idea_rt.jar=55536:C:\Users\nishj\OneDrive\Desktop\IntelliJ IDEA Community Edition 2024.3.1.1\bin" -Dfile.encoding=UTF-8 -Dsun.stdout.encoding=UTF-8 -Dsun.stderr.encoding=UTF-8 -classpath "C:\Users\nishj\Real time ticket booking\out\production\Real time ticket booking" Main
Student Name: Nish
Roll Number: 101
Marks: 92.0
Grade: A
Student Name: Ayush
Roll Number: 102
Marks: 75.0
Grade: C

Process finished with exit code 0

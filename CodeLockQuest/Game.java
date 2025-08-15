import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class Game {

    private static List<Question> questions = new ArrayList<>();
    private static int score = 0;
    private static int currentQuestionIndex = 0;

   /
    public static void main(String[] args) {
        initializeQuestions();
        startGame();
    }

    private static void initializeQuestions() {
        // Basic Output
        questions.add(new Question(
            "Complete the code to print 'Hello, Java!' to the console.",
            "public class Main {\n" +
            "    public static void main(String[] args) {\n" +
            "        System.out.____(\"Hello, Java!\");\n" +
            "    }\n" +
            "}",
            "println"
        ));

        // Variable Declaration
        questions.add(new Question(
            "Declare an integer variable named 'playerScore' and assign it the value 100.",
            "public class Main {\n" +
            "    public static void main(String[] args) {\n" +
            "        ____ playerScore = 100;\n" +
            "        System.out.println(\"Score: \" + playerScore);\n" +
            "    }\n" +
            "}",
            "int"
        ));

        // Simple For Loop
        questions.add(new Question(
            "Complete the for loop to print numbers from 0 to 4.",
            "public class Main {\n" +
            "    public static void main(String[] args) {\n" +
            "        for (int i = 0; ____; i++) {\n" +
            "            System.out.println(i);\n" +
            "        }\n" +
            "    }\n" +
            "}",
            "i < 5"
        ));
        
        // String Concatenation
        questions.add(new Question(
            "What keyword is used to join two strings together?",
            "public class Main {\n" +
            "    public static void main(String[] args) {\n" +
            "        String firstName = \"Code\";\n" +
            "        String lastName = \"Lock\";\n" +
            "        String fullName = firstName ____ lastName;\n" +
            "        System.out.println(fullName);\n" +
            "    }\n" +
            "}",
            "+"
        ));
    }

    
    private static void startGame() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("===============================");
        System.out.println("    Welcome to CodeLock Quest!   ");
        System.out.println("===============================");
        System.out.println("Complete the code snippets to unlock the next level.\n");

        // Loop through all questions
        while (currentQuestionIndex < questions.size()) {
            displayQuestion();
            System.out.print("Your answer: ");
            String userAnswer = scanner.nextLine();

            if (checkAnswer(userAnswer)) {
                System.out.println("\nCorrect! Level Unlocked!\n");
                score++;
                currentQuestionIndex++;
            } else {
                System.out.println("\nIncorrect. Try again!");
                System.out.println("The correct answer was: " + questions.get(currentQuestionIndex).getAnswer() + "\n");
                currentQuestionIndex++; // Move to next question even if wrong
            }
            System.out.println("----------------------------------------");
        }

        // End of the game
        displayFinalScore();
        scanner.close();
    }

    
    private static void displayQuestion() {
        Question currentQuestion = questions.get(currentQuestionIndex);
        System.out.println("Level " + (currentQuestionIndex + 1) + ": " + currentQuestion.getQuestionText());
        System.out.println("\n--- Code ---");
        System.out.println(currentQuestion.getCodeSnippet());
        System.out.println("------------\n");
        System.out.println("Fill in the blank (____):");
    }

    
    private static boolean checkAnswer(String userAnswer) {
        
        return userAnswer.trim().equalsIgnoreCase(questions.get(currentQuestionIndex).getAnswer());
    }

    
    private static void displayFinalScore() {
        System.out.println("Quest Complete!");
        System.out.println("Your final score is: " + score + " out of " + questions.size());
        System.out.println("Thanks for playing CodeLock Quest!");
    }

}

public class Question {
    private String questionText;
    private String codeSnippet;
    private String answer;

    /**
     * Constructs a new Question.
     * @param questionText The descriptive text for the question.
     * @param codeSnippet  The Java code with a "____" placeholder.
     * @param answer       The correct string to fill the placeholder.
     */
    public Question(String questionText, String codeSnippet, String answer) {
        this.questionText = questionText;
        this.codeSnippet = codeSnippet;
        this.answer = answer;
    }

    /**
     * Gets the question text.
     * @return The question text.
     */
    public String getQuestionText() {
        return questionText;
    }

    /**
     * Gets the code snippet.
     * @return The code snippet.
     */
    public String getCodeSnippet() {
        return codeSnippet;
    }

    /**
     * Gets the correct answer.
     * @return The answer.
     */
    public String getAnswer() {
        return answer;
    }
}
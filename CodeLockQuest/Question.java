public class Question {
    private String questionText;
    private String codeSnippet;
    private String answer;

    
    public Question(String questionText, String codeSnippet, String answer) {
        this.questionText = questionText;
        this.codeSnippet = codeSnippet;
        this.answer = answer;
    }

    
    public String getQuestionText() {
        return questionText;
    }

    
    public String getCodeSnippet() {
        return codeSnippet;
    }

    
    public String getAnswer() {
        return answer;
    }

}

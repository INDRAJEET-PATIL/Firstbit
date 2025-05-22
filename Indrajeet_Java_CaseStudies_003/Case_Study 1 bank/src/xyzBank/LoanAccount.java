package xyzBank;

public class LoanAccount extends BankAccount {
    private double loanAmount;
    private double interestRate;

    public LoanAccount(String accountHolder, double loanAmount, double interestRate) {
        super(accountHolder, -loanAmount); // Loan starts with negative balance
        this.loanAmount = loanAmount;
        this.interestRate = interestRate;
    }

    public void calculateInterest() {
        double interest = Math.abs(balance) * (interestRate / 100);
        balance -= interest;
        System.out.println("Interest added: " + interest);
    }
}


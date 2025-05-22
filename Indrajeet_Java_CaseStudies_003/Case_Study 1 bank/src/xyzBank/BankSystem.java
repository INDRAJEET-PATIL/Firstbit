package xyzBank;

public class BankSystem {
    public static void main(String[] args) {
        Bank bank = new Bank();  // Bank object to manage accounts

        // Creating accounts
        SavingsAccount sa = new SavingsAccount("Alice", 12000, bank);
        SalaryAccount salAcc = new SalaryAccount("Bob", 15000, bank);
        CurrentAccount ca = new CurrentAccount("Charlie", 5000, 2000, bank);
        LoanAccount la = new LoanAccount("David", 50000, 5, bank);

        // Transactions
        sa.withdraw(5000);  // Should fail due to min balance
        sa.deposit(3000);
        sa.displayBalance();

        salAcc.withdraw(2000);
        salAcc.displayBalance();

        ca.withdraw(6000);  // Should work with overdraft
        ca.displayBalance();

        la.calculateInterest();
        la.displayBalance();

        // Closing an account
        bank.closeAccount(salAcc);

        // End-of-Day Report
        bank.generateEndOfDayReport();
    }
}


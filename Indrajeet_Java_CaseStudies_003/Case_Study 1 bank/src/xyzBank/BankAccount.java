package xyzBank;

public class BankAccount {
    protected String accountHolder;
    protected double balance;
    protected Bank bank;  // Reference to Bank for lifecycle and reports

    public BankAccount(String accountHolder, double balance, Bank bank) {
        this.accountHolder = accountHolder;
        this.balance = balance;
        this.bank = bank;
        bank.openAccount(this);
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
        bank.recordTransaction(accountHolder + " deposited ₹" + amount);
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
            bank.recordTransaction(accountHolder + " withdrew ₹" + amount);
        } else {
            System.out.println("Insufficient balance!");
        }
    }

    public void displayBalance() {
        System.out.println(accountHolder + "'s Balance: ₹" + balance);
    }
}

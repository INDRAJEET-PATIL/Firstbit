package xyzBank;

public class SavingsAccount extends BankAccount {
    private static final double MIN_BALANCE = 10000;

    public SavingsAccount(String accountHolder, double balance, Bank bank) {
        super(accountHolder, balance, bank);
    }

    @Override
    public void withdraw(double amount) {
        if ((balance - amount) >= MIN_BALANCE) {
            super.withdraw(amount);
        } else {
            System.out.println("Cannot withdraw. Minimum balance should be ₹" + MIN_BALANCE);
        }
    }
}

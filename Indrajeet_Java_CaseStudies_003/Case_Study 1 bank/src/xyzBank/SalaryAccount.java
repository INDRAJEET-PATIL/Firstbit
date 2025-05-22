package xyzBank;

public class SalaryAccount extends BankAccount {
    private int monthsInactive = 0;

    public SalaryAccount(String accountHolder, double balance) {
        super(accountHolder, balance);
    }

    public void checkAccountStatus() {
        if (monthsInactive >= 2) {
            System.out.println(accountHolder + "'s account is frozen due to inactivity.");
        }
    }

    public void resetActivity() {
        monthsInactive = 0;
    }
}


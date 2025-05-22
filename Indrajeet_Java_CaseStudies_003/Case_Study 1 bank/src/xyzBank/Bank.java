package xyzBank;

import java.util.ArrayList;
import java.util.List;

public class Bank {
    private List<BankAccount> accounts = new ArrayList<>();
    private List<String> transactions = new ArrayList<>();

    public void openAccount(BankAccount account) {
        accounts.add(account);
        System.out.println("Account opened for " + account.accountHolder);
    }

    public void closeAccount(BankAccount account) {
        accounts.remove(account);
        System.out.println("Account closed for " + account.accountHolder);
    }

    public void recordTransaction(String transaction) {
        transactions.add(transaction);
    }

    public void generateEndOfDayReport() {
        System.out.println("\n🔹🔹 End of Day Report 🔹🔹");
        for (String transaction : transactions) {
            System.out.println(transaction);
        }
        System.out.println("Total Active Accounts: " + accounts.size());
    }
}

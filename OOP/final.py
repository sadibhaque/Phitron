import random # for acc number generate

# bank Account

class BankAccount:
    def __init__(self, name, email, address, acc_type):
        self.name = name
        self.email = email
        self.address = address
        self.acc_type = acc_type
        self.balance = 0
        self.account_number = random.randint(1000, 9999)
        self.transaction_history = []
        self.loan_taken = 0

    # deposit

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f"Deposited: {amount}")
        print(f"\nDeposited {amount}. New balance: {self.balance}")

    # withwraw

    def withdraw(self, amount):
        if amount > self.balance:
            print("\nWithdrawal amount exceeded!")
        else:
            self.balance -= amount
            self.transaction_history.append(f"Withdrew: {amount}")
            print(f"\nWithdrew {amount}. New balance: {self.balance}")

    # balance Check

    def check_balance(self):
        print(f"\nAvailable balance: {self.balance}")

    # show Transcation

    def show_transactions(self):
        print("\nTransaction History:")
        for transaction in self.transaction_history:
            print(transaction)

    # loan

    def take_loan(self, amount):
        if self.loan_taken >= 2:
            print("\nLoan limit exceeded (max 2 loans)")
        else:
            self.balance += amount
            self.loan_taken += 1
            self.transaction_history.append(f"\nLoan taken: {amount}")
            print(f"\nLoan of {amount} approved. New balance: {self.balance}")


# Bank

class Bank:
    def __init__(self):
        self.accounts = {}
        self.total_loans = 0
        self.loan_system_on = True

    # create acc

    def create_acc(self, name, email, address, acc_type):
        account = BankAccount(name, email, address, acc_type)
        self.accounts[account.account_number] = account
        print(f"\nAccount created. Account Number: {account.account_number}")


    # delete acc

    def delete_acc(self, account_number):
        if account_number in self.accounts:
            del self.accounts[account_number]
            print("\nAccount deleted successfully")
        else:
            print("\nAccount not found")

    # list acc

    def list_acc(self):
        print("\nAll Accounts:")
        for acc in self.accounts.values():
            print(f"\n{acc.account_number}: {acc.name} ({acc.acc_type})")

    # money transfer

    def transfer_money(self, from_acc, to_acc, amount):
        if from_acc in self.accounts and to_acc in self.accounts:
            if self.accounts[from_acc].balance >= amount:
                self.accounts[from_acc].withdraw(amount)
                self.accounts[to_acc].deposit(amount)
                print("\nTransfer successful")
            else:
                print("\nInsufficient balance")
        else:
            print("\nAccount does not exist")

    # balance check

    def total_balance(self):
        total = sum(acc.balance for acc in self.accounts.values())
        print(f"\nTotal bank balance: {total}")

# for user interation

def for_user(bank):
    while True:
        print("\nUser Menu:")
        print("1. Create Account")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Check Balance")
        print("5. Transaction History")
        print("6. Take Loan")
        print("7. Transfer Money")
        print("8. Exit")

        opt = int(input("Choose option: "))

        if opt == 1:
            name = input("Name: ")
            email = input("Email: ")
            address = input("Address: ")
            acc_type = input("Account Type (Savings/Current): ")
            bank.create_acc(name, email, address, acc_type)

        elif opt == 2:
            acc_num = int(input("Account Number: "))
            if acc_num in bank.accounts:
                amount = float(input("Amount: "))
                bank.accounts[acc_num].deposit(amount)
            else:
                print("\nAccount not found")

        elif opt == 3:
            acc_num = int(input("Account Number: "))
            if acc_num in bank.accounts:
                amount = float(input("Amount: "))
                bank.accounts[acc_num].withdraw(amount)
            else:
                print("\nAccount not found")

        elif opt == 4:
            acc_num = int(input("Account Number: "))
            if acc_num in bank.accounts:
                bank.accounts[acc_num].check_balance()
            else:
                print("\nAccount not found")

        elif opt == 5:
            acc_num = int(input("Account Number: "))
            if acc_num in bank.accounts:
                bank.accounts[acc_num].show_transactions()
            else:
                print("\nAccount not found")

        elif opt == 6:
            if not bank.loan_system_on:
                print("\nThe bank is bankrupt!")
                return
            acc_num = int(input("Account Number: "))
            if acc_num in bank.accounts:
                amount = float(input("Loan Amount: "))
                bank.accounts[acc_num].take_loan(amount)
                bank.total_loans += amount
            else:
                print("\nAccount not found")

        elif opt == 7:
            from_acc = int(input("Your Account: "))
            to_acc = int(input("Recipient Account: "))
            amount = float(input("Amount: "))
            bank.transfer_money(from_acc, to_acc, amount)

        elif opt == 8:
            break

# for admin interation

def for_admin(bank):
    while True:
        print("\nAdmin Menu:")
        print("1. Create Account")
        print("2. Delete Account")
        print("3. List Accounts")
        print("4. Total Balance")
        print("5. Total Loans Taken")
        print("6. Turn OFF/ON Loan System")
        print("7. Exit")

        opt = int(input("Choose option: "))

        if opt == 1:
            name = input("Name: ")
            email = input("Email: ")
            address = input("Address: ")
            acc_type = input("Account Type (Savings/Current): ")
            bank.create_acc(name, email, address, acc_type)
        elif opt == 2:
            acc = int(input("Account Number: "))
            bank.delete_acc(acc)
        elif opt == 3:
            bank.list_acc()
        elif opt == 4:
            bank.total_balance()
        elif opt == 5:
            print(f"\nTotal Loans: {bank.total_loans}")
        elif opt == 6:
            bank.loan_system_on = not bank.loan_system_on
            status = "ON" if bank.loan_system_on else "OFF"
            print(f"\nLoan system turned {status}")
        elif opt == 7:
            break

# main

if __name__ == "__main__":
    b = Bank()
    while True:
        print("\nMain Menu:")
        print("1. User")
        print("2. Admin")
        print("3. Exit\n")
        opt = int(input("Choose option: "))

        if opt == 1:
            for_user(b)
        elif opt == 2:
            for_admin(b)
        elif opt == 3:
            break

# Mini-Bank System

This is a simple C++ program that simulates a mini-bank system where users can calculate the interest on their deposits. The program allows users to:

- Input bank details (principal amount and interest rate).
- Display the yearly amount for 10 years.
- Display the amount for a specified year.

## Features

- **Interest Calculation:** Computes compound interest for a specified number of years.
- **User-Friendly Interface:** Interactive console-based system.
- **Multiple Operations:** Users can perform multiple calculations in one session.

## How It Works

1. The user selects an option:
   - `1` to enter bank details.
   - `2` to display yearly amount for 10 years.
   - `3` to display the amount for a specific year.
2. The program calculates the interest using the compound interest formula:

   ```
   A = P * (1 + r)^n
   ```

   Where:
   - `A` = Final amount
   - `P` = Principal (initial deposit)
   - `r` = Interest rate
   - `n` = Number of years

3. The program outputs the results accordingly.

## Sample Output

```
======= WELCOME TO THE MINI-BANK SYSTEM =======
Press 
1 to input bank details 
2 to display yearly amount for 10 years 
3 to display the amount of certain specified year
1
Please enter the principal amount you want to deposit: 1000
What is the bank rate for the account type you chose? 0.05

Another Operation? (Y/N): Y

======= WELCOME TO THE MINI-BANK SYSTEM =======
Press 
1 to input bank details 
2 to display yearly amount for 10 years 
3 to display the amount of certain specified year
2
Year       Amount of deposit
1      1050
2      1102.5
3      1157.63
4      1215.51
5      1276.28
6      1340.1
7      1407.1
8      1477.46
9      1551.33
10      1628.89

Another Operation? (Y/N): N
Thank you for banking with us :)
```

## How to Run the Program

1. **Compile the Code:**
   ```sh
   g++ bank_system.cpp -o bank_system
   ```
2. **Run the Executable:**
   ```sh
   ./bank_system
   ```

## Contributing

Feel free to fork this repository and make improvements. Pull requests are welcome!

## License

This project is licensed under the MIT License.

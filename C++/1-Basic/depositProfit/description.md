
**Problem from CodeSignal.com:**


### Bank Account Balance Growth

You have deposited a specific amount of money into your bank account. Each year your balance increases at the same growth rate. With the assumption that you don't make any additional deposits, find out how long it would take for your balance to pass a specific threshold.

**Example**

For `deposit = 100`, `rate = 20`, and `threshold = 170`, the output should be `solution(deposit, rate, threshold) = 3`.

Each year the amount of money in your account increases by 20%. So throughout the years, your balance would be:

- Year 0: 100
- Year 1: 120
- Year 2: 144
- Year 3: 172.8

Thus, it will take 3 years for your balance to pass the threshold, so the answer is 3.

**Input/Output**

- **Input**: `int deposit`, `int rate`, `int threshold`
- **Output**: `int` (The number of years it would take to hit the threshold.)

**Constraints**

- 1 ≤ deposit ≤ 100.
- 1 ≤ rate ≤ 100.
- deposit < threshold ≤ 200.


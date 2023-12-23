**Problem from CodeSignal.com:**

An IP address is a numerical label assigned to each device (e.g., computer, printer) participating in a computer network that uses the Internet Protocol for communication. There are two versions of the Internet protocol, and thus two versions of addresses. One of them is the IPv4 address.

## Example

- For `inputString = "172.16.254.1"`, the output should be `solution(inputString) = true`.

- For `inputString = "172.316.254.1"`, the output should be `solution(inputString) = false`.

  316 is not in the range [0, 255].

- For `inputString = ".254.255.0"`, the output should be `solution(inputString) = false`.

  There is no first number.

## Input/Output

- **[execution time limit]** 0.5 seconds (cpp)
- **[memory limit]** 1 GB
- **[input]** string `inputString`

  A string consisting of digits, full stops, and lowercase English letters.

  Guaranteed constraints:
  1 ≤ `inputString.length` ≤ 30.

- **[output]** boolean

  `true` if `inputString` satisfies the IPv4 address naming rules, `false` otherwise.

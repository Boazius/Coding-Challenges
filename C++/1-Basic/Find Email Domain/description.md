**Problem from CodeSignal.com**

An email address such as "John.Smith@example.com" is made up of a local part ("John.Smith"), an "@" symbol, then a domain part ("example.com").

The domain name part of an email address may only consist of letters, digits, hyphens, and dots. The local part, however, also allows various special characters. Here are several examples of correct and incorrect email addresses.

**Example**

```markdown
For address = "prettyandsimple@example.com", the output should be
solution(address) = "example.com";

For address = "fully-qualified-domain@codesignal.com", the output should be
solution(address) = "codesignal.com".
```

**Input/Output**

```markdown
[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] string address

Guaranteed constraints:
10 ≤ address.length ≤ 50.

[output] string
```
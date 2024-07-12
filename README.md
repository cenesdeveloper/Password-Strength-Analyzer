# Password-Strength-Analyzer

## Overview
In the realm of cybersecurity, the strength of passwords plays a critical role in safeguarding sensitive information. The Password Strength Analyzer is a C program designed to assess password strength against various attack vectors, helping users create more secure passwords.

## Features
- **Main Menu**
  - Navigate through options to test a new password, view the strength of the last tested password, or exit.
- **Password Input**
  - Prompt for password entry, store it, and enforce a minimum length requirement.
- **Strength Tests**
  - Evaluate passwords based on the following criteria:
    - Presence of lowercase letters
    - Presence of uppercase letters
    - Presence of numerical digits
    - Presence of special characters (e.g., !@#$%^&*())
    - Length of the password (12+ characters)
- **Functions**
  - Modular functions for checking specific password criteria.
- **Password Strength Score**
  - Calculate a score based on criteria met, categorizing passwords as Weak, Moderate, or Strong.
- **Output**
  - Display the strength category of the password after analysis.

## Strength Tests
The Password Strength Analyzer evaluates passwords based on several criteria to determine their strength:
- **Lowercase Letters**: Checks if the password contains at least one lowercase letter.
- **Uppercase Letters**: Checks if the password contains at least one uppercase letter.
- **Numerical Digits**: Checks if the password contains at least one numerical digit.
- **Special Characters**: Checks if the password contains at least one special character from the set !@#$%^&*().
- **Length**: Awards additional points if the password is 12 characters or longer.

Each criterion met adds points to the password's strength score. For example, if a password includes lowercase letters and numerical digits, it would receive 2 points.

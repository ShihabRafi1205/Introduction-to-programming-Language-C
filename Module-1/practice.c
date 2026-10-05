#include<stdio.h>
// int main(){
//     int first ;
//     int second ;
//     scanf("%d %d", &first, &second);
//     printf("%d %d", second, first);
// }

// int main(){
//     float fi;
//     float si;
//     scanf("%f %f", &fi, &si);
//     printf("%.2f %.2f", si, fi);
// }




// Write all the rules for naming a variable in C programming.

// All the rules of naming a variable are : 

// 1. We can't start a variable with numbers or symbols but we can star by latters
//  or under score 

// 2. We can't gap between two characters .

// 3. Also we can't use a resarve key words .

// 1. Valid Characters
// A variable name can only contain:

// Letters — a–z and A–Z

// Digits — 0–9

// Underscore — _

// No other symbols (like @, #, $, -, ., !, etc.) are allowed.

// 2. First Character Rule
// The first character of a variable name must be:

// A letter (a–z, A–Z), or

// An underscore (_)

// It cannot be a digit.
// ✅ count1, _value, name
// ❌ 1count, 2ndPlace

// 3. No Spaces or Gaps
// Spaces are not allowed inside a variable name. Use an underscore instead if needed.
// ✅ total_marks, firstName
// ❌ total marks, first name

// 4. Reserved Keywords Cannot Be Used
// You cannot use C keywords (reserved words) as variable names, because they have special meaning to the compiler.
// ❌ int, float, if, else, while, return, for, do, break, case, char, void, etc.

// 5. Case Sensitivity
// C is case-sensitive, so uppercase and lowercase letters are treated as different.
// Sum, sum, and SUM are three different variables.

// 6. Length
// Standard C does not strictly limit the length, but only the first 31 characters (63 in C99 for internal names) are guaranteed to be significant. Best practice: keep names reasonably short but descriptive.

// 7. No Special Symbols or Operators
// Operators like +, -, *, /, %, &, #, etc. are not allowed.
// ❌ total+marks, a-b, rate%
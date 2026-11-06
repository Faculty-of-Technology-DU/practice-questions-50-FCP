# **FCP - 50 Programming Questions**

This repository contains 50 standalone C programming questions designed to develop conceptual understanding through practical problem-solving. Questions progress from basic expressions and control flow to arrays, functions, recursion, files, pointers, dynamic memory, structures, and unions.

Practice these problems at least 5 times each on your machines on plain Notepad / VI / VIM editors, and get ready for a theory + practical evaluation containing similar questions on **November 10, 2026**.

---

## **Compilation**

Compile each solution separately using `gcc -std=c11 -Wall -Wextra -pedantic solutions/q01_itemized_canteen_bill.c -o solution` (replace the source filename for other questions). For Q12 (quadratic roots), append `-lm`. Run the resulting executable and provide its requested input through standard input. File-based exercises Q42–Q44 use files in the current working directory.

---

## **Problem statements and source locations**

### Q01. Itemized canteen bill

**Problem statement:** Read the prices of three items and their quantities. Display each line total, the subtotal, 5% tax, and final payable amount to two decimal places. Assume nonnegative inputs. Require the output to make the contribution of each purchased item visible before calculating the bill. Explain through the displayed values why intermediate amounts should remain floating-point values rather than being rounded to integers.

**C source file:** [`solutions/q01_itemized_canteen_bill.c`](solutions/q01_itemized_canteen_bill.c)

---

### Q02. Clock time from elapsed seconds

**Problem statement:** Read a nonnegative number of elapsed seconds (less than one day). Display it as HH:MM:SS with leading zeros. Treat the input as a single elapsed-time quantity rather than three separate components. Your result must retain two digits per field even when a component is zero; consider the values 0, 59, 60, and 86399 as boundary tests.

**C source file:** [`solutions/q02_clock_time_from_elapsed_seconds.c`](solutions/q02_clock_time_from_elapsed_seconds.c)

---

### Q03. Dissect a four-digit locker code

**Problem statement:** Read an integer from 1000 to 9999. Print its thousands, hundreds, tens, and units digits, and compute their sum. Extract every digit using arithmetic instead of converting the number into a string. Keep the digit order from most significant to least significant and show that recombining the digits would recover the original code.

**C source file:** [`solutions/q03_dissect_a_four_digit_locker_code.c`](solutions/q03_dissect_a_four_digit_locker_code.c)

---

### Q04. Convert a measurement with numeric precision

**Problem statement:** Read a distance in centimetres as a double. Print metres, millimetres, and inches (1 inch = 2.54 cm). Also display the truncated whole metres. Show the fractional results with suitable precision and contrast them with an explicitly truncated whole-metre count. The exercise should expose the difference between a cast changing a value and a format specifier changing only its presentation.

**C source file:** [`solutions/q04_convert_a_measurement_with_numeric_precision.c`](solutions/q04_convert_a_measurement_with_numeric_precision.c)

---

### Q05. Operator-precedence audit

**Problem statement:** Read three integers `a`, `b`, and `c` (`c` nonzero). Evaluate and print `a + b * c`, `(a + b) * c`, and `a / c * b` using integer arithmetic. Explain why the results can differ. Predict the value of each expression before executing the program, then compare it with the printed result. Pay attention to where parentheses alter the order of operations and to the interaction of integer arithmetic with comparison operators.

**C source file:** [`solutions/q05_operator_precedence_audit.c`](solutions/q05_operator_precedence_audit.c)

---

### Q06. Average marks: integer versus floating division

**Problem statement:** Read three integer marks from 0 to 100. Print the truncated integer average and the floating-point average to two decimals. Calculate the average twice from the same three marks: once through integer arithmetic and once through floating-point arithmetic. Make the difference visible, including a test where the total is not divisible by three.

**C source file:** [`solutions/q06_average_marks_integer_versus_floating_division.c`](solutions/q06_average_marks_integer_versus_floating_division.c)

---

### Q07. Permissions as bits

**Problem statement:**
A computer system stores three file-access permissions—read, write, and execute—using the three least significant bits of an unsigned integer. The permissions are represented as follows:
- Bit 0 (value 1): Read permission
- Bit 1 (value 2): Write permission
- Bit 2 (value 4): Execute permission
Write a C program that accepts an unsigned integer between 0 and 7 (inclusive), representing the initial permission configuration.

The program must first examine the individual bits and display whether each permission is enabled (1) or disabled (0).

Next, modify the permissions in the following sequence:
1. Enable write permission using the bitwise OR (|) operator, without changing the other permission bits.
2. Using the updated permissions value, toggle execute permission using the bitwise XOR (^) operator. If execute permission is enabled, disable it; otherwise, enable it.
Display the updated integer permission mask after each operation. The program must perform both modifications on the same variable, so the second operation uses the result of the first.

If the input is outside the permitted range or cannot be read as an unsigned integer, terminate the program with a nonzero exit status.

Restriction: Use bitwise operators to examine and modify permissions. Do not use arithmetic addition or subtraction to enable or toggle individual bits.

**C source file:** [`solutions/q07_permissions_as_bits.c`](solutions/q07_permissions_as_bits.c)

---

### Q08. Short-circuit safety guard

**Problem statement:** Read `numerator` and `denominator`. Print the quotient only when the denominator is nonzero, by using a short-circuit logical condition. Design the test so that no division is attempted when the denominator is zero. Explain why short-circuit evaluation makes the expression safe and how the behavior would differ if both operands were always evaluated.

**C source file:** [`solutions/q08_short_circuit_safety_guard.c`](solutions/q08_short_circuit_safety_guard.c)

---

### Q09. Classify a triangle without invalid comparisons

**Problem statement:** Read three positive integer side lengths. Decide whether they form a triangle and, if so, label it equilateral, isosceles, or scalene. Assume each side is at most 10000. Reject invalid side lengths before classifying the triangle. Separate the validity check from the equal-side comparisons, and test examples of equilateral, isosceles, scalene, degenerate, and negative-side inputs.

**C source file:** [`solutions/q09_classify_a_triangle_without_invalid_comparisons.c`](solutions/q09_classify_a_triangle_without_invalid_comparisons.c)

---

### Q10. Validate a calendar date

**Problem statement:** Read day, month, and year (1–9999). Print whether the date is valid, including February 29 in leap years. Account for leap years using the complete Gregorian leap-year condition. Distinguish invalid months and years from invalid day numbers, and test February around leap-century exceptions such as 1900 and 2000.

**C source file:** [`solutions/q10_validate_a_calendar_date.c`](solutions/q10_validate_a_calendar_date.c)

---

### Q11. Progressive electricity billing

**Problem statement:** Read nonnegative integer units. Bill the first 100 units at 2 per unit, the next 100 at 3, and remaining units at 5. Add a fixed charge of 50. Use a slab-based charge where only the units falling into each price band use that band’s rate. Include inputs exactly at the slab boundaries to distinguish progressive billing from mistakenly charging all units at a single rate.

**C source file:** [`solutions/q11_progressive_electricity_billing.c`](solutions/q11_progressive_electricity_billing.c)

---

### Q12. Quadratic roots by discriminant

**Problem statement:** Read floating coefficients of `ax² + bx + c` with `a != 0`. Print the number and values of distinct real roots (or report no real roots). Handle three discriminant outcomes separately and avoid applying the quadratic formula when the coefficient of the squared term is zero. Print real roots with a consistent decimal precision and test repeated-root cases.

**C source file:** [`solutions/q12_quadratic_roots_by_discriminant.c`](solutions/q12_quadratic_roots_by_discriminant.c)

---

### Q13. Scholarship decision with independent conditions

**Problem statement:** Read attendance percentage, exam score, and annual income (nonnegative). Award scholarship when attendance ≥ 75, score ≥ 85, and income ≤ 300000; otherwise print each unmet condition. Evaluate the combined eligibility rule first; when it fails, report every failed requirement, not merely the first one. This should illustrate when independent `if` statements are preferable to an `else if` chain.

**C source file:** [`solutions/q13_scholarship_decision_with_independent_conditions.c`](solutions/q13_scholarship_decision_with_independent_conditions.c)

---

### Q14. Reverse digits and detect numeric palindromes

**Problem statement:** Read a nonnegative integer up to 1,000,000,000. Reverse its digits and report whether the original number is a palindrome. Reverse the number mathematically, preserving the meaning of leading zeros in the reversed digits, and compare it with the original. Check zero, one-digit values, and numbers ending in zero.

**C source file:** [`solutions/q14_reverse_digits_and_detect_numeric_palindromes.c`](solutions/q14_reverse_digits_and_detect_numeric_palindromes.c)

---

### Q15. Prime test without scanning every integer

**Problem statement:** Read `n` from 2 to 1,000,000. Decide whether it is prime by testing divisors no larger than its square root, without calling `sqrt`. Determine primality without testing all smaller integers. Explain the stopping condition for candidate divisors and assess what happens on small inputs such as 2, 3, 4, and large primes.

**C source file:** [`solutions/q15_prime_test_without_scanning_every_integer.c`](solutions/q15_prime_test_without_scanning_every_integer.c)

---

### Q16. Armstrong-number checker using do-while

**Problem statement:** Read a nonnegative integer up to 999999. Determine whether it equals the sum of its digits each raised to the number of digits. For example, 153 qualifies. Count the number of decimal digits before summing each digit raised to that count. Use a `do-while` loop in a way that correctly processes zero as a one-digit number.

**C source file:** [`solutions/q16_armstrong_number_checker_using_do_while.c`](solutions/q16_armstrong_number_checker_using_do_while.c)

---

### Q17. Euclidean algorithm and least common multiple

**Problem statement:** Read two positive integers at most 100000. Compute their GCD using Euclid’s algorithm and their LCM without overflowing an `int`. Implement Euclid’s iterative remainder method and derive the least common multiple from the greatest common divisor. Include equal inputs and relatively prime inputs to establish the relationship.

**C source file:** [`solutions/q17_euclidean_algorithm_and_least_common_multiple.c`](solutions/q17_euclidean_algorithm_and_least_common_multiple.c)

---

### Q18. Alternating harmonic partial sum

**Problem statement:** Read an integer `n` between 1 and 100000. Compute `1 − 1/2 + 1/3 − ...` for `n` terms, displaying ten decimal places. Accumulate a finite alternating series using a loop and a floating-point accumulator. Print enough digits to observe changes as the term count grows, and take care not to perform integer division accidentally.

**C source file:** [`solutions/q18_alternating_harmonic_partial_sum.c`](solutions/q18_alternating_harmonic_partial_sum.c)

---

### Q19. Collatz trajectory with a safety limit

**Problem statement:** Read a positive integer no greater than 10000. Repeatedly replace an even value with `n/2` and an odd value with `3n+1`. Stop at 1 or after 1000 updates and print steps taken. Print the sequence generated by repeatedly applying the even/odd Collatz rule and count the transitions. Enforce the stated iteration cap so the program always terminates, even if a sequence is unexpectedly long.

**C source file:** [`solutions/q19_collatz_trajectory_with_a_safety_limit.c`](solutions/q19_collatz_trajectory_with_a_safety_limit.c)

---

### Q20. Menu-driven geometric calculator

**Problem statement:** Read a choice (1 = square area, 2 = rectangle area, 3 = circle area) followed by one or two dimensions. Reject invalid selections and negative dimensions. Implement a numeric menu where each supported choice reads only the operands it needs. Use `switch` to select a calculation and explicit `break` statements to prevent unintended fall-through.

**C source file:** [`solutions/q20_menu_driven_geometric_calculator.c`](solutions/q20_menu_driven_geometric_calculator.c)

---

### Q21. Days in a month using switch

**Problem statement:** Read month (1–12) and positive year. Print its number of days using grouped `case` labels and a February leap-year check. Combine a `switch` on the month with a leap-year calculation for February. Handle illegal month values explicitly and make the distinction between a grouped set of month cases and a separately handled February clear.

**C source file:** [`solutions/q21_days_in_a_month_using_switch.c`](solutions/q21_days_in_a_month_using_switch.c)

---

### Q22. Grade distribution from a stream of letter grades

**Problem statement:** Read non-whitespace grade characters until `#`. Count A, B, C, D, and F; count all other characters as invalid. `#` terminates input. Consume a stream of grade letters until the designated terminator is encountered. Count grade categories independently, ignore or reject unsupported characters according to the specified design, and show why `break` inside a switch differs from `break` inside a loop.

**C source file:** [`solutions/q22_grade_distribution_from_a_stream_of_letter_grades.c`](solutions/q22_grade_distribution_from_a_stream_of_letter_grades.c)

---

### Q23. Rainfall anomalies in a 1-D array

**Problem statement:** Read `n` (1–100) and `n` daily rainfall measurements. Print the mean, the number of days above the mean, and the zero-based index of the first maximum. Store all measurements before computing the mean, the number above the mean, and the position of a maximum. Separate array indexing from the values stored in the array, and specify how to break ties for the maximum.

**C source file:** [`solutions/q23_rainfall_anomalies_in_a_1_d_array.c`](solutions/q23_rainfall_anomalies_in_a_1_d_array.c)

---

### Q24. Right-rotate an array without a second array

**Problem statement:** Read `n` (1–100), `n` integers, and a nonnegative rotation `k`. Right-rotate the array by `k` positions using O(1) additional memory. Perform a circular right rotation in place without allocating another array. Reduce rotations larger than the array size using modulo arithmetic and verify that all elements are preserved in the new order.

**C source file:** [`solutions/q24_right_rotate_an_array_without_a_second_array.c`](solutions/q24_right_rotate_an_array_without_a_second_array.c)

---

### Q25. Insert into an already-sorted array

**Problem statement:** Read `n` (0–99), an ascending array of `n` integers, and one new integer. Insert it into the correct position without sorting again. Read an already sorted sequence, check that its order is valid, and insert one additional element while preserving ascending order. Shift existing elements safely from right to left so that no unread value is overwritten.

**C source file:** [`solutions/q25_insert_into_an_already_sorted_array.c`](solutions/q25_insert_into_an_already_sorted_array.c)

---

### Q26. Row and column totals in a seating grid

**Problem statement:** Read a matrix of integers of size `rows × cols` (each from 1 to 10). Print every row sum and every column sum. Treat a rectangular grid as a two-dimensional array. Calculate and print each row total and each column total independently, clarifying which subscript varies in each traversal.

**C source file:** [`solutions/q26_row_and_column_totals_in_a_seating_grid.c`](solutions/q26_row_and_column_totals_in_a_seating_grid.c)

---

### Q27. Spiral traversal of a rectangular matrix

**Problem statement:** Read a `rows × cols` integer matrix, with dimensions from 1 to 10. Print its elements in clockwise spiral order, starting from the top left. Print a rectangular matrix in clockwise spiral order by maintaining shrinking top, bottom, left, and right boundaries. Make the implementation work for non-square matrices and one-row or one-column cases without repetition.

**C source file:** [`solutions/q27_spiral_traversal_of_a_rectangular_matrix.c`](solutions/q27_spiral_traversal_of_a_rectangular_matrix.c)

---

### Q28. Compare row-major and column-major offsets

**Problem statement:** Read positive row and column counts, a valid zero-based `(row, col)` position, and element size in bytes. Compute its byte offset in a conceptual row-major and column-major storage layout. Compute linear offsets for the same matrix cell under both row-major and column-major conventions. Use the supplied base address and element width to convert those offsets into model memory addresses, without dereferencing fabricated pointers.

**C source file:** [`solutions/q28_compare_row_major_and_column_major_offsets.c`](solutions/q28_compare_row_major_and_column_major_offsets.c)

---

### Q29. Generic N-D address calculator

**Problem statement:** Read dimensionality `d` (1–8), then `d` dimension lengths and `d` zero-based indices, a base address (integer), and element width in bytes. Compute the row-major and column-major addresses. Test `d=1,2,3,4`. Assume results fit `unsigned long long`. Generalize multidimensional linear indexing to between one and eight dimensions. Read each dimension length and the corresponding zero-based subscript, validate bounds, and calculate the row-major and column-major linear offset before applying the element width and base address.

**C source file:** [`solutions/q29_generic_n_d_address_calculator.c`](solutions/q29_generic_n_d_address_calculator.c)

---

### Q30. Character histogram of a sentence

**Problem statement:** Read one line containing at most 199 characters. Count vowels (case-insensitive), consonants, digits, whitespace, and other characters. Assume English letters. Scan an entire sentence as a character array and classify characters without destroying the original text. Distinguish vowels, consonants, digits, whitespace, and all remaining characters; use character-library functions safely.

**C source file:** [`solutions/q30_character_histogram_of_a_sentence.c`](solutions/q30_character_histogram_of_a_sentence.c)

---

### Q31. Phrase palindrome ignoring punctuation

**Problem statement:** Read a line of up to 199 characters. Decide whether it is a palindrome after ignoring case and all non-alphanumeric characters. Decide whether a phrase reads the same forward and backward after ignoring non-alphanumeric characters and letter case. Use two indices moving inward rather than creating a separate reversed string.

**C source file:** [`solutions/q31_phrase_palindrome_ignoring_punctuation.c`](solutions/q31_phrase_palindrome_ignoring_punctuation.c)

---

### Q32. Longest word without strtok

**Problem statement:** Read a line (≤199 characters) and print the length of the longest contiguous run of English letters. Count a word as letters A–Z or a–z only. Identify words directly by scanning the character array without `strtok`. Count the number of words and find the longest run of alphabetic characters, including correct behavior when delimiters repeat.

**C source file:** [`solutions/q32_longest_word_without_strtok.c`](solutions/q32_longest_word_without_strtok.c)

---

### Q33. Find every overlapping substring match

**Problem statement:** Read a text line and a nonempty pattern line, each at most 199 characters. Print all zero-based starting positions where the pattern occurs, including overlapping matches. Find every starting index at which a pattern matches the text, including overlapping matches. Clarify why advancing by just one position after a match is needed for patterns such as `ana` within `banana`.

**C source file:** [`solutions/q33_find_every_overlapping_substring_match.c`](solutions/q33_find_every_overlapping_substring_match.c)

---

### Q34. Factor an expression into reusable functions

**Problem statement:** Define `square(int)` and `sum_of_squares(int,int)` and use them to evaluate the squared distance from the origin of `(x,y)`. Accept coordinates from −10000 to 10000. Split a calculation into small reusable functions rather than placing all arithmetic in `main`. Choose return types that preserve the required numeric range and demonstrate that a helper can call another helper.

**C source file:** [`solutions/q34_factor_an_expression_into_reusable_functions.c`](solutions/q34_factor_an_expression_into_reusable_functions.c)

---

### Q35. Why swapping by value fails

**Problem statement:** Implement a function that *tries* to swap by value and another that swaps through pointers. Read two integers and show the caller’s values after each call. Compare a function receiving two ordinary integer parameters with one receiving the addresses of two integers. Print the caller’s values before and after both calls to demonstrate why C passes arguments by value, including pointer values.

**C source file:** [`solutions/q35_why_swapping_by_value_fails.c`](solutions/q35_why_swapping_by_value_fails.c)

---

### Q36. Statistics through an array parameter

**Problem statement:** Write `compute_mean` and `compute_variance` functions taking a `const double[]` and length. Read `n` values (1–100), print population mean and variance. Write statistical helpers that accept an array and an explicit element count. Calculate the mean and another summary statistic while ensuring that a helper does not assume the array length can be recovered from its parameter.

**C source file:** [`solutions/q36_statistics_through_an_array_parameter.c`](solutions/q36_statistics_through_an_array_parameter.c)

---

### Q37. Pass a 2-D matrix to a function

**Problem statement:** Read a `rows × cols` integer matrix with `rows, cols ≤ 5`. Pass it to `matrix_sum` and return the sum. Declare the receiving parameter with a fixed second dimension of 5. Pass a two-dimensional array to a separate function and compute an aggregate over the valid rows and columns. Explain through the declaration why the compiler needs the column stride to find a row’s elements.

**C source file:** [`solutions/q37_pass_a_2_d_matrix_to_a_function.c`](solutions/q37_pass_a_2_d_matrix_to_a_function.c)

---

### Q38. Contrast void-returning and value-returning functions

**Problem statement:** Write `divide_checked` returning an `int` success flag and setting a double result through a pointer. Also write one `void` function that prints a result, then call both from `main`. Contrast a status-returning function that writes a computed result through a pointer with a printing function that returns `void`. Call each appropriately and explain why the caller must check the status before using the result.

**C source file:** [`solutions/q38_contrast_void_returning_and_value_returning_functions.c`](solutions/q38_contrast_void_returning_and_value_returning_functions.c)

---

### Q39. Recursive sum of digits

**Problem statement:** Define a recursive function to return the sum of decimal digits of a nonnegative integer up to 1,000,000,000. Implement the decimal digit-sum calculation recursively with an explicit base case. Trace a sample call chain and show how each pending recursive call contributes one digit during unwinding.

**C source file:** [`solutions/q39_recursive_sum_of_digits.c`](solutions/q39_recursive_sum_of_digits.c)

---

### Q40. Recursive binary search with inclusive bounds

**Problem statement:** Read a sorted nondecreasing array of `n` integers (1–100), then a target. Use recursion to return the zero-based index of one occurrence, or −1 if absent. Search a sorted array recursively using inclusive left and right boundaries. Handle a missing value, a singleton range, and the case where the lower bound exceeds the upper bound.

**C source file:** [`solutions/q40_recursive_binary_search_with_inclusive_bounds.c`](solutions/q40_recursive_binary_search_with_inclusive_bounds.c)

---

### Q41. Tower of Hanoi move generator

**Problem statement:** Read the number of disks 1–10. Recursively print each move from rod A to C using B, then print the total moves as the function’s return value. Print the individual legal moves that transfer a stack of disks using an auxiliary peg. Return the total number of moves from the recursive function and confirm the count for small disk numbers.

**C source file:** [`solutions/q41_tower_of_hanoi_move_generator.c`](solutions/q41_tower_of_hanoi_move_generator.c)

---

### Q42. Analyze a numeric file

**Problem statement:** Read floating-point numbers from a file named `numbers.txt` (one or more per line). Print count, minimum, maximum, and mean. Reject empty files and invalid tokens. Read numeric records from a text file and compute their count, minimum, maximum, and average. Distinguish a clean end of file from malformed input or an I/O failure, and handle an empty file deliberately.

**C source file:** [`solutions/q42_analyze_a_numeric_file.c`](solutions/q42_analyze_a_numeric_file.c)

---

### Q43. Copy a text file while numbering lines

**Problem statement:** Read `source.txt`, create `numbered.txt`, and prefix each line with `1: `, `2: `, etc. Support lines up to 199 characters; report if a line is longer. Copy a source text file to a destination file with a line number preceding every line. Ensure long lines and I/O failures are not silently mistaken for successful copies, and close both streams on all relevant paths.

**C source file:** [`solutions/q43_copy_a_text_file_while_numbering_lines.c`](solutions/q43_copy_a_text_file_while_numbering_lines.c)

---

### Q44. Write and read a binary inventory record

**Problem statement:** Read an integer product ID, price, and stock count. Write one record to `inventory.bin` using `fwrite`, reopen, read with `fread`, and print it. Serialize a structure to a binary file and read it back into another structure. Verify every file operation and explain that raw binary structure files may not be portable across machines with different layouts.

**C source file:** [`solutions/q44_write_and_read_a_binary_inventory_record.c`](solutions/q44_write_and_read_a_binary_inventory_record.c)

---

### Q45. Pointer walk versus array indexing

**Problem statement:** Read five integers into an array. Print every element twice: once using `values[index]`, and once using `*(values + index)`. Print their sums. Traverse one array using ordinary indexing and again using pointer arithmetic. Compare the corresponding values and addresses to expose the relationship between `array[index]` and `*(array + index)`.

**C source file:** [`solutions/q45_pointer_walk_versus_array_indexing.c`](solutions/q45_pointer_walk_versus_array_indexing.c)

---

### Q46. Grow a dynamic array using realloc

**Problem statement:** Read `n` (1–100) integers into dynamically allocated storage, then read `m` (0–100) additional integers. Grow the allocation with `realloc`, append, and print the total sum. Allocate an initial array on the heap, then increase its capacity with `realloc` to accommodate extra elements. Use a temporary pointer for resizing so an allocation failure never loses the original allocation.

**C source file:** [`solutions/q46_grow_a_dynamic_array_using_realloc.c`](solutions/q46_grow_a_dynamic_array_using_realloc.c)

---

### Q47. Dynamically allocated 2-D grid

**Problem statement:** Read `rows` and `cols` (each 1–20), allocate one contiguous `int` block for the grid, read entries, and compute the main-diagonal sum up to the smaller dimension. Represent a two-dimensional grid using one dynamically allocated contiguous block. Map each `(row, column)` pair to its corresponding linear offset and release the allocation when finished.

**C source file:** [`solutions/q47_dynamically_allocated_2_d_grid.c`](solutions/q47_dynamically_allocated_2_d_grid.c)

---

### Q48. Sort an array of student structures

**Problem statement:** Read `n` (1–30) students, each with one-word name (max 29 chars), roll number, and marks. Sort by descending marks, breaking ties by ascending roll number. Print the complete records. Store records in an array of structures and sort them according to marks, with roll numbers resolving ties. Keep all fields of each student record together during a swap and print the fully ordered records.

**C source file:** [`solutions/q48_sort_an_array_of_student_structures.c`](solutions/q48_sort_an_array_of_student_structures.c)

---

### Q49. Heterogeneous sensor readings in an array of tagged unions

**Problem statement:** Read `n` (1–30) sensor records. Each record has a type `I` (integer count), `F` (floating temperature), or `C` (single-character status), followed by its value. Store the value in a union inside a tagged structure and print all records safely. Store readings with different payload types in an array of structures containing tagged unions. Select the correct union member using the tag on both input and output; do not attempt to read an inactive member.

**C source file:** [`solutions/q49_heterogeneous_sensor_readings_in_an_array_of_tagged_unions.c`](solutions/q49_heterogeneous_sensor_readings_in_an_array_of_tagged_unions.c)

---

### Q50. Memory-layout laboratory: structures versus unions

**Problem statement:** Define a structure and union containing `char`, `int`, and `double`. Print the size of each member type, both aggregate types, and arrays of five aggregates. Compare sizes and explain any padding. Compare the byte sizes of a structure and union containing comparable fields, then examine arrays of these types. Explain why union storage is shared and why padding and alignment can make its size exceed the size of its largest declared member.

**C source file:** [`solutions/q50_memory_layout_laboratory_structures_versus_unions.c`](solutions/q50_memory_layout_laboratory_structures_versus_unions.c)

---

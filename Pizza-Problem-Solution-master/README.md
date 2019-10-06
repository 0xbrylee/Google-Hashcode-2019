This is my solution for the test round problem of 2018 Google Hashcode challenge.

There is provided the solution verifier written in Python 3, so you can easy check
your own solution and comapre it with mine. The verifier was tested based on values
returned by the Judge System.

The solver code is written in C++17, so you have to use a compiler that supports
the standard (I use GCC 7.2). The code needs some refactoring and improvement,
probably I'll integrate the verifier with the solver code.
# The problem
The problem statement is placed in `pizza.pdf` file. All data provided by Google are in
`input_data` directory.
# Results
Full solution is in `output_data` directory.

Here are the points:

| Case      | Points |
|-----------|--------|
| example   | 15     |
| small     | 38     |
| medium    | 48545  |
| big       | 864219 |
| **TOTAL** | 912817 |
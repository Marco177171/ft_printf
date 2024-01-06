# ft_printf

Welcome to the ft_printf project! This project focuses on recreating a fully functional `printf` function from `stdio.h` in C. 

## Project Overview

The primary goal of this project is to reimplement the `printf` function, which is an essential part of the C standard library. Through this project, we delve deep into understanding the inner workings of printf, its formatting options, and the intricate mechanisms behind its functionality.

### Key Objectives

- **Precise Formatting**: Implementing various format specifiers and handling different data types with accuracy.
- **Output Handling**: Managing the output stream and ensuring consistent and correct display of formatted data.
- **Error Handling**: Implementing error checks and robust error handling mechanisms.

## Features Implemented

- **Format Specifiers**: Support for `%c`, `%s`, `%d`, `%f`, `%x`, `%o`, `%u`, and more.
- **Width and Precision Specifiers**: Handling width and precision formatting options.
- **Flags**: Support for flags like `+`, `-`, `0`, `space`, and `#`.

## How to Use

1. Clone the repository to your local machine.
2. Compile the code using a C compiler.
3. Include the header file and use the `my_printf` function similar to `printf`.

### Example Usage

```c
#include "my_printf.h"

int main() {
    int num = 42;
    ft_printf("Hello, world! This is a number: %d\n", num);
    return 0;
}
```

### Contribution Guidelines
Contributions to this project are welcome! Feel free to suggest enhancements, fix bugs, or improve the implementation of the printf function.

How to Contribute
Fork the repository.
Make changes and improvements.
Submit a pull request with a descriptive explanation of the changes made.
Contact Information
If you have any questions, suggestions, or would like to discuss this project further, please reach out:

Email: msebastiani93@gmail.com
GitHub: https://github.com/Marco177171
Thank you for exploring the printf_recreation project! Your interest and contributions are highly appreciated.

Best regards,
Marco Sebastiani

- Unexpected errors at runtime is called exception, and handling that is called exception handling.
```
ex: divide by zero, 
``` 
**Syntax**
```
try {
    // code that may throw an exception
} catch (exceptionType e) {
    // code to handle the exception
}
```

**Types of exception in cpp:**
```
C++ provides a hierarchy of exception classes to handle different error conditions. These can be broadly categorized as standard exceptions and custom exceptions.
Standard Exceptions
These are exceptions defined in the C++ standard library, and they are typically derived from the std::exception base class. They can be further divided into:
Logic errors:
These represent errors in the program's internal logic that are theoretically detectable before runtime.
std::domain_error: Reported when a mathematical domain error occurs.
std::invalid_argument: Thrown due to invalid arguments passed to a function.
std::length_error: Thrown when an attempt is made to create an object exceeding its maximum size.
std::out_of_range: Thrown when trying to access elements beyond the valid range (e.g., in vectors or arrays).
Runtime errors:
These represent errors that can only be detected during runtime.
std::runtime_error: A base class for runtime errors that do not fall into more specific categories.
std::range_error: Reported when a computation results in a value outside the representable range.
std::overflow_error: Thrown if a mathematical overflow occurs.
std::underflow_error: Thrown if a mathematical underflow occurs.
Other Standard Exceptions
std::bad_alloc: Thrown when dynamic memory allocation fails (e.g., using new).
std::bad_cast: Thrown during an invalid dynamic_cast.
std::bad_typeid: Thrown by typeid when used on a null pointer.
std::bad_exception: Used in exception handling mechanisms.
```
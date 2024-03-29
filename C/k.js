console.log("Hello, World!");

// Define a function to calculate the factorial of a number
function factorial(n) {
    if (n === 0 || n === 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Call the factorial function and log the result
const num = 5;
const result = factorial(num);
console.log(`The factorial of ${num} is ${result}`);
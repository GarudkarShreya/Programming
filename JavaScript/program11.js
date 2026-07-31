// Check number is Divisible by 3 and 5

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter number : ", (value) => {

    if((value % 3 == 0) && (value % 5 == 0))
    {
        console.log("Number is divisible by 3 and 5");
    }
    else
    {
        console.log("Not divisible by 3 and 5");
    }

    rl.close();
})


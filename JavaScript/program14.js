// Check number is Divisible by 3 and 5

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function CheckDivisible(No)
{
   return((No % 3 == 0) && (No % 5 == 0));
}

rl.question("Enter number : ", (value) => {
    
    value = CheckDivisible(Number(value));

    if(value == true)
    {
        console.log("Number is divisible by 3 and 5");
    }
    else
    {
        console.log("Not divisible by 3 and 5");
    }
    rl.close();
})


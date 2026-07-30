// require("readline") = include<stdio.h>
const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function Add(a,b)
{
    let Ans = 0;

    Ans = a + b;

    return Ans;
}

// rl.question = scanf();
rl.question("Enter first number: ", (num1) => {
rl.question("Enter second number: ", (num2) => {

    let Ans = Add(Number(num1), Number(num2));


console.log("Addition : ",Ans);     // printf();

        rl.close();                // return 0;
    }); 
});
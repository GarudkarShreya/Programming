// CHECK EVEN OR ODD

const { stdin, stdout } = require("process");
const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function CheckEvenOdd(a)
{
    if(a % 2 == 0)
    {
        console.log("Number is even");
    }
    else
    {
        console.log("Number is odd");
    }
}

rl.question("Enter a number : ", (num) => {

      let Result = CheckEvenOdd(num);

      rl.close();
})
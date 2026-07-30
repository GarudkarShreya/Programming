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
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

rl.question("Enter a number : ", (num) => {

      let Result = CheckEvenOdd(Number(num));

      console.log("Number is",Result);

      rl.close();
})
const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function Display(num)
{
    for(let i =1;i <= num;i++)
  {
    console.log("Jay Ganesh");
  }

}

rl.question("Enter the number of frequncy : ",(value) => {

    Display(Number(value));

    rl.close();
})


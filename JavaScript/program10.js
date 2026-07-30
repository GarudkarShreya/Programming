const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function Display(num)
{
  if(num < 0)
  {
    num = -num;
  }
  
  for(let i =1;i <= num;i++)
  {
    console.log("Jay Ganesh");
  }

}

rl.question("Enter the number of frequncy : ",(value) => {

    Display(Number(value));

    rl.close();
})


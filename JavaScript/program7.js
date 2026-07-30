// Ticket price according to age 

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function CalculateTicketPrice(age)
{
    if(age < 0)
    {
        return -1;
    }

    if (age >= 0 && age <= 5) 
    {  
        return 0;
    }
    else if(age >= 6 && age <= 18)
    {
        return 500;
    }
    else if(age >= 19 && age <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}

let value = 0;

rl.question("Please enter your age : ",(age) => {

    let value = CalculateTicketPrice(Number(age));

    console.log("Ticket price : ",value);

    rl.close();

})
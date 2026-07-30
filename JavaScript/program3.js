function Add(a,b)
{
    let Ans = 0;

    Ans = a + b;

    return Ans;
}

// PROMPT IS APPLICABLE OR USE IN WEB BROWSER NOT IN NODE.JS

let num1 = Number(prompt("Enter first number : "));
let num2 = Number(prompt("Enter second number : "));

let Ans = Add(num1,num2);

console.log("Addition : ",Ans);


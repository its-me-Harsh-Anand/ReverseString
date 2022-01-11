let string = "Harsh"

let reversed = ""

for(let i=0; i<string.length; i++){
    reversed = string.charAt(i) + reversed
}

console.log(reversed)
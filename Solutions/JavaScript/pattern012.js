// Pattern Programs - 012 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""
let n = 5
let x

for(let i=1; i<=n; i++){
    x = i
    for(let j=1; j<=n; j++){
        pattern += x.toString().padStart(3," ")
        x += n
    }
    pattern += "\n"
}
console.log(pattern)
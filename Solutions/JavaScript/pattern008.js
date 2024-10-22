// Pattern Programs - 008 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""
let n = 5
let x = 2 

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
        pattern += x.toString().padStart(3," ")
        x += 2
    }
    pattern += "\n"
}
console.log(pattern)
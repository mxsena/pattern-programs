// Pattern Programs - 010 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""
for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <= 3; j++) {
        pattern += j + " " + i + " "
    }
    pattern += "\n"
}
console.log(pattern)

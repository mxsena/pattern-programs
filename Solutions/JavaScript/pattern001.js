// Pattern Programs - 001 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""

for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <=5; j++) {
        pattern += "* "
    }
    pattern += "\n"
}
console.log(pattern)
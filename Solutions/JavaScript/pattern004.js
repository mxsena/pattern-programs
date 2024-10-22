// Pattern Programs - 004 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""

for (let i = 5; i >= 1; i--) {
    for (let j = i; j <= 5; j++) {
        pattern += i + " "
    }
    pattern += "\n"
}
console.log(pattern)
// Pattern Programs - 006 [JavaScript]
// Github Repository: https://github.com/mxsena/pattern-programs
let pattern = ""
let n = 5
let k = 1

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
        pattern += k.toString().padStart(3, " ")
        k++
    }
    pattern += "\n"
}
console.log(pattern)
let pattern = ""
let n = 5
for (let i = 1; i <= n; i++){
    for (let j = 1; j <= n; j++) {
        pattern += (i*j).toString().padStart(3," ")
    }
    pattern += "\n"
}
console.log(pattern)

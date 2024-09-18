let pattern = ""

for (let i = 5; i >= 1; i--) {
    for (let j = 5; j >= 1; j--) {
        pattern += j + " "
    }
    pattern += "\n"
}
console.log(pattern)
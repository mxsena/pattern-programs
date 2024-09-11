/* Pattern 008

.        2  4  6  8 10
.       12 14 16 18 20
.       22 24 26 28 30
.       32 34 36 38 40
.       42 44 46 48 50

*/

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
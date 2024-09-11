/* Pattern 007

.        1  3  5  7  9
.       11 13 15 17 19
.       21 23 25 27 29
.       31 33 35 37 39
.       41 43 45 47 49

*/

let pattern = ""
let n = 5
let x = 1

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
        pattern += x.toString().padStart(3," ")
        x += 2
    }
    pattern += "\n"
}
console.log(pattern)
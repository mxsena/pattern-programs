/* Pattern 006

.        1  2  3  4  5
.        6  7  8  9 10
.       11 12 13 14 15
.       16 17 18 19 20
.       21 22 23 24 25

*/

let pattern = ""
let n = 5
let k = 1

for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
        pattern += k.toString().padStart(3, " ");
        k++
    }
    pattern += "\n"
}
console.log(pattern)
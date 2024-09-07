/* Pattern #004

.       5 5 5 5 5
.       4 4 4 4 4
.       3 3 3 3 3
.       2 2 2 2 2
.       1 1 1 1 1

*/

let pattern = ""

for (let i = 5; i >= 1; i--) {
    for (let j = i; j <= 5; j++) {
        pattern += i + " "
    }
    pattern += "\n"
}
console.log(pattern)
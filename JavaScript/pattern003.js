/* Pattern #003

.       1 2 3 4 5
.       1 2 3 4 5
.       1 2 3 4 5
.       1 2 3 4 5
.       1 2 3 4 5

*/

let pattern = ""

for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <= 5; j++) {
        pattern += j + " "
    }
    pattern += "\n"
}
console.log(pattern)
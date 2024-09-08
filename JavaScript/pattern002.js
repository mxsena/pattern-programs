/* Pattern #002

.       1 1 1 1 1
.       2 2 2 2 2
.       3 3 3 3 3
.       4 4 4 4 4
.       5 5 5 5 5

*/

let pattern = ""

for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <= 5; j++) {
        pattern += i + " "
    }
    pattern += "\n"
}
console.log(pattern)

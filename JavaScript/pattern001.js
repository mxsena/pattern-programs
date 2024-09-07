/* Pattern #001

.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *

*/

let pattern = ""

for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <=5; j++) {
        pattern += "* "
    }
    pattern += "\n"
}
console.log(pattern)
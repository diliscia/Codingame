/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const N = parseInt(readline());
var minDif = 10000000;
var p = [];
var sp = [];
for (let i = 0; i < N; i++) {
    const pi = parseInt(readline());
    p.push(pi);
}

p.sort(function(a, b){return a-b});; 

for (let j = 0; j < N-1; j++) {
    if (p[j+1] - p[j] < minDif) {
        minDif = p[j+1] - p[j];
    }
}

// Write an answer using console.log()
// To debug: console.error('Debug messages...');

console.log(minDif)

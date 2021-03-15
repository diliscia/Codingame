/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const n = parseInt(readline()); // the number of temperatures to analyse
var inputs = readline().split(' ');
var dif = 5526;
var dif2 = 0;
var result = 0;
for (let i = 0; i < n; i++) {
    const t = parseInt(inputs[i]);// a temperature expressed as an integer ranging from -273 to 5526
    dif2 = Math.abs(t-0);   // calculate absolute difference to reference
    if (dif2 < dif) {       // if is inferior 
        dif = dif2;         // if is inferior 
        result = t;         // keep this temperatue
    }
    else if (dif2 == dif && t > result) {   // for the case where the difference is the same
        result = t;                         // we keep only the positive temperature 
    }
    else if (dif2 == '') {                  // for the case where is no temperature
        result = 0;                         // output is zero "0"
    }
}

// Write an answer using console.log()
// To debug: console.error('Debug messages...');
console.log(result);

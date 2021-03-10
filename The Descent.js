/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

// game loop
while (true) {
    var max = 0;    // heightest mountain 
    var imax = 0;   // i of the highest mountain
    for (let i = 0; i < 8; i++) {
        const mountainH = parseInt(readline()); // represents the height of one mountain.
        if (mountainH >= max) { // compares the height of the mountain with the stored max
            max = mountainH;    // assigns the new value if the height was bigger than the max
            imax = i;   // identifies the number the highest mountain
        }
    }

    // Write an action using console.log()
    // To debug: console.error('Debug messages...');

    console.log(imax);     // The index of the mountain to fire on.

}

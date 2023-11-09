#include <windows.h>

// Function to play a musical note (frequency in Hz and duration in ms)
void playNote(int frequency, int duration) {
    Beep(frequency, duration);
    Sleep(100); // Add a brief pause between notes
}

int main() {
    int E4 = 329;  // E
    int D4 = 293;  // D
    int C4 = 261;  // Middle C

    // Play "Mary Had a Little Lamb"
    playNote(E4, 200);
    playNote(D4, 200);
    playNote(C4, 200);
    playNote(D4, 200);
    playNote(E4, 200);
    playNote(E4, 200);
    playNote(E4, 400);

    playNote(D4, 200);
    playNote(D4, 200);
    playNote(D4, 400);

    playNote(E4, 200);
    playNote(E4, 200);
    playNote(E4, 400);

    playNote(E4, 200);
    playNote(D4, 200);
    playNote(C4, 200);
    playNote(D4, 200);
    playNote(E4, 200);
    playNote(E4, 200);
    playNote(E4, 400);

    return 0;
}

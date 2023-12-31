#include <windows.h>

// Function to play a musical note (frequency in Hz and duration in ms)
void playNote(int frequency, int duration) {
    Beep(frequency, duration);
    Sleep(100); // Add a brief pause between notes
}

int main() {
    // Define frequencies for musical notes
    int C4 = 261;  // Middle C
    int D4 = 293;  // D
    int E4 = 329;  // E
    int F4 = 349;  // F
    int G4 = 392;  // G
    int A4 = 440;  // A
    int B4 = 493;  // B

    // Play "Twinkle, Twinkle, Little Star" for 35 seconds
    for (int i = 0; i < 2; i++) {
        playNote(C4, 300);
        playNote(C4, 300);
        playNote(G4, 300);
        playNote(G4, 300);
        playNote(A4, 300);
        playNote(A4, 300);
        playNote(G4, 600);

        playNote(F4, 300);
        playNote(F4, 300);
        playNote(E4, 300);
        playNote(E4, 300);
        playNote(D4, 300);
        playNote(D4, 300);
        playNote(C4, 600);
    }

    return 0;
}

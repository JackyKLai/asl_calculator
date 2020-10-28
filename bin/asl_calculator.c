#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double timecode_to_frames(char* timecode, double frame_rate) {
    char *token;
    token = strtok(timecode, ":");
    double hour = atof(token);
    token = strtok(NULL, ":");
    double minute = atof(token);
    token = strtok(NULL, ":");
    double second = atof(token);
    token = strtok(NULL, ":");
    double frame = atof(token);
    double result = frame + frame_rate*second + frame_rate*60.0*minute + frame_rate*3600.0*hour;
    return result;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: asl_calculator edl_file frame_rate\n");
        exit(1);
    }
    double frame_rate = atof(argv[2]);
    if (frame_rate == 0) {
        fprintf(stderr, "Invalid frame rate.\n");
        exit(1);
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Failed to open file.\n");
        exit(1);
    }

    char line[256];
    int total_shots = 0;
    double total_length = 0;
    while (fgets(line, sizeof(line), file)) {
        char *token;
        token = strtok(line, " ");
        int index = atoi(token);
        if (index > 0) {
            total_shots++;
            char in_time[12];
            char out_time[12];
            while (token != NULL) {
                memcpy(in_time, token, 12);
                token = strtok(NULL, " ");
                memcpy(out_time, token, 12);
                token = strtok(NULL, " ");
            }
            in_time[11] = '\0';
            out_time[11] = '\0';
            double in_frames = timecode_to_frames(in_time, frame_rate);
            double out_frames = timecode_to_frames(out_time, frame_rate);
            total_length += (out_frames - in_frames) / frame_rate;
        }
    }
    fprintf(stdout, "ASL: %f\n", total_length / total_shots);
    return 0;
}
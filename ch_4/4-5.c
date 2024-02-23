#include <stdio.h>

int main(void)
{
	float download_speed_mbs, file_size_mb, download_time_seconds;

	printf("What is the download speed (Mbs)?\n");
	scanf("%f", &download_speed_mbs);
	printf("What is the file size?\n");
	scanf("%f", &file_size_mb);

	download_time_seconds = file_size_mb / (download_speed_mbs / 8);
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", download_speed_mbs, file_size_mb, download_time_seconds);

	return 0;
}
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "mikeos.h"

int main(int argc, char **argv)
{
	char top_text[] = "QroOS Venom Management Tool";
	char bottom_text[] = "Copyright 2023 QRodEX Technologies";
	int color = 0x001f;
	int key;

	do {
		os_clear_screen();
		os_draw_background(top_text, bottom_text, color);
		printf("  \n");

		printf("  QrodEX DDXX - DXXD Series\n");
		printf("  \n");
		printf("  Manufacturer: QrodEX \n");
		printf("  Speed: 1.93Ghz \n");
		printf("  Cores: 1 \n");

		printf("  \n");
		printf("  Sentience: 0.5% \n");
		printf("  Sentient: false \n");
		printf("  Personality: undefined \n");

		os_hide_cursor();
		key = os_wait_for_key();
	} while (key != ESC_KEY);

	os_clear_screen();

	return 0;
}

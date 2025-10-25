
#include <stdio.h>

#include <nds.h>
#include <filesystem.h>

#include <nf_lib.h>

#include <string>
#include <time.h>
#include <cstring>


int main(int argc, char **argv)
{
	srand(time(NULL));
    // Prepare a NitroFS initialization screen
    NF_Set2D(0, 0);
    NF_Set2D(1, 0);
    consoleDemoInit();
//    printf("\n NitroFS init. Please wait.\n\n");
//    printf(" Iniciando NitroFS,\n por favor, espere.\n\n");
    swiWaitForVBlank();

    // Initialize NitroFS and set it as the root folder of the filesystem
    nitroFSInit(NULL);
    NF_SetRootFolder("NITROFS");

    // Initialize 2D engine in both screens and use mode 0
    NF_Set2D(0, 0);
    NF_Set2D(1, 0);

    // Initialize tiled backgrounds system
    NF_InitTiledBgBuffers();    // Initialize storage buffers
    NF_InitTiledBgSys(0);       // Top screen
    NF_InitTiledBgSys(1);       // Bottom screen


    // Initialize sprite system
    NF_InitSpriteBuffers();     // Initialize storage buffers
    NF_InitSpriteSys(0);        // Top screen
    NF_InitSpriteSys(1);        // Bottom screen

    // Initialize text system
    NF_InitTextSys(0);          // Top screen
    NF_InitTextSys(1);

    // Load background files from NitroFS
    //NF_LoadTiledBg("bg/layer3", "moon", 256, 256);

    // Load text font files from NitroFS
    NF_LoadTextFont("fnt/default", "normal", 256, 256, 0); // Load normal text

    // Create top screen background
    //NF_CreateTiledBg(0, 3, "moon");

    // Create bottom screen background
    //NF_CreateTiledBg(1, 3, "moon");

	NF_LoadTiledBg("bg/menutop", "m1", 256, 256);
	NF_CreateTiledBg(0, 3, "m1");

    // Create text layers
    NF_CreateTextLayer(0, 0, 0, "normal");
    NF_CreateTextLayer(1, 1, 0, "normal");

    // Print text in all layers
    //NF_WriteText(0, 0, 16, 20, "INIT");
    //NF_WriteText(1, 1, 16, 20, "INIT");

    // Update text layers
    //NF_UpdateTextLayers();

    // Variables
    u32 myvar = 0;

	char str_buffer[40];

	int keys = keysDown();
	

//Raw values, should maybe live elsewhere
std::string name[33];
std::string card_number[33];
int v_mental[33];//Mental state, 0 to 10 "SOUND MIND"
int v_spooky[33];//Ghostly powers, 0 to 10 "UNCANNY TALENT"
int v_evil[33];//Wickedness, 0 to 10 "WICKED DEEDS"
int v_life[33];//Expected lifespan, -10 to 10 "LASTING HEALTH"
int v_impact[33];//Impact on the world, 0 to 10 "OF CONSEQUENCE"

name[0] = "GAME OVER";
v_mental[0] = 31;
v_spooky[0] = 31;
v_evil[0] = 31;
v_life[0] = 31;
v_impact[0] = 31;

name[1] = "Henry Mallet";
v_mental[1] = 3;
v_spooky[1] = 7;
v_evil[1] = 8;
v_life[1] = -7;
v_impact[1] = 9;

name[2] = "Steve";
v_mental[2] = 2;
v_spooky[2] = 1;
v_evil[2] = 7;
v_life[2] = 6;
v_impact[2] = 2;

name[3] = "Terry";
v_mental[3] = 7;
v_spooky[3] = 0;
v_evil[3] = 2;
v_life[3] = 5;
v_impact[3] = 0;

name[4] = "Henry Mallet?";
v_mental[4] = 8;
v_spooky[4] = 0;
v_evil[4] = 8;
v_life[4] = 3;
v_impact[4] = 6;

name[5] = "Apollo";
v_mental[5] = 1;
v_spooky[5] = 10;
v_evil[5] = 5;
v_life[5] = -3;
v_impact[5] = 0;

name[6] = "Jonquil";
v_mental[6] = 5;
v_spooky[6] = 4;
v_evil[6] = 3;
v_life[6] = 6;
v_impact[6] = 4;

name[7] = "Zac";
v_mental[7] = 8;
v_spooky[7] = 2;
v_evil[7] = 3;
v_life[7] = 6;
v_impact[7] = 6;

name[8] = "Potter the Cat";
v_mental[8] = 9;
v_spooky[8] = 1;
v_evil[8] = 0;
v_life[8] = 3;
v_impact[8] = 0;

name[9] = "Potter the Man";
v_mental[9] = 2;
v_spooky[9] = 7;
v_evil[9] = 0;
v_life[9] = 1;
v_impact[9] = 0;

name[10] = "The King";
v_mental[10] = 0;
v_spooky[10] = 10;
v_evil[10] = 10;
v_life[10] = -8;
v_impact[10] = 8;

name[11] = "Adam One";
v_mental[11] = 8;
v_spooky[11] = 0;
v_evil[11] = 0;
v_life[11] = 5;
v_impact[11] = 2;

name[12] = "Cupcake";
v_mental[12] = 10;
v_spooky[12] = 1;
v_evil[12] = 0;
v_life[12] = 4;
v_impact[12] = 3;

name[13] = "Helen";
v_mental[13] = 0;
v_spooky[13] = 6;
v_evil[13] = 9;
v_life[13] = -1;
v_impact[13] = 0;

name[14] = "Robbie";
v_mental[14] = 2;
v_spooky[14] = 6;
v_evil[14] = 9;
v_life[14] = -10;
v_impact[14] = 0;

name[15] = "Rocco";
v_mental[15] = 7;
v_spooky[15] = 1;
v_evil[15] = 7;
v_life[15] = -2;
v_impact[15] = 2;

name[16] = "Linda";
v_mental[16] = 9;
v_spooky[16] = 0;
v_evil[16] = 0;
v_life[16] = 9;
v_impact[16] = 1;

name[17] = "Aaron";
v_mental[17] = 9;
v_spooky[17] = 0;
v_evil[17] = 3;
v_life[17] = 6;
v_impact[17] = 2;

name[18] = "Miss Take";
v_mental[18] = 8;
v_spooky[18] = 0;
v_evil[18] = 2;
v_life[18] = 7;
v_impact[18] = 2;

name[19] = "Jennifer";
v_mental[19] = 3;
v_spooky[19] = 3;
v_evil[19] = 7;
v_life[19] = 5;
v_impact[19] = 2;

name[20] = "Charlotte";
v_mental[20] = 7;
v_spooky[20] = 0;
v_evil[20] = 0;
v_life[20] = 3;
v_impact[20] = 2;

name[21] = "Paperback Pete";
v_mental[21] = 4;
v_spooky[21] = 6;
v_evil[21] = 1;
v_life[21] = -3;
v_impact[21] = 0;

name[22] = "Betty";
v_mental[22] = 6;
v_spooky[22] = 6;
v_evil[22] = 3;
v_life[22] = -5;
v_impact[22] = 0;

name[23] = "Antonia";
v_mental[23] = 8;
v_spooky[23] = 6;
v_evil[23] = 0;
v_life[23] = -2;
v_impact[23] = 1;

name[24] = "Penelope";
v_mental[24] = 10;
v_spooky[24] = 0;
v_evil[24] = 0;
v_life[24] = 9;
v_impact[24] = 0;

name[25] = "Geisela";
v_mental[25] = 8;
v_spooky[25] = 0;
v_evil[25] = 0;
v_life[25] = -1;
v_impact[25] = 2;

name[26] = "Suzy's Father";
v_mental[26] = 31;
v_spooky[26] = 31;
v_evil[26] = 31;
v_life[26] = -2;
v_impact[26] = 31;

name[27] = "Joan";
v_mental[27] = 7;
v_spooky[27] = 6;
v_evil[27] = 0;
v_life[27] = -1;
v_impact[27] = 1;

name[28] = "Dwayne";
v_mental[28] = 9;
v_spooky[28] = 0;
v_evil[28] = 3;
v_life[28] = 9;
v_impact[28] = 1;

name[29] = "Movie Mallet";
v_mental[29] = 6;
v_spooky[29] = 0;
v_evil[29] = 4;
v_life[29] = 8;
v_impact[29] = 6;

name[30] = "Ferryman";
v_mental[30] = 31;
v_spooky[30] = 10;
v_evil[30] = 31;
v_life[30] = 31;
v_impact[30] = 10;

name[31] = "Suzy";
v_mental[31] = 2;
v_spooky[31] = 5;
v_evil[31] = 8;
v_life[31] = 4;
v_impact[31] = 4;

card_number[0] = "033";
card_number[1] = "001";
card_number[2] = "002";
card_number[3] = "003";
card_number[4] = "004";
card_number[5] = "005";
card_number[6] = "006";
card_number[7] = "007";
card_number[8] = "008";
card_number[9] = "009";
card_number[10] = "010";
card_number[11] = "011";
card_number[12] = "012";
card_number[13] = "013";
card_number[14] = "014";
card_number[15] = "015";
card_number[16] = "016";
card_number[17] = "017";
card_number[18] = "018";
card_number[19] = "019";
card_number[20] = "020";
card_number[21] = "021";
card_number[22] = "022";
card_number[23] = "023";
card_number[24] = "024";
card_number[25] = "025";
card_number[26] = "026";
card_number[27] = "027";
card_number[28] = "028";
card_number[29] = "029";
card_number[30] = "030";
card_number[31] = "000";


//Raw values, should maybe live elsewhere


int decksize = 30;
int decksize1 = decksize / 2;
int decksize2 = decksize / 2;

int att_all[5][33];
for (int i = 0; i < 32; i++) {
	att_all[0][i] = v_mental[i];
	att_all[1][i] = v_spooky[i];
	att_all[2][i] = v_evil[i];
	att_all[3][i] = v_life[i];
	att_all[4][i] = v_impact[i];
}
//att_all[0] = v_mental;
//att_all[1] = v_spooky;
//att_all[2] = v_evil;
//att_all[3] = v_life;
//att_all[4] = v_impact;

int deck1[decksize + 2] = {};
int deck2[decksize + 2] = {};//Need to actually populate decks

int deckshuffle[decksize + 2] = {};

int card_indicator = 0;

int decksizedraw = 0;
int deckdraw[decksize];

int att_select = 0;
int att_total = 5;

int card1 = deck1[0];
int card2 = deck2[0];

int rel_att1;
int rel_att2;

bool gameover = false;
bool redraw = true;

std::string msg1 = "";
std::string msg2 = "";
bool msg1f = false;
bool msgf2 = false;

int deck[decksize];

NF_DefineTextColor(1, 1, 1, 31, 0, 0);//RED
NF_DefineTextColor(0, 0, 2, 31, 0, 0);//RED

int swap1;
int swap2;
int swapcard1;
int swapcard2;

bool press_start = false;
int rand_roll = rand();
bool player_turn = true;
bool computer_select = false;

std::string c1img = "sprite/j16/" + card_number[card1];
std::string c2img = "sprite/j16/" + card_number[card2];
std::string jank[10];
int jank_select = 1;
int jank_total = 5;
std::string jank_disp[10];
jank[0] = "j16/";jank_disp[0] = "Good";
jank[1] = "j8/";jank_disp[1] = "Okay";
jank[2] = "j4/";jank_disp[2] = "Choppy";
jank[3] = "j2/";jank_disp[3] = "Bad";
jank[4] = "j1/";jank_disp[4] = "Very Bad";

int diff_select = 3;
int diff_total = 7;
int diff[10];
std::string diff_disp[10];
diff[0] = 995;diff_disp[0] = "Very Easy";
diff[1] = 950;diff_disp[1] = "Easy";
diff[2] = 900;diff_disp[2] = "Normal";
diff[3] = 900;diff_disp[3] = "Very Normal";
diff[4] = 850;diff_disp[4] = "Hard";
diff[5] = 800;diff_disp[5] = "Very Hard";
diff[6] = 5;diff_disp[6] = "AI Cheats";

NF_LoadTiledBg("bg/bgbtie", "bbottomt", 256, 256);
NF_LoadTiledBg("bg/bgttie", "btopt", 256, 256);
NF_LoadTiledBg("bg/bgb75", "b75", 256, 256);
NF_LoadTiledBg("bg/bgt75", "t75", 256, 256);

NF_LoadTiledBg("bg/menustart", "ms", 256, 256);
NF_CreateTiledBg(1, 3, "ms");

bool press_a = false;
bool start_game = false;
bool first_turn = true;
bool keep_text = false;
int menu_select = 0;
int menu_total = 5;

int rand_limit = 0;

while (press_start == false) {
	if ((keys & KEY_START)||(keys & KEY_A)||(keys & KEY_B)||(keys & KEY_TOUCH)) {press_start = true;}
	rand_roll = rand();
	scanKeys();
	keys = keysDown();
}

NF_LoadTiledBg("bg/menubottom", "m2", 256, 256);
//NF_LoadTiledBg("bg/menutop", "m1", 256, 256);

//NF_LoadTiledBg("bg/bgbtie", "bbottomt", 256, 256);
//NF_LoadTiledBg("bg/bgttie", "btopt", 256, 256);
NF_LoadTiledBg("bg/bgblose", "bbottoml", 256, 256);
NF_LoadTiledBg("bg/bgtlose", "btopl", 256, 256);
NF_LoadTiledBg("bg/bgbwin", "bbottomw", 256, 256);
NF_LoadTiledBg("bg/bgtwin", "btopw", 256, 256);
//NF_LoadTiledBg("bg/bgb75", "b75", 256, 256);
//NF_LoadTiledBg("bg/bgt75", "t75", 256, 256);

while (1) {
start_game = false;
gameover = false;

//NF_LoadTiledBg("bg/menubottom", "m2", 256, 256);
NF_CreateTiledBg(1, 3, "m2");
if (not press_start) {
//NF_LoadTiledBg("bg/menutop", "m1", 256, 256);
NF_CreateTiledBg(0, 3, "m1");
}
press_start = false;

while (not start_game) {
	scanKeys();
	keys = keysDown();
	if (keys & KEY_UP) {
		keep_text = false;
		menu_select = menu_select - 1;
		if (0 > menu_select) {menu_select = menu_total - 1;}
		menu_select = menu_select % menu_total;
	}
	if (keys & KEY_DOWN) {
		keep_text = false;
		menu_select = (menu_select + 1) % menu_total;
	}
	if ((keys & KEY_A)||(keys & KEY_B)||(keys & KEY_TOUCH)) {
		keep_text = false;
		if (menu_select == 0) {start_game = true;}//START GAME
		if (menu_select == 1) {jank_select = (jank_select + 1) % jank_total;}//IMAGE COMPRESSION
		if (menu_select == 2) {diff_select = (diff_select + 1) % diff_total;}//DIFFICULTY
		if (menu_select == 3) {//ABOUT
			keep_text = true;
			NF_ClearTextLayer(1, 1);
			NF_ClearTextLayer(0, 0);
			NF_WriteText(0, 0, 0, 0, "Spirited is a 2010 TV series about a rock star ghost who falls in love with Australian dentist. I am not making it up. Top Trumps is a long-dated ghost of a card game with thousands of worthless licensed editions. I am not making it up either. The two have never met, until now. Press on to discover how I ranked the subjective qualities of dozens of notable character, plus a few roster fillers. Took longer than I thought to make.");
		}//ABOUT
		if (menu_select == 4) {//HOW TO PLAY
			keep_text = true;
			NF_ClearTextLayer(1, 1);
			NF_ClearTextLayer(0, 0);
			NF_WriteText(0, 0, 0, 0, "Unfortunately, this game plays out a lot like how I think Top Trumps works. You select an attribute on your card, and if it's better than your opponent's value, you win their card. Player who runs out of cards first loses. Tie in a round, and both cards get set aside for the next winner. I'm calling it limbo here, because of ghost stuff. If you're looking for deep strategy, don't do that. The game was primitive by late seventies standards and subsists on worthless licenses and the nostalgia of a generation that should know better. I think that they should just print nice cards with pretty pictures on them instead.");
		}//HOW TO PLAY
	}
	if (not keep_text) {//TODO: Show menu text, change colours, etc
		NF_ClearTextLayer(1, 1);
		NF_ClearTextLayer(0, 0);

		if (menu_select == 0) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
		NF_WriteText(0, 0, 2, 2, "PLAY GAME");
		if (menu_select == 1) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
		NF_WriteText(0, 0, 2, 4, "QUALITY");
		//NF_WriteText(0, 0, 15, 4, jank_disp[jank_select]);
			if (jank_select == 0) {NF_WriteText(0, 0, 15, 4, "Good");}
			if (jank_select == 1) {NF_WriteText(0, 0, 15, 4, "Okay");}
			if (jank_select == 2) {NF_WriteText(0, 0, 15, 4, "Choppy");}
			if (jank_select == 3) {NF_WriteText(0, 0, 15, 4, "Bad");}
			if (jank_select == 4) {NF_WriteText(0, 0, 15, 4, "Very Bad");}
		if (menu_select == 2) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
		NF_WriteText(0, 0, 2, 6, "DIFFICULTY");
		//NF_WriteText(0, 0, 15, 6, diff_disp[diff_select]);
			if (diff_select == 0) {NF_WriteText(0, 0, 15, 6, "Very Easy");}
			if (diff_select == 1) {NF_WriteText(0, 0, 15, 6, "Easy");}
			if (diff_select == 2) {NF_WriteText(0, 0, 15, 6, "Very Normal");}
			if (diff_select == 3) {NF_WriteText(0, 0, 15, 6, "Normal");}
			if (diff_select == 4) {NF_WriteText(0, 0, 15, 6, "Hard");}
			if (diff_select == 5) {NF_WriteText(0, 0, 15, 6, "Very Hard");}
			if (diff_select == 6) {NF_WriteText(0, 0, 15, 6, "AI Cheats");}
		if (menu_select == 3) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
		NF_WriteText(0, 0, 2, 8, "ABOUT");
		if (menu_select == 4) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
		NF_WriteText(0, 0, 2, 10, "HOW TO PLAY");
		//NF_ClearTextLayer(0, 0);
		NF_UpdateTextLayers();
		NF_ClearTextLayer(0, 0);
	}
	//NF_ClearTextLayer(0, 0);
	NF_UpdateTextLayers();
	NF_ClearTextLayer(0, 0);
	swiWaitForVBlank();
}





while (not gameover) {//Game start
NF_ClearTextLayer(0, 0);
NF_ClearTextLayer(1, 1);
//NF_LoadTiledBg("bg/bgb75", "b75", 256, 256);
NF_CreateTiledBg(1, 3, "b75");
//NF_LoadTiledBg("bg/bgt75", "t75", 256, 256);
NF_CreateTiledBg(0, 3, "t75");





for (int i = 0; i < decksize; i++) {
	deckshuffle[i] = i + 1;
}

for (int i = 0; i < 1000; i++) {
	swap1 = rand() % decksize;
	swap2 = rand() % decksize;
	swapcard1 = deckshuffle[swap1];
	swapcard2 = deckshuffle[swap2];
	deckshuffle[swap1] = swapcard2;
	deckshuffle[swap2] = swapcard1;
}
swap1 = rand() % decksize;
deckshuffle[swap1] = 31;//Put Suzy in

decksize1 = decksize / 2;
decksize2 = decksize / 2;
decksizedraw = 0;

for (int i = 0; i < decksize1; i++) {
	deck1[i] = deckshuffle[2 * i];
}
for (int i = 0; i < decksize2; i++) {
	deck2[i] = deckshuffle[2 * i + 1];
}

card1 = deck1[0];
card2 = deck2[0];


//
c1img = "sprite/" + jank[jank_select] + card_number[card1];//!!!!!
c2img = "sprite/" + jank[jank_select] + "033";
//c2img = "sprite/" + jank[jank_select] + card_number[card2];//!!!!!
//std::string tltest = "sprite/007";
//char tlimg[10];
//strcpy(tlimg, tltest);

    // Load sprite files from NitroFS
    NF_LoadSpriteGfx((c1img).c_str(), 0, 64, 64);
    NF_LoadSpritePal((c1img).c_str(), 0);
    // Transfer the required sprites to VRAM
    NF_VramSpriteGfx(1, 0, 0, true); // Ball: Keep all frames in VRAM
    NF_VramSpritePal(1, 0, 0);
NF_CreateSprite(1, 0, 0, 0, 40, 60);

    // Load sprite files from NitroFS - Other screen
    NF_LoadSpriteGfx((c2img).c_str(), 4, 64, 64);
    NF_LoadSpritePal((c2img).c_str(), 4);
    // Transfer the required sprites to VRAM
    NF_VramSpriteGfx(0, 4, 4, true); // Ball: Keep all frames in VRAM
    NF_VramSpritePal(0, 4, 4);
	if (not player_turn) {
		NF_CreateSprite(0, 4, 4, 4, 40, 60);
	}
//NF_CreateSprite(0, 4, 4, 4, 40, 60);
//


player_turn = true;

    while (not gameover)
    {
        myvar++;

	scanKeys();
	keys = keysDown();
	if (keys || player_turn == false) {
		if (player_turn) {
		if (keys & KEY_UP) {
			att_select = att_select - 1;
			if (0 > att_select) {att_select = att_total - 1;}
			att_select = att_select % att_total;
			redraw = true;
		}
		if (keys & KEY_DOWN) {
			att_select = (att_select + 1) % att_total;
			redraw = true;
		}
		} else {
			if ((rand() % 1000) > 800) {
			att_select = (att_select + 1) % att_total;
			if (att_all[att_select][card2] > att_all[att_select][card1]) {
				if (((rand() % 1000) + rand_limit) > diff[diff_select]) {
					computer_select = true;
					rand_limit = 0;
				} else {rand_limit++;}
			} else {
				if (((rand()  % 1000) + rand_limit) > 951) {
					computer_select = true;
					rand_limit = 0;
				} else {rand_limit++;}
			}
			}
		}
		if ((player_turn && ((keys & KEY_A)||(keys & KEY_B)||(keys & KEY_TOUCH)))||(computer_select)) {
			computer_select = false;


//NF_WriteText(0, 0, 1, 1, "A Pressed");

//Round processing start

	for (int i = 0; i < decksize1; i++) {
		deck1[i] = deck1[i + 1];
	}
	deck1[decksize1 - 1] = card1;
	deck1[decksize1] = card2;
	for (int i = 0; i < decksize2; i++) {
		deck2[i] = deck2[i + 1];
	}
	deck2[decksize2 - 1] = card2;
	deck2[decksize2] = card1;


	rel_att1 = att_all[att_select][card1];
	rel_att2 = att_all[att_select][card2];
	if (rel_att1 > 30 || rel_att2 > 30) {
		rel_att1 = rel_att2;
	}
	if (rel_att1 > rel_att2) {
//NF_WriteText(0, 0, 1, 3, "P1 WINS");
		msg1 = "POINT TO PLAYER";
		for (int i = 0; i < decksizedraw; i++) {
			deck1[decksize1 + i + 1] = deckdraw[i];
		}
		decksize1 = decksize1 + 1 + decksizedraw;
		decksize2 = decksize2 - 1;
		decksizedraw = 0;
		player_turn = true;
	} else if (rel_att1 < rel_att2) {
//NF_WriteText(0, 0, 1, 3, "P2 WINS");
		msg1 = "POINT TO COMPUTER";
		for (int i = 0; i < decksizedraw; i++) {
			deck2[decksize2 + i + 1] = deckdraw[i];
		}
		decksize2 = decksize2 + 1 + decksizedraw;
		decksize1 = decksize1 - 1;
		decksizedraw = 0;
		player_turn = false;
	} else {
//NF_WriteText(0, 0, 1, 3, "TIE");
		msg1 = "TIED POINT";
		decksize1 = decksize1 - 1;
		decksize2 = decksize2 - 1;
		deckdraw[decksizedraw] = card1;
		deckdraw[decksizedraw + 1] = card2;
		decksizedraw = decksizedraw + 2;
	}

//{{{{{{Flash the opponent's card between rounds
			NF_CreateSprite(0, 4, 4, 4, 40, 60);

			NF_ClearTextLayer(0, 0);
			NF_ClearTextLayer(1, 1);


			NF_WriteText(1, 1, 2, 1, name[card1].c_str());
			if (att_select == 0) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
        		NF_WriteText(1, 1, 18, 6, "SANITY");
			sprintf(str_buffer, "%d", att_all[0][card1]);
			if (att_all[0][card1] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(1, 1, 28, 6, str_buffer);
			if (att_select == 1) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
			NF_WriteText(1, 1, 18, 8, "SORCERY");
			sprintf(str_buffer, "%d", att_all[1][card1]);
			if (att_all[1][card1] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(1, 1, 28, 8, str_buffer);
			if (att_select == 2) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
			NF_WriteText(1, 1, 18, 10, "VILLAINY");
			sprintf(str_buffer, "%d", att_all[2][card1]);
			if (att_all[2][card1] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(1, 1, 28, 10, str_buffer);
			if (att_select == 3) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
			NF_WriteText(1, 1, 18, 12, "LONGEVITY");
			sprintf(str_buffer, "%d", att_all[3][card1]);
			if (att_all[3][card1] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(1, 1, 28, 12, str_buffer);
			if (att_select == 4) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
			NF_WriteText(1, 1, 18, 14, "IMPACT");
			sprintf(str_buffer, "%d", att_all[4][card1]);
			if (att_all[4][card1] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(1, 1, 28, 14, str_buffer);
			NF_SetTextColor(1, 1, 0);
			if (rel_att1 > rel_att2) {NF_WriteText(1, 1, 8, 16, "WIN");}
			if (rel_att1 < rel_att2) {NF_WriteText(1, 1, 8, 16, "LOSE");}
			if (rel_att1 == rel_att2) {NF_WriteText(1, 1, 8, 16, "TIE");}

			NF_UpdateTextLayers();
			NF_ClearTextLayer(0, 0);

			NF_WriteText(0, 0, 2, 1, name[card2].c_str());
			if (att_select == 0) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
			NF_WriteText(0, 0, 18, 6, "SANITY");
			sprintf(str_buffer, "%d", att_all[0][card2]);
			if (att_all[0][card2] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(0, 0, 28, 6, str_buffer);
			if (att_select == 1) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
			NF_WriteText(0, 0, 18, 8, "SORCERY");
			sprintf(str_buffer, "%d", att_all[1][card2]);
			if (att_all[1][card2] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(0, 0, 28, 8, str_buffer);
			if (att_select == 2) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
			NF_WriteText(0, 0, 18, 10, "VILLAINY");
			sprintf(str_buffer, "%d", att_all[2][card2]);
			if (att_all[2][card2] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(0, 0, 28, 10, str_buffer);
			if (att_select == 3) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
			NF_WriteText(0, 0, 18, 12, "LONGEVITY");
			sprintf(str_buffer, "%d", att_all[3][card2]);
			if (att_all[3][card2] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(0, 0, 28, 12, str_buffer);
			if (att_select == 4) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
			NF_WriteText(0, 0, 18, 14, "IMPACT");
			sprintf(str_buffer, "%d", att_all[4][card2]);
			if (att_all[4][card2] > 30) {strcpy(str_buffer, "--");}
			NF_WriteText(0, 0, 28, 14, str_buffer);
			NF_SetTextColor(0, 0, 0);
			if (rel_att1 > rel_att2) {NF_WriteText(0, 0, 8, 16, "LOSE");}
			if (rel_att1 < rel_att2) {NF_WriteText(0, 0, 8, 16, "WIN");}
			if (rel_att1 == rel_att2) {NF_WriteText(0, 0, 8, 16, "TIE");}

			// Update OAM array
		        NF_SpriteOamSet(0);
	        	NF_SpriteOamSet(1);

			NF_UpdateTextLayers();
	        	// Wait for the screen refresh
	        	swiWaitForVBlank();
	        	// Update OAM
	        	oamUpdate(&oamMain);
	        	oamUpdate(&oamSub);
			for (int i = 0; i < 50; i++) {
				rand_roll = rand();
				swiWaitForVBlank();
			}
			NF_DeleteSprite(0,4);
			NF_ClearTextLayer(1, 1);
			NF_ClearTextLayer(0, 0);

//{{{{{{


	card1 = deck1[0];
	card2 = deck2[0];


//-----
c1img = "sprite/" + jank[jank_select] + card_number[card1];//!!!!!
c2img = "sprite/" + jank[jank_select] + card_number[card2];//!!!!!

//std::string tltest = "sprite/007";
//char tlimg[10];
//strcpy(tlimg, tltest);

	NF_ClearTextLayer(0, 0);

	NF_WriteText(0, 0, 2, 1, name[card2].c_str());
	if (att_select == 0) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
        NF_WriteText(0, 0, 18, 6, "SANITY");
	sprintf(str_buffer, "%d", att_all[0][card2]);
	if (att_all[0][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 6, str_buffer);
	if (att_select == 1) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 8, "SORCERY");
	sprintf(str_buffer, "%d", att_all[1][card2]);
	if (att_all[1][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 8, str_buffer);
	if (att_select == 2) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 10, "VILLAINY");
	sprintf(str_buffer, "%d", att_all[2][card2]);
	if (att_all[2][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 10, str_buffer);
	if (att_select == 3) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 12, "LONGEVITY");
	sprintf(str_buffer, "%d", att_all[3][card2]);
	if (att_all[3][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 12, str_buffer);
	if (att_select == 4) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 14, "IMPACT");
	sprintf(str_buffer, "%d", att_all[4][card2]);
	if (att_all[4][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 14, str_buffer);
	NF_SetTextColor(0, 0, 0);
	sprintf(str_buffer, "Computer: %d Cards", decksize2);
	NF_WriteText(0, 0, 2, 21, str_buffer);
	if (decksizedraw > 0) {
	sprintf(str_buffer, "%d Cards in limbo", decksizedraw);
	NF_WriteText(0, 0, 2, 22, str_buffer);
	}
	if (player_turn) {NF_WriteText(0, 0, 2, 20, "PLAYER TURN");} else {NF_WriteText(0, 0, 2, 20, "COMPUTER TURN");}

	NF_FreeSpriteGfx(1, 0);
	NF_UnloadSpriteGfx(0);
	NF_UnloadSpritePal(0);
    // Load sprite files from NitroFS
    NF_LoadSpriteGfx((c1img).c_str(), 0, 64, 64);
    NF_LoadSpritePal((c1img).c_str(), 0);
    // Transfer the required sprites to VRAM
    NF_VramSpriteGfx(1, 0, 0, true); // Ball: Keep all frames in VRAM
    NF_VramSpritePal(1, 0, 0);
NF_CreateSprite(1, 0, 0, 0, 40, 60);

	NF_FreeSpriteGfx(0, 4);
	NF_UnloadSpriteGfx(4);
	NF_UnloadSpritePal(4);
    // Load sprite files from NitroFS - Other screen
    NF_LoadSpriteGfx((c2img).c_str(), 4, 64, 64);
    NF_LoadSpritePal((c2img).c_str(), 4);
    // Transfer the required sprites to VRAM
    NF_VramSpriteGfx(0, 4, 4, true); // Ball: Keep all frames in VRAM
    NF_VramSpritePal(0, 4, 4);
	if (not player_turn) {
		NF_CreateSprite(0, 4, 4, 4, 40, 60);
	}

//-----


	if (decksize1 < 1 || decksize2 < 1) {
//NF_WriteText(0, 0, 1, 2, "SOMEONE WON");
		gameover = true;
	}

//Round processing end

		}
	}

        //char mytext[32];
        //snprintf(mytext, sizeof(mytext), "Counter: %lu", myvar);
	NF_ClearTextLayer(1, 1);
	NF_ClearTextLayer(0, 0);

	NF_WriteText(1, 1, 2, 1, name[card1].c_str());
	if (att_select == 0) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
        NF_WriteText(1, 1, 18, 6, "SANITY");
	sprintf(str_buffer, "%d", att_all[0][card1]);
	if (att_all[0][card1] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(1, 1, 28, 6, str_buffer);
	if (att_select == 1) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
	NF_WriteText(1, 1, 18, 8, "SORCERY");
	sprintf(str_buffer, "%d", att_all[1][card1]);
	if (att_all[1][card1] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(1, 1, 28, 8, str_buffer);
	if (att_select == 2) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
	NF_WriteText(1, 1, 18, 10, "VILLAINY");
	sprintf(str_buffer, "%d", att_all[2][card1]);
	if (att_all[2][card1] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(1, 1, 28, 10, str_buffer);
	if (att_select == 3) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
	NF_WriteText(1, 1, 18, 12, "LONGEVITY");
	sprintf(str_buffer, "%d", att_all[3][card1]);
	if (att_all[3][card1] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(1, 1, 28, 12, str_buffer);
	if (att_select == 4) {NF_SetTextColor(1, 1, 1);} else {NF_SetTextColor(1, 1, 0);}
	NF_WriteText(1, 1, 18, 14, "IMPACT");
	sprintf(str_buffer, "%d", att_all[4][card1]);
	if (att_all[4][card1] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(1, 1, 28, 14, str_buffer);
	NF_SetTextColor(1, 1, 0);
	sprintf(str_buffer, "Player: %d Cards", decksize1);
	NF_WriteText(1, 1, 2, 21, str_buffer);
	if (decksizedraw > 0) {
	sprintf(str_buffer, "%d Cards in limbo", decksizedraw);
	NF_WriteText(1, 1, 2, 22, str_buffer);
	}
	if (player_turn) {NF_WriteText(1, 1, 2, 20, "PLAYER TURN");} else {NF_WriteText(1, 1, 2, 20, "COMPUTER TURN");}

	NF_UpdateTextLayers();
	NF_ClearTextLayer(0, 0);

	if (player_turn) {
	NF_WriteText(0, 0, 2, 1, "??????");
	if (att_select == 0) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
        NF_WriteText(0, 0, 18, 6, "SANITY");
	strcpy(str_buffer, "??");
	NF_WriteText(0, 0, 28, 6, str_buffer);
	if (att_select == 1) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 8, "SORCERY");
	NF_WriteText(0, 0, 28, 8, str_buffer);
	if (att_select == 2) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 10, "VILLAINY");
	NF_WriteText(0, 0, 28, 10, str_buffer);
	if (att_select == 3) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 12, "LONGEVITY");
	NF_WriteText(0, 0, 28, 12, str_buffer);
	if (att_select == 4) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 14, "IMPACT");
	NF_WriteText(0, 0, 28, 14, str_buffer);
	NF_SetTextColor(0, 0, 0);
	NF_WriteText(0, 0, 2, 20, "PLAYER TURN");
	} else {
	NF_WriteText(0, 0, 2, 1, name[card2].c_str());
	if (att_select == 0) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
        NF_WriteText(0, 0, 18, 6, "SANITY");
	sprintf(str_buffer, "%d", att_all[0][card2]);
	if (att_all[0][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 6, str_buffer);
	if (att_select == 1) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 8, "SORCERY");
	sprintf(str_buffer, "%d", att_all[1][card2]);
	if (att_all[1][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 8, str_buffer);
	if (att_select == 2) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 10, "VILLAINY");
	sprintf(str_buffer, "%d", att_all[2][card2]);
	if (att_all[2][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 10, str_buffer);
	if (att_select == 3) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 12, "LONGEVITY");
	sprintf(str_buffer, "%d", att_all[3][card2]);
	if (att_all[3][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 12, str_buffer);
	if (att_select == 4) {NF_SetTextColor(0, 0, 2);} else {NF_SetTextColor(0, 0, 0);}
	NF_WriteText(0, 0, 18, 14, "IMPACT");
	sprintf(str_buffer, "%d", att_all[4][card2]);
	if (att_all[4][card2] > 30) {strcpy(str_buffer, "--");}
	NF_WriteText(0, 0, 28, 14, str_buffer);
	NF_SetTextColor(0, 0, 0);
	NF_WriteText(0, 0, 2, 20, "COMPUTER TURN");
	}
	sprintf(str_buffer, "Computer: %d Cards", decksize2);
	NF_WriteText(0, 0, 2, 21, str_buffer);
	if (decksizedraw > 0) {
	sprintf(str_buffer, "%d Cards in limbo", decksizedraw);
	NF_WriteText(0, 0, 2, 22, str_buffer);
	}

	//sprintf(str_buffer, "%d", att_select);
	//NF_WriteText(0, 0, 27, 15, str_buffer);

//sprintf(str_buffer, "%d", card1);
//NF_WriteText(0, 0, 1, 4, str_buffer);
//sprintf(str_buffer, "%d", card2);
//NF_WriteText(0, 0, 1, 5, str_buffer);

        // Update text layers
        NF_UpdateTextLayers();


        // Update OAM array
        NF_SpriteOamSet(0);
        NF_SpriteOamSet(1);

        // Wait for the screen refresh
        swiWaitForVBlank();


        // Update OAM
        oamUpdate(&oamMain);
        oamUpdate(&oamSub);
    }

	//NF_WriteText(0, 0, 11, 8, "IT ENDED SOMEHOW");//DEBUGGERING ONLY
        //NF_UpdateTextLayers();//DEBUGGERING ONLY
	//swiWaitForVBlank();

	NF_ClearTextLayer(1, 1);
	NF_ClearTextLayer(0, 0);
	NF_UpdateTextLayers();

	NF_FreeSpriteGfx(1, 0);
	NF_UnloadSpriteGfx(0);
	NF_UnloadSpritePal(0);

	NF_FreeSpriteGfx(0, 4);
	NF_UnloadSpriteGfx(4);
	NF_UnloadSpritePal(4);


	if (1 > decksize1) {
		if (decksize2 < 2) {//Tie
			//NF_LoadTiledBg("bg/bgbtie", "bbottomt", 256, 256);
			NF_CreateTiledBg(1, 3, "bbottomt");
			//NF_LoadTiledBg("bg/bgttie", "btopt", 256, 256);
			NF_CreateTiledBg(0, 3, "btopt");
		} else {//Computer wins
			//NF_LoadTiledBg("bg/bgblose", "bbottoml", 256, 256);
			NF_CreateTiledBg(1, 3, "bbottoml");
			//NF_LoadTiledBg("bg/bgtlose", "btopl", 256, 256);
			NF_CreateTiledBg(0, 3, "btopl");
		}
	} else {//Player wins
		//NF_LoadTiledBg("bg/bgbwin", "bbottomw", 256, 256);
		NF_CreateTiledBg(1, 3, "bbottomw");
		//NF_LoadTiledBg("bg/bgtwin", "btopw", 256, 256);
		NF_CreateTiledBg(0, 3, "btopw");
	}
	swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();
	swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();swiWaitForVBlank();

	scanKeys();
	keys = keysDown();

	while (not ((keys & KEY_START)||(keys & KEY_A)||(keys & KEY_B)||(keys & KEY_TOUCH))) {
		rand_roll = rand();
		scanKeys();
		keys = keysDown();
		swiWaitForVBlank();
	}

	}//End of game, return to menu

}
	return 0;
}
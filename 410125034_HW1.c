#include "graphics.h"

int main()
{
    /* 設定視窗大小 */
    initwindow(840, 640, "CCU - press a key to close");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* 設定筆刷 白色 */
    setcolor(WHITE);

    /* CCU的第一個C */

    /* 座標 */
    int x1 = 225; int y1 = 275;
    int x2 = 246; int y2 = 275;
    int x3 = 208; int y3 = 290;
    int x4 = 230; int y4 = 290;

    int x5 = 208; int y5 = 336;
    int x6 = 230; int y6 = 336;
    int x7 = 225; int y7 = 352;
    int x8 = 246; int y8 = 352;

    int x9 = 192; int y9 = 244;
    int x10 = 213; int y10 = 244;
    int x11 = 204; int y11 = 383;
    int x12 = 227; int y12 = 383;

    int x13 = 158; int y13 = 253;
    int x14 = 141; int y14 = 282;
    int x15 = 136; int y15 = 315;
    int x16 = 138; int y16 = 344;
    int x17 = 151; int y17 = 372;
    int x18 = 181; int y18 = 386;

    int x19 = 197; int y19 = 275;
    int x20 = 183; int y20 = 270;
    int x21 = 168; int y21 = 275;
    int x22 = 156; int y22 = 302;
    int x23 = 155; int y23 = 317;
    int x24 = 159; int y24 = 332;
    int x25 = 168; int y25 = 353;
    int x26 = 183; int y26 = 359;
    int x27 = 197; int y27 = 353;

    int x28 = 183; int y28 = 294;
    int x29 = 179; int y29 = 315;
    int x30 = 183; int y30 = 339;

    /* 將座標連接成線段作為邊框 */
    line(x1, y1, x2, y2);
    line(x2, y2, x4, y4);
    line(x4, y4, x3, y3);
    line(x3, y3, x1, y1);

    line(x5, y5, x6, y6);
    line(x6, y6, x8, y8);
    line(x8, y8, x7, y7);
    line(x7, y7, x5, y5);

    line(x1, y1, x9, y9);
    line(x9, y9, x13, y13);
    line(x13, y13, x14, y14);
    line(x14, y14, x15, y15);
    line(x15, y15, x16, y16);
    line(x16, y16, x17, y17);
    line(x17, y17, x18, y18);
    line(x18, y18, x11, y11);
    line(x11, y11, x7, y7);

    line(x3, y3, x19, y19);
    line(x19, y19, x20, y20);
    line(x20, y20, x21, y21);
    line(x21, y21, x22, y22);
    line(x22, y22, x23, y23);
    line(x23, y23, x24, y24);
    line(x24, y24, x25, y25);
    line(x25, y25, x26, y26);
    line(x26, y26, x27, y27);
    line(x27, y27, x5, y5);

    line(x19, y19, x28, y28);
    line(x28, y28, x29, y29);
    line(x29, y29, x30, y30);
    line(x30, y30, x27, y27);

    line(x9, y9, x10, y10);
    line(x11, y11, x12, y12);

    line(x10, y10, x2, y2);
    line(x12, y12, x8, y8);

    /* 填充顏色 */
    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(226, 280, WHITE);

    setcolor(COLOR(255, 0, 0)); /* 亮紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(226, 344, WHITE);

    setcolor(COLOR(255, 0, 0)); /* 亮紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(219, 260, WHITE);

    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(226, 368, WHITE);

    setcolor(COLOR(210, 0, 0)); /* 紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(139, 344, WHITE);

    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(156, 317, WHITE);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* 設定筆刷 白色 */
    setcolor(WHITE);

    /* CCU的第二個C */

    /* 座標 */
    int x31 = 347; int y31 = 272;
    int x32 = 370; int y32 = 272;
    int x33 = 329; int y33 = 288;
    int x34 = 352; int y34 = 288;

    int x35 = 328; int y35 = 335;
    int x36 = 350; int y36 = 335;
    int x37 = 346; int y37 = 353;
    int x38 = 368; int y38 = 353;

    int x39 = 307; int y39 = 238;
    int x40 = 332; int y40 = 238;
    int x41 = 319; int y41 = 384;
    int x42 = 343; int y42 = 384;

    int x43 = 272; int y43 = 253;
    int x44 = 257; int y44 = 277;
    int x45 = 250; int y45 = 312;
    int x46 = 257; int y46 = 349;
    int x47 = 272; int y47 = 377;
    int x48 = 300; int y48 = 389;

    int x49 = 314; int y49 = 269;
    int x50 = 302; int y50 = 265;
    int x51 = 288; int y51 = 271;
    int x52 = 274; int y52 = 294;
    int x53 = 271; int y53 = 309;
    int x54 = 274; int y54 = 328;
    int x55 = 288; int y55 = 355;
    int x56 = 302; int y56 = 358;
    int x57 = 314; int y57 = 353;

    int x58 = 299; int y58 = 291;
    int x59 = 295; int y59 = 311;
    int x60 = 298; int y60 = 332;

    /* 將座標連接成線段作為邊框 */
    line(x31, y31, x32, y32);
    line(x32, y32, x34, y34);
    line(x34, y34, x33, y33);
    line(x33, y33, x31, y31);

    line(x35, y35, x36, y36);
    line(x36, y36, x38, y38);
    line(x38, y38, x37, y37);
    line(x31, y31, x32, y32);
    line(x37, y37, x35, y35);

    line(x31, y31, x39, y39);
    line(x39, y39, x43, y43);
    line(x43, y43, x44, y44);
    line(x44, y44, x45, y45);
    line(x45, y45, x46, y46);
    line(x46, y46, x47, y47);
    line(x47, y47, x48, y48);
    line(x48, y48, x41, y41);
    line(x41, y41, x37, y37);

    line(x33, y33, x49, y49);
    line(x49, y49, x50, y50);
    line(x50, y50, x51, y51);
    line(x51, y51, x52, y52);
    line(x52, y52, x53, y53);
    line(x53, y53, x54, y54);
    line(x54, y54, x55, y55);
    line(x55, y55, x56, y56);
    line(x56, y56, x57, y57);
    line(x57, y57, x35, y35);

    line(x49, y49, x58, y58);
    line(x58, y58, x59, y59);
    line(x59, y59, x60, y60);
    line(x60, y60, x57, y57);

    line(x39, y39, x40, y40);
    line(x41, y41, x42, y42);

    line(x40, y40, x32, y32);
    line(x42, y42, x38, y38);

    /* 填充顏色 */
    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(350, 280, WHITE);

    setcolor(COLOR(255, 0, 0)); /* 亮紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(348, 344, WHITE);

    setcolor(COLOR(255, 0, 0)); /* 亮紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(340, 255, WHITE);

    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(345, 369, WHITE);

    setcolor(COLOR(210, 0, 0)); /* 紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(258, 349, WHITE);

    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, getcolor());
    floodfill(272, 309, WHITE);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* 設定筆刷 白色 */
    setcolor(WHITE);

    /* CCU的U */

    /* 座標 */
    int x61 = 378; int y61 = 239;
    int x62 = 401; int y62 = 237;
    int x63 = 423; int y63 = 241;
    int x64 = 451; int y64 = 237;
    int x65 = 475; int y65 = 236;
    int x66 = 497; int y66 = 238;

    int x67 = 378; int y67 = 336;
    int x68 = 400; int y68 = 336;
    int x69 = 423; int y69 = 336;
    int x70 = 450; int y70 = 336;
    int x71 = 473; int y71 = 336;
    int x72 = 495; int y72 = 336;

    int x73 = 388; int y73 = 363;
    int x74 = 409; int y74 = 383;
    int x75 = 426; int y75 = 387;
    int x76 = 443; int y76 = 383;
    int x77 = 462; int y77 = 363;

    int x78 = 472; int y78 = 379;
    int x79 = 488; int y79 = 360;

    int x80 = 411; int y80 = 353;
    int x81 = 424; int y81 = 356;
    int x82 = 437; int y82 = 354;

    int x83 = 427; int y83 = 345;


    /* 將座標連接成線段作為邊框 */
    line(x61, y61, x62, y62);
    line(x62, y62, x63, y63);
    line(x64, y64, x65, y65);
    line(x65, y65, x66, y66);

    line(x61, y61, x67, y67);
    line(x62, y62, x68, y68);
    line(x63, y63, x69, y69);
    line(x64, y64, x70, y70);
    line(x65, y65, x71, y71);
    line(x66, y66, x72, y72);

    line(x67, y67, x73, y73);
    line(x73, y73, x74, y74);
    line(x74, y74, x75, y75);
    line(x75, y75, x76, y76);
    line(x76, y76, x71, y71);

    line(x76, y76, x78, y78);
    line(x78, y78, x79, y79);
    line(x79, y79, x72, y72);

    line(x68, y68, x80, y80);
    line(x80, y80, x81, y81);
    line(x81, y81, x82, y82);
    line(x82, y82, x70, y70);

    line(x69, y69, x83, y83);
    line(x83, y83, x82, y82);

    /* 填充顏色 */
    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, COLOR(150, 0, 0));
    floodfill(412, 289, WHITE);

    setcolor(COLOR(210, 0, 0)); /* 紅色 */
    setfillstyle(SOLID_FILL, COLOR(210, 0, 0));
    floodfill(390, 300, WHITE);

    setcolor(COLOR(150, 0, 0)); /* 暗紅色 */
    setfillstyle(SOLID_FILL, COLOR(150, 0, 0));
    floodfill(480, 366, WHITE);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* 設定筆刷 白色 */
    setcolor(WHITE);

    /* 名字的一個字 */

    /* 座標 */
    int x84 = 112; int y84 = 383;
    int x85 = 97; int y85 = 402;
    int x86 = 138; int y86 = 399;
    int x87 = 109; int y87 = 400;
    int x88 = 123; int y88 = 399;

    int x89 = 104; int y89 = 435;
    int x90 = 104; int y90 = 410;
    int x91 = 114; int y91 = 410;
    int x92 = 114; int y92 = 442;

    int x93 = 104; int y93 = 419;
    int x94 = 114; int y94 = 419;
    int x95 = 104; int y95 = 427;
    int x96 = 114; int y96 = 427;

    int x97 = 124; int y97 = 411;
    int x98 = 124; int y98 = 422;
    int x99 = 133; int y99 = 407;
    int x100 = 133; int y100 = 437;
    int x101 = 122; int y101 = 429;

    /* 將座標連接成線段成為字體 */
    line(x85, y85, x84, y84);
    line(x84, y84, x86, y86);
    line(x87, y87, x88, y88);

    line(x89, y89, x90, y90);
    line(x90, y90, x91, y91);
    line(x91, y91, x92, y92);

    line(x93, y93, x94, y94);
    line(x95, y95, x96, y96);
    line(x97, y97, x98, y98);
    line(x99, y99, x100, y100);
    line(x100, y100, x101, y101);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* 關閉視窗 */

    /* pause until user press a key */
    getch();

    /* close the window */
    closegraph();

    return 0;
}


/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 陳俞妏*/

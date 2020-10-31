/*
 * 
 *
 * This file is part of HUSTOJ.
 *
 * HUSTOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * HUSTOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HUSTOJ. if not, see <http://www.gnu.org/licenses/>.
 */
#include <sys/syscall.h>
#define HOJ_MAX_LIMIT -1
//C C++
int LANG_CV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,34,35,36,37,38,40,41,42,43,46,47,49,50,51,52,54,55,56,59,61,62,63,64,65,66,68,70,71,72,73,74,78,81,82,84,85,89,90,91,92,93,97,100,108,110,122,125,126,146,148,152,163,165,166,167,176,179,180,182,183,184,185,186,194,195,199,215,217,220,222,228,239,257,260,262,272,273,287,288,295,297,319,320,327,328,334,336,362,363,387,390,392,393,397,400,401,403,404,412,452,453,455,467,469,479,481,482,485,486,489,0};
//pascal
int LANG_PV[CALL_ARRAY_SIZE] = {0,3,4,54,85,174,191,248,0};
//java
int LANG_JV[CALL_ARRAY_SIZE]={0,2,7,8,9,29,32,33,34,36,40,44,45,46,48,49,66,74,81,85,90,92,95,122,148,156,167,168,185,194,197,199,200,204,205,222,226,232,237,241,263,300,320,326,346,349,352,356,361,363,364,381,382,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,412,416,423,430,439,447,448,479,482,487,509,510,0};
//ruby
int LANG_RV[CALL_ARRAY_SIZE] = {0,0};
//bash
int LANG_BV[CALL_ARRAY_SIZE]={0,3,4,5,6,19,20,33,45,54,63,64,65,78,122,125,140,174,175,183,191,192,195,197,199,200,201,202,221,248,0};
//python
int LANG_YV[CALL_ARRAY_SIZE]={0,1,2,4,5,6,7,8,9,10,11,12,13,16,22,23,25,32,35,36,38,48,64,85,92,120,122,148,160,232,241,274,279,299,320,357,379,386,392,393,394,395,396,397,398,400,401,402,403,404,405,406,407,412,430,432,464,468,469,479,487,489,492,494,497,498,0};
//int LANG_YV[CALL_ARRAY_SIZE]={0,6,11,22,24,32,65,86,111,122,126,133,135,165,211,222,228,234,238,265,276,287,311,322,329,335,345,377,422,433,435,444,445,477,496,0};
//php
int LANG_PHV[CALL_ARRAY_SIZE] = {0,0};
//perl
int LANG_PLV[CALL_ARRAY_SIZE] = {0,0};
//c-sharp
int LANG_CSV[CALL_ARRAY_SIZE]={0,3,5,6,19,33,45,122,125,174,175,191,192,195,197,256,338,0};
//objective-c
int LANG_OV[CALL_ARRAY_SIZE] = {0,0};
//freebasic
int LANG_BASICV[CALL_ARRAY_SIZE] = {0,0};
//scheme
int LANG_SV[CALL_ARRAY_SIZE] = {0,0};
//lua
int LANG_LUAV[CALL_ARRAY_SIZE]={0,0};
//nodejs
int LANG_JSV[CALL_ARRAY_SIZE]={0,0};
//go-lang
int LANG_GOV[CALL_ARRAY_SIZE]={0,0};
//sqlite3
int LANG_SQLV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,12,13,16,17,18,20,21,22,25,28,32,36,40,41,44,49,51,52,57,64,70,85,90,92,100,119,122,127,148,152,167,168,174,177,197,216,272,320,360,392,393,395,396,397,398,400,401,402,404,405,406,407,408,409,412,430,432,433,459,461,462,465,468,469,477,487,492,497,0};
//fortran

int LANG_FV[CALL_ARRAY_SIZE]={0,2,3,4,6,85,122,392,393,397,404,405,412,453,479,0};
//matlab octave
int LANG_MV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,9,8,10,11,12,13,16,17,18,22,24,25,28,32,33,36,40,42,48,55,56,57,60,61,64,66,72,74,76,80,83,85,88,92,96,104,111,112,116,120,122,124,126,128,131,132,133,134,135,136,144,147,148,152,157,160,164,168,169,176,179,184,185,193,200,208,215,216,224,245,248,251,256,257,264,272,279,287,288,296,304,312,315,318,320,323,328,336,337,339,344,347,349,352,368,371,372,376,377,384,385,392,393,394,395,396,397,399,400,401,402,403,404,405,406,407,408,411,412,424,431,432,433,435,436,439,440,443,446,447,448,451,452,453,455,456,462,464,468,469,472,487,488,490,492,496,497,504,510,511,0};

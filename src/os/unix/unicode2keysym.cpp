/*
* Copyright (c) 2003-2016 Rony Shapiro <ronys@pwsafe.org>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/

/*
 * unicode2keysym - Contains a map between UNICODE wchar_t values and X keysyms
 *
 * This file is auto-generated using Misc/unicode2keysym.pl.  Do not edit by hand!!
 *
 */

#include <X11/Intrinsic.h>
#include "./unicode2keysym.h"


KeySym unicode2keysym(wchar_t wc)
{
  switch (wc) {
	case 0x0100: return 0x03c0;		// Amacron
	case 0x0101: return 0x03e0;		// amacron
	case 0x0102: return 0x01c3;		// Abreve
	case 0x0103: return 0x01e3;		// abreve
	case 0x0104: return 0x01a1;		// Aogonek
	case 0x0105: return 0x01b1;		// aogonek
	case 0x0106: return 0x01c6;		// Cacute
	case 0x0107: return 0x01e6;		// cacute
	case 0x0108: return 0x02c6;		// Ccircumflex
	case 0x0109: return 0x02e6;		// ccircumflex
	case 0x010A: return 0x02c5;		// Cabovedot
	case 0x010B: return 0x02e5;		// cabovedot
	case 0x010C: return 0x01c8;		// Ccaron
	case 0x010D: return 0x01e8;		// ccaron
	case 0x010E: return 0x01cf;		// Dcaron
	case 0x010F: return 0x01ef;		// dcaron
	case 0x0110: return 0x01d0;		// Dstroke
	case 0x0111: return 0x01f0;		// dstroke
	case 0x0112: return 0x03aa;		// Emacron
	case 0x0113: return 0x03ba;		// emacron
	case 0x0116: return 0x03cc;		// Eabovedot
	case 0x0117: return 0x03ec;		// eabovedot
	case 0x0118: return 0x01ca;		// Eogonek
	case 0x0119: return 0x01ea;		// eogonek
	case 0x011A: return 0x01cc;		// Ecaron
	case 0x011B: return 0x01ec;		// ecaron
	case 0x011C: return 0x02d8;		// Gcircumflex
	case 0x011D: return 0x02f8;		// gcircumflex
	case 0x011E: return 0x02ab;		// Gbreve
	case 0x011F: return 0x02bb;		// gbreve
	case 0x0120: return 0x02d5;		// Gabovedot
	case 0x0121: return 0x02f5;		// gabovedot
	case 0x0122: return 0x03ab;		// Gcedilla
	case 0x0123: return 0x03bb;		// gcedilla
	case 0x0124: return 0x02a6;		// Hcircumflex
	case 0x0125: return 0x02b6;		// hcircumflex
	case 0x0126: return 0x02a1;		// Hstroke
	case 0x0127: return 0x02b1;		// hstroke
	case 0x0128: return 0x03a5;		// Itilde
	case 0x0129: return 0x03b5;		// itilde
	case 0x012A: return 0x03cf;		// Imacron
	case 0x012B: return 0x03ef;		// imacron
	case 0x012E: return 0x03c7;		// Iogonek
	case 0x012F: return 0x03e7;		// iogonek
	case 0x0130: return 0x02a9;		// Iabovedot
	case 0x0131: return 0x02b9;		// idotless
	case 0x0134: return 0x02ac;		// Jcircumflex
	case 0x0135: return 0x02bc;		// jcircumflex
	case 0x0136: return 0x03d3;		// Kcedilla
	case 0x0137: return 0x03f3;		// kcedilla
	case 0x0138: return 0x03a2;		// kra
	case 0x0139: return 0x01c5;		// Lacute
	case 0x013A: return 0x01e5;		// lacute
	case 0x013B: return 0x03a6;		// Lcedilla
	case 0x013C: return 0x03b6;		// lcedilla
	case 0x013D: return 0x01a5;		// Lcaron
	case 0x013E: return 0x01b5;		// lcaron
	case 0x0141: return 0x01a3;		// Lstroke
	case 0x0142: return 0x01b3;		// lstroke
	case 0x0143: return 0x01d1;		// Nacute
	case 0x0144: return 0x01f1;		// nacute
	case 0x0145: return 0x03d1;		// Ncedilla
	case 0x0146: return 0x03f1;		// ncedilla
	case 0x0147: return 0x01d2;		// Ncaron
	case 0x0148: return 0x01f2;		// ncaron
	case 0x014A: return 0x03bd;		// ENG
	case 0x014B: return 0x03bf;		// eng
	case 0x014C: return 0x03d2;		// Omacron
	case 0x014D: return 0x03f2;		// omacron
	case 0x0150: return 0x01d5;		// Odoubleacute
	case 0x0151: return 0x01f5;		// odoubleacute
	case 0x0152: return 0x13bc;		// OE
	case 0x0153: return 0x13bd;		// oe
	case 0x0154: return 0x01c0;		// Racute
	case 0x0155: return 0x01e0;		// racute
	case 0x0156: return 0x03a3;		// Rcedilla
	case 0x0157: return 0x03b3;		// rcedilla
	case 0x0158: return 0x01d8;		// Rcaron
	case 0x0159: return 0x01f8;		// rcaron
	case 0x015A: return 0x01a6;		// Sacute
	case 0x015B: return 0x01b6;		// sacute
	case 0x015C: return 0x02de;		// Scircumflex
	case 0x015D: return 0x02fe;		// scircumflex
	case 0x015E: return 0x01aa;		// Scedilla
	case 0x015F: return 0x01ba;		// scedilla
	case 0x0160: return 0x01a9;		// Scaron
	case 0x0161: return 0x01b9;		// scaron
	case 0x0162: return 0x01de;		// Tcedilla
	case 0x0163: return 0x01fe;		// tcedilla
	case 0x0164: return 0x01ab;		// Tcaron
	case 0x0165: return 0x01bb;		// tcaron
	case 0x0166: return 0x03ac;		// Tslash
	case 0x0167: return 0x03bc;		// tslash
	case 0x0168: return 0x03dd;		// Utilde
	case 0x0169: return 0x03fd;		// utilde
	case 0x016A: return 0x03de;		// Umacron
	case 0x016B: return 0x03fe;		// umacron
	case 0x016C: return 0x02dd;		// Ubreve
	case 0x016D: return 0x02fd;		// ubreve
	case 0x016E: return 0x01d9;		// Uring
	case 0x016F: return 0x01f9;		// uring
	case 0x0170: return 0x01db;		// Udoubleacute
	case 0x0171: return 0x01fb;		// udoubleacute
	case 0x0172: return 0x03d9;		// Uogonek
	case 0x0173: return 0x03f9;		// uogonek
	case 0x0178: return 0x13be;		// Ydiaeresis
	case 0x0179: return 0x01ac;		// Zacute
	case 0x017A: return 0x01bc;		// zacute
	case 0x017B: return 0x01af;		// Zabovedot
	case 0x017C: return 0x01bf;		// zabovedot
	case 0x017D: return 0x01ae;		// Zcaron
	case 0x017E: return 0x01be;		// zcaron
	case 0x0192: return 0x08f6;		// function
	case 0x02C7: return 0x01b7;		// caron
	case 0x02D8: return 0x01a2;		// breve
	case 0x02D9: return 0x01ff;		// abovedot
	case 0x02DB: return 0x01b2;		// ogonek
	case 0x02DD: return 0x01bd;		// doubleacute
	case 0x0385: return 0x07ae;		// Greek_accentdieresis
	case 0x0386: return 0x07a1;		// Greek_ALPHAaccent
	case 0x0388: return 0x07a2;		// Greek_EPSILONaccent
	case 0x0389: return 0x07a3;		// Greek_ETAaccent
	case 0x038A: return 0x07a4;		// Greek_IOTAaccent
	case 0x038C: return 0x07a7;		// Greek_OMICRONaccent
	case 0x038E: return 0x07a8;		// Greek_UPSILONaccent
	case 0x038F: return 0x07ab;		// Greek_OMEGAaccent
	case 0x0390: return 0x07b6;		// Greek_iotaaccentdieresis
	case 0x0391: return 0x07c1;		// Greek_ALPHA
	case 0x0392: return 0x07c2;		// Greek_BETA
	case 0x0393: return 0x07c3;		// Greek_GAMMA
	case 0x0394: return 0x07c4;		// Greek_DELTA
	case 0x0395: return 0x07c5;		// Greek_EPSILON
	case 0x0396: return 0x07c6;		// Greek_ZETA
	case 0x0397: return 0x07c7;		// Greek_ETA
	case 0x0398: return 0x07c8;		// Greek_THETA
	case 0x0399: return 0x07c9;		// Greek_IOTA
	case 0x039A: return 0x07ca;		// Greek_KAPPA
	case 0x039B: return 0x07cb;		// Greek_LAMBDA
	case 0x039C: return 0x07cc;		// Greek_MU
	case 0x039D: return 0x07cd;		// Greek_NU
	case 0x039E: return 0x07ce;		// Greek_XI
	case 0x039F: return 0x07cf;		// Greek_OMICRON
	case 0x03A0: return 0x07d0;		// Greek_PI
	case 0x03A1: return 0x07d1;		// Greek_RHO
	case 0x03A3: return 0x07d2;		// Greek_SIGMA
	case 0x03A4: return 0x07d4;		// Greek_TAU
	case 0x03A5: return 0x07d5;		// Greek_UPSILON
	case 0x03A6: return 0x07d6;		// Greek_PHI
	case 0x03A7: return 0x07d7;		// Greek_CHI
	case 0x03A8: return 0x07d8;		// Greek_PSI
	case 0x03A9: return 0x07d9;		// Greek_OMEGA
	case 0x03AA: return 0x07a5;		// Greek_IOTAdieresis
	case 0x03AB: return 0x07a9;		// Greek_UPSILONdieresis
	case 0x03AC: return 0x07b1;		// Greek_alphaaccent
	case 0x03AD: return 0x07b2;		// Greek_epsilonaccent
	case 0x03AE: return 0x07b3;		// Greek_etaaccent
	case 0x03AF: return 0x07b4;		// Greek_iotaaccent
	case 0x03B0: return 0x07ba;		// Greek_upsilonaccentdieresis
	case 0x03B1: return 0x07e1;		// Greek_alpha
	case 0x03B2: return 0x07e2;		// Greek_beta
	case 0x03B3: return 0x07e3;		// Greek_gamma
	case 0x03B4: return 0x07e4;		// Greek_delta
	case 0x03B5: return 0x07e5;		// Greek_epsilon
	case 0x03B6: return 0x07e6;		// Greek_zeta
	case 0x03B7: return 0x07e7;		// Greek_eta
	case 0x03B8: return 0x07e8;		// Greek_theta
	case 0x03B9: return 0x07e9;		// Greek_iota
	case 0x03BA: return 0x07ea;		// Greek_kappa
	case 0x03BB: return 0x07eb;		// Greek_lambda
	case 0x03BC: return 0x07ec;		// Greek_mu
	case 0x03BD: return 0x07ed;		// Greek_nu
	case 0x03BE: return 0x07ee;		// Greek_xi
	case 0x03BF: return 0x07ef;		// Greek_omicron
	case 0x03C0: return 0x07f0;		// Greek_pi
	case 0x03C1: return 0x07f1;		// Greek_rho
	case 0x03C2: return 0x07f3;		// Greek_finalsmallsigma
	case 0x03C3: return 0x07f2;		// Greek_sigma
	case 0x03C4: return 0x07f4;		// Greek_tau
	case 0x03C5: return 0x07f5;		// Greek_upsilon
	case 0x03C6: return 0x07f6;		// Greek_phi
	case 0x03C7: return 0x07f7;		// Greek_chi
	case 0x03C8: return 0x07f8;		// Greek_psi
	case 0x03C9: return 0x07f9;		// Greek_omega
	case 0x03CA: return 0x07b5;		// Greek_iotadieresis
	case 0x03CB: return 0x07b9;		// Greek_upsilondieresis
	case 0x03CC: return 0x07b7;		// Greek_omicronaccent
	case 0x03CD: return 0x07b8;		// Greek_upsilonaccent
	case 0x03CE: return 0x07bb;		// Greek_omegaaccent
	case 0x0401: return 0x06b3;		// Cyrillic_IO
	case 0x0402: return 0x06b1;		// Serbian_DJE
	case 0x0403: return 0x06b2;		// Macedonia_GJE
	case 0x0404: return 0x06b4;		// Ukrainian_IE
	case 0x0405: return 0x06b5;		// Macedonia_DSE
	case 0x0406: return 0x06b6;		// Ukrainian_I
	case 0x0407: return 0x06b7;		// Ukrainian_YI
	case 0x0408: return 0x06b8;		// Cyrillic_JE
	case 0x0409: return 0x06b9;		// Cyrillic_LJE
	case 0x040A: return 0x06ba;		// Cyrillic_NJE
	case 0x040B: return 0x06bb;		// Serbian_TSHE
	case 0x040C: return 0x06bc;		// Macedonia_KJE
	case 0x040E: return 0x06be;		// Byelorussian_SHORTU
	case 0x040F: return 0x06bf;		// Cyrillic_DZHE
	case 0x0410: return 0x06e1;		// Cyrillic_A
	case 0x0411: return 0x06e2;		// Cyrillic_BE
	case 0x0412: return 0x06f7;		// Cyrillic_VE
	case 0x0413: return 0x06e7;		// Cyrillic_GHE
	case 0x0414: return 0x06e4;		// Cyrillic_DE
	case 0x0415: return 0x06e5;		// Cyrillic_IE
	case 0x0416: return 0x06f6;		// Cyrillic_ZHE
	case 0x0417: return 0x06fa;		// Cyrillic_ZE
	case 0x0418: return 0x06e9;		// Cyrillic_I
	case 0x0419: return 0x06ea;		// Cyrillic_SHORTI
	case 0x041A: return 0x06eb;		// Cyrillic_KA
	case 0x041B: return 0x06ec;		// Cyrillic_EL
	case 0x041C: return 0x06ed;		// Cyrillic_EM
	case 0x041D: return 0x06ee;		// Cyrillic_EN
	case 0x041E: return 0x06ef;		// Cyrillic_O
	case 0x041F: return 0x06f0;		// Cyrillic_PE
	case 0x0420: return 0x06f2;		// Cyrillic_ER
	case 0x0421: return 0x06f3;		// Cyrillic_ES
	case 0x0422: return 0x06f4;		// Cyrillic_TE
	case 0x0423: return 0x06f5;		// Cyrillic_U
	case 0x0424: return 0x06e6;		// Cyrillic_EF
	case 0x0425: return 0x06e8;		// Cyrillic_HA
	case 0x0426: return 0x06e3;		// Cyrillic_TSE
	case 0x0427: return 0x06fe;		// Cyrillic_CHE
	case 0x0428: return 0x06fb;		// Cyrillic_SHA
	case 0x0429: return 0x06fd;		// Cyrillic_SHCHA
	case 0x042A: return 0x06ff;		// Cyrillic_HARDSIGN
	case 0x042B: return 0x06f9;		// Cyrillic_YERU
	case 0x042C: return 0x06f8;		// Cyrillic_SOFTSIGN
	case 0x042D: return 0x06fc;		// Cyrillic_E
	case 0x042E: return 0x06e0;		// Cyrillic_YU
	case 0x042F: return 0x06f1;		// Cyrillic_YA
	case 0x0430: return 0x06c1;		// Cyrillic_a
	case 0x0431: return 0x06c2;		// Cyrillic_be
	case 0x0432: return 0x06d7;		// Cyrillic_ve
	case 0x0433: return 0x06c7;		// Cyrillic_ghe
	case 0x0434: return 0x06c4;		// Cyrillic_de
	case 0x0435: return 0x06c5;		// Cyrillic_ie
	case 0x0436: return 0x06d6;		// Cyrillic_zhe
	case 0x0437: return 0x06da;		// Cyrillic_ze
	case 0x0438: return 0x06c9;		// Cyrillic_i
	case 0x0439: return 0x06ca;		// Cyrillic_shorti
	case 0x043A: return 0x06cb;		// Cyrillic_ka
	case 0x043B: return 0x06cc;		// Cyrillic_el
	case 0x043C: return 0x06cd;		// Cyrillic_em
	case 0x043D: return 0x06ce;		// Cyrillic_en
	case 0x043E: return 0x06cf;		// Cyrillic_o
	case 0x043F: return 0x06d0;		// Cyrillic_pe
	case 0x0440: return 0x06d2;		// Cyrillic_er
	case 0x0441: return 0x06d3;		// Cyrillic_es
	case 0x0442: return 0x06d4;		// Cyrillic_te
	case 0x0443: return 0x06d5;		// Cyrillic_u
	case 0x0444: return 0x06c6;		// Cyrillic_ef
	case 0x0445: return 0x06c8;		// Cyrillic_ha
	case 0x0446: return 0x06c3;		// Cyrillic_tse
	case 0x0447: return 0x06de;		// Cyrillic_che
	case 0x0448: return 0x06db;		// Cyrillic_sha
	case 0x0449: return 0x06dd;		// Cyrillic_shcha
	case 0x044A: return 0x06df;		// Cyrillic_hardsign
	case 0x044B: return 0x06d9;		// Cyrillic_yeru
	case 0x044C: return 0x06d8;		// Cyrillic_softsign
	case 0x044D: return 0x06dc;		// Cyrillic_e
	case 0x044E: return 0x06c0;		// Cyrillic_yu
	case 0x044F: return 0x06d1;		// Cyrillic_ya
	case 0x0451: return 0x06a3;		// Cyrillic_io
	case 0x0452: return 0x06a1;		// Serbian_dje
	case 0x0453: return 0x06a2;		// Macedonia_gje
	case 0x0454: return 0x06a4;		// Ukrainian_ie
	case 0x0455: return 0x06a5;		// Macedonia_dse
	case 0x0456: return 0x06a6;		// Ukrainian_i
	case 0x0457: return 0x06a7;		// Ukrainian_yi
	case 0x0458: return 0x06a8;		// Cyrillic_je
	case 0x0459: return 0x06a9;		// Cyrillic_lje
	case 0x045A: return 0x06aa;		// Cyrillic_nje
	case 0x045B: return 0x06ab;		// Serbian_tshe
	case 0x045C: return 0x06ac;		// Macedonia_kje
	case 0x045E: return 0x06ae;		// Byelorussian_shortu
	case 0x045F: return 0x06af;		// Cyrillic_dzhe
	case 0x0490: return 0x06bd;		// Ukrainian_GHE_WITH_UPTURN
	case 0x0491: return 0x06ad;		// Ukrainian_ghe_with_upturn
	case 0x05D0: return 0x0ce0;		// hebrew_aleph
	case 0x05D1: return 0x0ce1;		// hebrew_bet
	case 0x05D2: return 0x0ce2;		// hebrew_gimel
	case 0x05D3: return 0x0ce3;		// hebrew_dalet
	case 0x05D4: return 0x0ce4;		// hebrew_he
	case 0x05D5: return 0x0ce5;		// hebrew_waw
	case 0x05D6: return 0x0ce6;		// hebrew_zain
	case 0x05D7: return 0x0ce7;		// hebrew_chet
	case 0x05D8: return 0x0ce8;		// hebrew_tet
	case 0x05D9: return 0x0ce9;		// hebrew_yod
	case 0x05DA: return 0x0cea;		// hebrew_finalkaph
	case 0x05DB: return 0x0ceb;		// hebrew_kaph
	case 0x05DC: return 0x0cec;		// hebrew_lamed
	case 0x05DD: return 0x0ced;		// hebrew_finalmem
	case 0x05DE: return 0x0cee;		// hebrew_mem
	case 0x05DF: return 0x0cef;		// hebrew_finalnun
	case 0x05E0: return 0x0cf0;		// hebrew_nun
	case 0x05E1: return 0x0cf1;		// hebrew_samech
	case 0x05E2: return 0x0cf2;		// hebrew_ayin
	case 0x05E3: return 0x0cf3;		// hebrew_finalpe
	case 0x05E4: return 0x0cf4;		// hebrew_pe
	case 0x05E5: return 0x0cf5;		// hebrew_finalzade
	case 0x05E6: return 0x0cf6;		// hebrew_zade
	case 0x05E7: return 0x0cf7;		// hebrew_qoph
	case 0x05E8: return 0x0cf8;		// hebrew_resh
	case 0x05E9: return 0x0cf9;		// hebrew_shin
	case 0x05EA: return 0x0cfa;		// hebrew_taw
	case 0x060C: return 0x05ac;		// Arabic_comma
	case 0x061B: return 0x05bb;		// Arabic_semicolon
	case 0x061F: return 0x05bf;		// Arabic_question_mark
	case 0x0621: return 0x05c1;		// Arabic_hamza
	case 0x0622: return 0x05c2;		// Arabic_maddaonalef
	case 0x0623: return 0x05c3;		// Arabic_hamzaonalef
	case 0x0624: return 0x05c4;		// Arabic_hamzaonwaw
	case 0x0625: return 0x05c5;		// Arabic_hamzaunderalef
	case 0x0626: return 0x05c6;		// Arabic_hamzaonyeh
	case 0x0627: return 0x05c7;		// Arabic_alef
	case 0x0628: return 0x05c8;		// Arabic_beh
	case 0x0629: return 0x05c9;		// Arabic_tehmarbuta
	case 0x062A: return 0x05ca;		// Arabic_teh
	case 0x062B: return 0x05cb;		// Arabic_theh
	case 0x062C: return 0x05cc;		// Arabic_jeem
	case 0x062D: return 0x05cd;		// Arabic_hah
	case 0x062E: return 0x05ce;		// Arabic_khah
	case 0x062F: return 0x05cf;		// Arabic_dal
	case 0x0630: return 0x05d0;		// Arabic_thal
	case 0x0631: return 0x05d1;		// Arabic_ra
	case 0x0632: return 0x05d2;		// Arabic_zain
	case 0x0633: return 0x05d3;		// Arabic_seen
	case 0x0634: return 0x05d4;		// Arabic_sheen
	case 0x0635: return 0x05d5;		// Arabic_sad
	case 0x0636: return 0x05d6;		// Arabic_dad
	case 0x0637: return 0x05d7;		// Arabic_tah
	case 0x0638: return 0x05d8;		// Arabic_zah
	case 0x0639: return 0x05d9;		// Arabic_ain
	case 0x063A: return 0x05da;		// Arabic_ghain
	case 0x0640: return 0x05e0;		// Arabic_tatweel
	case 0x0641: return 0x05e1;		// Arabic_feh
	case 0x0642: return 0x05e2;		// Arabic_qaf
	case 0x0643: return 0x05e3;		// Arabic_kaf
	case 0x0644: return 0x05e4;		// Arabic_lam
	case 0x0645: return 0x05e5;		// Arabic_meem
	case 0x0646: return 0x05e6;		// Arabic_noon
	case 0x0647: return 0x05e7;		// Arabic_ha
	case 0x0648: return 0x05e8;		// Arabic_waw
	case 0x0649: return 0x05e9;		// Arabic_alefmaksura
	case 0x064A: return 0x05ea;		// Arabic_yeh
	case 0x064B: return 0x05eb;		// Arabic_fathatan
	case 0x064C: return 0x05ec;		// Arabic_dammatan
	case 0x064D: return 0x05ed;		// Arabic_kasratan
	case 0x064E: return 0x05ee;		// Arabic_fatha
	case 0x064F: return 0x05ef;		// Arabic_damma
	case 0x0650: return 0x05f0;		// Arabic_kasra
	case 0x0651: return 0x05f1;		// Arabic_shadda
	case 0x0652: return 0x05f2;		// Arabic_sukun
	case 0x0E01: return 0x0da1;		// Thai_kokai
	case 0x0E02: return 0x0da2;		// Thai_khokhai
	case 0x0E03: return 0x0da3;		// Thai_khokhuat
	case 0x0E04: return 0x0da4;		// Thai_khokhwai
	case 0x0E05: return 0x0da5;		// Thai_khokhon
	case 0x0E06: return 0x0da6;		// Thai_khorakhang
	case 0x0E07: return 0x0da7;		// Thai_ngongu
	case 0x0E08: return 0x0da8;		// Thai_chochan
	case 0x0E09: return 0x0da9;		// Thai_choching
	case 0x0E0A: return 0x0daa;		// Thai_chochang
	case 0x0E0B: return 0x0dab;		// Thai_soso
	case 0x0E0C: return 0x0dac;		// Thai_chochoe
	case 0x0E0D: return 0x0dad;		// Thai_yoying
	case 0x0E0E: return 0x0dae;		// Thai_dochada
	case 0x0E0F: return 0x0daf;		// Thai_topatak
	case 0x0E10: return 0x0db0;		// Thai_thothan
	case 0x0E11: return 0x0db1;		// Thai_thonangmontho
	case 0x0E12: return 0x0db2;		// Thai_thophuthao
	case 0x0E13: return 0x0db3;		// Thai_nonen
	case 0x0E14: return 0x0db4;		// Thai_dodek
	case 0x0E15: return 0x0db5;		// Thai_totao
	case 0x0E16: return 0x0db6;		// Thai_thothung
	case 0x0E17: return 0x0db7;		// Thai_thothahan
	case 0x0E18: return 0x0db8;		// Thai_thothong
	case 0x0E19: return 0x0db9;		// Thai_nonu
	case 0x0E1A: return 0x0dba;		// Thai_bobaimai
	case 0x0E1B: return 0x0dbb;		// Thai_popla
	case 0x0E1C: return 0x0dbc;		// Thai_phophung
	case 0x0E1D: return 0x0dbd;		// Thai_fofa
	case 0x0E1E: return 0x0dbe;		// Thai_phophan
	case 0x0E1F: return 0x0dbf;		// Thai_fofan
	case 0x0E20: return 0x0dc0;		// Thai_phosamphao
	case 0x0E21: return 0x0dc1;		// Thai_moma
	case 0x0E22: return 0x0dc2;		// Thai_yoyak
	case 0x0E23: return 0x0dc3;		// Thai_rorua
	case 0x0E24: return 0x0dc4;		// Thai_ru
	case 0x0E25: return 0x0dc5;		// Thai_loling
	case 0x0E26: return 0x0dc6;		// Thai_lu
	case 0x0E27: return 0x0dc7;		// Thai_wowaen
	case 0x0E28: return 0x0dc8;		// Thai_sosala
	case 0x0E29: return 0x0dc9;		// Thai_sorusi
	case 0x0E2A: return 0x0dca;		// Thai_sosua
	case 0x0E2B: return 0x0dcb;		// Thai_hohip
	case 0x0E2C: return 0x0dcc;		// Thai_lochula
	case 0x0E2D: return 0x0dcd;		// Thai_oang
	case 0x0E2E: return 0x0dce;		// Thai_honokhuk
	case 0x0E2F: return 0x0dcf;		// Thai_paiyannoi
	case 0x0E30: return 0x0dd0;		// Thai_saraa
	case 0x0E31: return 0x0dd1;		// Thai_maihanakat
	case 0x0E32: return 0x0dd2;		// Thai_saraaa
	case 0x0E33: return 0x0dd3;		// Thai_saraam
	case 0x0E34: return 0x0dd4;		// Thai_sarai
	case 0x0E35: return 0x0dd5;		// Thai_saraii
	case 0x0E36: return 0x0dd6;		// Thai_saraue
	case 0x0E37: return 0x0dd7;		// Thai_sarauee
	case 0x0E38: return 0x0dd8;		// Thai_sarau
	case 0x0E39: return 0x0dd9;		// Thai_sarauu
	case 0x0E3A: return 0x0dda;		// Thai_phinthu
	case 0x0E3F: return 0x0ddf;		// Thai_baht
	case 0x0E40: return 0x0de0;		// Thai_sarae
	case 0x0E41: return 0x0de1;		// Thai_saraae
	case 0x0E42: return 0x0de2;		// Thai_sarao
	case 0x0E43: return 0x0de3;		// Thai_saraaimaimuan
	case 0x0E44: return 0x0de4;		// Thai_saraaimaimalai
	case 0x0E45: return 0x0de5;		// Thai_lakkhangyao
	case 0x0E46: return 0x0de6;		// Thai_maiyamok
	case 0x0E47: return 0x0de7;		// Thai_maitaikhu
	case 0x0E48: return 0x0de8;		// Thai_maiek
	case 0x0E49: return 0x0de9;		// Thai_maitho
	case 0x0E4A: return 0x0dea;		// Thai_maitri
	case 0x0E4B: return 0x0deb;		// Thai_maichattawa
	case 0x0E4C: return 0x0dec;		// Thai_thanthakhat
	case 0x0E4D: return 0x0ded;		// Thai_nikhahit
	case 0x0E50: return 0x0df0;		// Thai_leksun
	case 0x0E51: return 0x0df1;		// Thai_leknung
	case 0x0E52: return 0x0df2;		// Thai_leksong
	case 0x0E53: return 0x0df3;		// Thai_leksam
	case 0x0E54: return 0x0df4;		// Thai_leksi
	case 0x0E55: return 0x0df5;		// Thai_lekha
	case 0x0E56: return 0x0df6;		// Thai_lekhok
	case 0x0E57: return 0x0df7;		// Thai_lekchet
	case 0x0E58: return 0x0df8;		// Thai_lekpaet
	case 0x0E59: return 0x0df9;		// Thai_lekkao
	case 0x2002: return 0x0aa2;		// enspace
	case 0x2003: return 0x0aa1;		// emspace
	case 0x2004: return 0x0aa3;		// em3space
	case 0x2005: return 0x0aa4;		// em4space
	case 0x2007: return 0x0aa5;		// digitspace
	case 0x2008: return 0x0aa6;		// punctspace
	case 0x2009: return 0x0aa7;		// thinspace
	case 0x200A: return 0x0aa8;		// hairspace
	case 0x2012: return 0x0abb;		// figdash
	case 0x2013: return 0x0aaa;		// endash
	case 0x2014: return 0x0aa9;		// emdash
	case 0x2015: return 0x07af;		// Greek_horizbar
	case 0x2017: return 0x0cdf;		// hebrew_doublelowline
	case 0x2018: return 0x0ad0;		// leftsinglequotemark
	case 0x2019: return 0x0ad1;		// rightsinglequotemark
	case 0x201A: return 0x0afd;		// singlelowquotemark
	case 0x201C: return 0x0ad2;		// leftdoublequotemark
	case 0x201D: return 0x0ad3;		// rightdoublequotemark
	case 0x201E: return 0x0afe;		// doublelowquotemark
	case 0x2020: return 0x0af1;		// dagger
	case 0x2021: return 0x0af2;		// doubledagger
	case 0x2022: return 0x0ae6;		// enfilledcircbullet
	case 0x2025: return 0x0aaf;		// doubbaselinedot
	case 0x2026: return 0x0aae;		// ellipsis
	case 0x2030: return 0x0ad5;		// permille
	case 0x2032: return 0x0ad6;		// minutes
	case 0x2033: return 0x0ad7;		// seconds
	case 0x2038: return 0x0afc;		// caret
	case 0x203E: return 0x047e;		// overline
	case 0x20A9: return 0x0eff;		// Korean_Won
	case 0x20AC: return 0x20ac;		// EuroSign
	case 0x2105: return 0x0ab8;		// careof
	case 0x2116: return 0x06b0;		// numerosign
	case 0x2117: return 0x0afb;		// phonographcopyright
	case 0x211E: return 0x0ad4;		// prescription
	case 0x2122: return 0x0ac9;		// trademark
	case 0x2153: return 0x0ab0;		// onethird
	case 0x2154: return 0x0ab1;		// twothirds
	case 0x2155: return 0x0ab2;		// onefifth
	case 0x2156: return 0x0ab3;		// twofifths
	case 0x2157: return 0x0ab4;		// threefifths
	case 0x2158: return 0x0ab5;		// fourfifths
	case 0x2159: return 0x0ab6;		// onesixth
	case 0x215A: return 0x0ab7;		// fivesixths
	case 0x215B: return 0x0ac3;		// oneeighth
	case 0x215C: return 0x0ac4;		// threeeighths
	case 0x215D: return 0x0ac5;		// fiveeighths
	case 0x215E: return 0x0ac6;		// seveneighths
	case 0x2190: return 0x08fb;		// leftarrow
	case 0x2191: return 0x08fc;		// uparrow
	case 0x2192: return 0x08fd;		// rightarrow
	case 0x2193: return 0x08fe;		// downarrow
	case 0x21D2: return 0x08ce;		// implies
	case 0x21D4: return 0x08cd;		// ifonlyif
	case 0x2202: return 0x08ef;		// partialderivative
	case 0x2207: return 0x08c5;		// nabla
	case 0x2218: return 0x0bca;		// jot
	case 0x221A: return 0x08d6;		// radical
	case 0x221D: return 0x08c1;		// variation
	case 0x221E: return 0x08c2;		// infinity
	case 0x2227: return 0x08de;		// logicaland
	case 0x2228: return 0x08df;		// logicalor
	case 0x2229: return 0x08dc;		// intersection
	case 0x222A: return 0x08dd;		// union
	case 0x222B: return 0x08bf;		// integral
	case 0x2234: return 0x08c0;		// therefore
	case 0x223C: return 0x08c8;		// approximate
	case 0x2243: return 0x08c9;		// similarequal
	case 0x2260: return 0x08bd;		// notequal
	case 0x2261: return 0x08cf;		// identical
	case 0x2264: return 0x08bc;		// lessthanequal
	case 0x2265: return 0x08be;		// greaterthanequal
	case 0x2282: return 0x08da;		// includedin
	case 0x2283: return 0x08db;		// includes
	case 0x22A2: return 0x0bfc;		// righttack
	case 0x22A3: return 0x0bdc;		// lefttack
	case 0x22A4: return 0x0bc2;		// downtack
	case 0x22A5: return 0x0bce;		// uptack
	case 0x2308: return 0x0bd3;		// upstile
	case 0x230A: return 0x0bc4;		// downstile
	case 0x2315: return 0x0afa;		// telephonerecorder
	case 0x2320: return 0x08a4;		// topintegral
	case 0x2321: return 0x08a5;		// botintegral
	case 0x2395: return 0x0bcc;		// quad
	case 0x239B: return 0x08ab;		// topleftparens
	case 0x239D: return 0x08ac;		// botleftparens
	case 0x239E: return 0x08ad;		// toprightparens
	case 0x23A0: return 0x08ae;		// botrightparens
	case 0x23A1: return 0x08a7;		// topleftsqbracket
	case 0x23A3: return 0x08a8;		// botleftsqbracket
	case 0x23A4: return 0x08a9;		// toprightsqbracket
	case 0x23A6: return 0x08aa;		// botrightsqbracket
	case 0x23A8: return 0x08af;		// leftmiddlecurlybrace
	case 0x23AC: return 0x08b0;		// rightmiddlecurlybrace
	case 0x23B7: return 0x08a1;		// leftradical
	case 0x23BA: return 0x09ef;		// horizlinescan1
	case 0x23BB: return 0x09f0;		// horizlinescan3
	case 0x23BC: return 0x09f2;		// horizlinescan7
	case 0x23BD: return 0x09f3;		// horizlinescan9
	case 0x2409: return 0x09e2;		// ht
	case 0x240A: return 0x09e5;		// lf
	case 0x240B: return 0x09e9;		// vt
	case 0x240C: return 0x09e3;		// ff
	case 0x240D: return 0x09e4;		// cr
	case 0x2423: return 0x0aac;		// signifblank
	case 0x2424: return 0x09e8;		// nl
	case 0x2500: return 0x09f1;		// horizlinescan5
	case 0x2502: return 0x09f8;		// vertbar
	case 0x250C: return 0x09ec;		// upleftcorner
	case 0x2510: return 0x09eb;		// uprightcorner
	case 0x2514: return 0x09ed;		// lowleftcorner
	case 0x2518: return 0x09ea;		// lowrightcorner
	case 0x251C: return 0x09f4;		// leftt
	case 0x2524: return 0x09f5;		// rightt
	case 0x252C: return 0x09f7;		// topt
	case 0x2534: return 0x09f6;		// bott
	case 0x253C: return 0x09ee;		// crossinglines
	case 0x2592: return 0x09e1;		// checkerboard
	case 0x25AA: return 0x0ae7;		// enfilledsqbullet
	case 0x25AB: return 0x0ae1;		// enopensquarebullet
	case 0x25AC: return 0x0adb;		// filledrectbullet
	case 0x25AD: return 0x0ae2;		// openrectbullet
	case 0x25AE: return 0x0adf;		// emfilledrect
	case 0x25AF: return 0x0acf;		// emopenrectangle
	case 0x25B2: return 0x0ae8;		// filledtribulletup
	case 0x25B3: return 0x0ae3;		// opentribulletup
	case 0x25B6: return 0x0add;		// filledrighttribullet
	case 0x25B7: return 0x0acd;		// rightopentriangle
	case 0x25BC: return 0x0ae9;		// filledtribulletdown
	case 0x25BD: return 0x0ae4;		// opentribulletdown
	case 0x25C0: return 0x0adc;		// filledlefttribullet
	case 0x25C1: return 0x0acc;		// leftopentriangle
	case 0x25C6: return 0x09e0;		// soliddiamond
	case 0x25CB: return 0x0bcf;		// circle
	case 0x25CF: return 0x0ade;		// emfilledcircle
	case 0x25E6: return 0x0ae0;		// enopencircbullet
	case 0x2606: return 0x0ae5;		// openstar
	case 0x260E: return 0x0af9;		// telephone
	case 0x2613: return 0x0aca;		// signaturemark
	case 0x261C: return 0x0aea;		// leftpointer
	case 0x261E: return 0x0aeb;		// rightpointer
	case 0x2640: return 0x0af8;		// femalesymbol
	case 0x2642: return 0x0af7;		// malesymbol
	case 0x2663: return 0x0aec;		// club
	case 0x2665: return 0x0aee;		// heart
	case 0x2666: return 0x0aed;		// diamond
	case 0x266D: return 0x0af6;		// musicalflat
	case 0x266F: return 0x0af5;		// musicalsharp
	case 0x2713: return 0x0af3;		// checkmark
	case 0x2717: return 0x0af4;		// ballotcross
	case 0x271D: return 0x0ad9;		// latincross
	case 0x2720: return 0x0af0;		// maltesecross
	case 0x27E8: return 0x0abc;		// leftanglebracket
	case 0x27E9: return 0x0abe;		// rightanglebracket
	case 0x3001: return 0x04a4;		// kana_comma
	case 0x3002: return 0x04a1;		// kana_fullstop
	case 0x300C: return 0x04a2;		// kana_openingbracket
	case 0x300D: return 0x04a3;		// kana_closingbracket
	case 0x309B: return 0x04de;		// voicedsound
	case 0x309C: return 0x04df;		// semivoicedsound
	case 0x30A1: return 0x04a7;		// kana_a
	case 0x30A2: return 0x04b1;		// kana_A
	case 0x30A3: return 0x04a8;		// kana_i
	case 0x30A4: return 0x04b2;		// kana_I
	case 0x30A5: return 0x04a9;		// kana_u
	case 0x30A6: return 0x04b3;		// kana_U
	case 0x30A7: return 0x04aa;		// kana_e
	case 0x30A8: return 0x04b4;		// kana_E
	case 0x30A9: return 0x04ab;		// kana_o
	case 0x30AA: return 0x04b5;		// kana_O
	case 0x30AB: return 0x04b6;		// kana_KA
	case 0x30AD: return 0x04b7;		// kana_KI
	case 0x30AF: return 0x04b8;		// kana_KU
	case 0x30B1: return 0x04b9;		// kana_KE
	case 0x30B3: return 0x04ba;		// kana_KO
	case 0x30B5: return 0x04bb;		// kana_SA
	case 0x30B7: return 0x04bc;		// kana_SHI
	case 0x30B9: return 0x04bd;		// kana_SU
	case 0x30BB: return 0x04be;		// kana_SE
	case 0x30BD: return 0x04bf;		// kana_SO
	case 0x30BF: return 0x04c0;		// kana_TA
	case 0x30C1: return 0x04c1;		// kana_CHI
	case 0x30C3: return 0x04af;		// kana_tsu
	case 0x30C4: return 0x04c2;		// kana_TSU
	case 0x30C6: return 0x04c3;		// kana_TE
	case 0x30C8: return 0x04c4;		// kana_TO
	case 0x30CA: return 0x04c5;		// kana_NA
	case 0x30CB: return 0x04c6;		// kana_NI
	case 0x30CC: return 0x04c7;		// kana_NU
	case 0x30CD: return 0x04c8;		// kana_NE
	case 0x30CE: return 0x04c9;		// kana_NO
	case 0x30CF: return 0x04ca;		// kana_HA
	case 0x30D2: return 0x04cb;		// kana_HI
	case 0x30D5: return 0x04cc;		// kana_FU
	case 0x30D8: return 0x04cd;		// kana_HE
	case 0x30DB: return 0x04ce;		// kana_HO
	case 0x30DE: return 0x04cf;		// kana_MA
	case 0x30DF: return 0x04d0;		// kana_MI
	case 0x30E0: return 0x04d1;		// kana_MU
	case 0x30E1: return 0x04d2;		// kana_ME
	case 0x30E2: return 0x04d3;		// kana_MO
	case 0x30E3: return 0x04ac;		// kana_ya
	case 0x30E4: return 0x04d4;		// kana_YA
	case 0x30E5: return 0x04ad;		// kana_yu
	case 0x30E6: return 0x04d5;		// kana_YU
	case 0x30E7: return 0x04ae;		// kana_yo
	case 0x30E8: return 0x04d6;		// kana_YO
	case 0x30E9: return 0x04d7;		// kana_RA
	case 0x30EA: return 0x04d8;		// kana_RI
	case 0x30EB: return 0x04d9;		// kana_RU
	case 0x30EC: return 0x04da;		// kana_RE
	case 0x30ED: return 0x04db;		// kana_RO
	case 0x30EF: return 0x04dc;		// kana_WA
	case 0x30F2: return 0x04a6;		// kana_WO
	case 0x30F3: return 0x04dd;		// kana_N
	case 0x30FB: return 0x04a5;		// kana_conjunctive
	case 0x30FC: return 0x04b0;		// prolongedsound
	default: return NoSymbol;
  };
}


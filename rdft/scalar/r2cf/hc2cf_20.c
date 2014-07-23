/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Mar  4 13:49:23 EST 2014 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_hc2c.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 20 -dit -name hc2cf_20 -include hc2cf.h */

/*
 * This function contains 246 FP additions, 148 FP multiplications,
 * (or, 136 additions, 38 multiplications, 110 fused multiply/add),
 * 97 stack variables, 4 constants, and 80 memory accesses
 */
#include "hc2cf.h"

static void hc2cf_20(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 38); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 38, MAKE_VOLATILE_STRIDE(80, rs)) {
	       E T4P, T4Y, T50, T4U, T4S, T4T, T4Z, T4V;
	       {
		    E T4N, T4r, T8, T2i, T4n, T2n, T4O, Tl, T2v, T3v, T3T, T4f, TN, T2b, T3F;
		    E T3p, T2R, T3z, T43, T4b, T27, T2f, T3J, T33, T2K, T3y, T40, T4c, T1G, T2e;
		    E T3I, T3a, T2C, T3w, T3W, T4e, T1e, T2c, T3G, T3i;
		    {
			 E T1, T4q, T3, T6, T2, T5;
			 T1 = Rp[0];
			 T4q = Rm[0];
			 T3 = Rp[WS(rs, 5)];
			 T6 = Rm[WS(rs, 5)];
			 T2 = W[18];
			 T5 = W[19];
			 {
			      E Ta, Td, Tg, T2j, Tb, Tj, Tf, Tc, Ti;
			      {
				   E T4o, T4, T9, T4p, T7;
				   Ta = Ip[WS(rs, 2)];
				   Td = Im[WS(rs, 2)];
				   T4o = T2 * T6;
				   T4 = T2 * T3;
				   T9 = W[8];
				   Tg = Ip[WS(rs, 7)];
				   T4p = FNMS(T5, T3, T4o);
				   T7 = FMA(T5, T6, T4);
				   T2j = T9 * Td;
				   Tb = T9 * Ta;
				   T4N = T4q - T4p;
				   T4r = T4p + T4q;
				   T8 = T1 + T7;
				   T2i = T1 - T7;
				   Tj = Im[WS(rs, 7)];
				   Tf = W[28];
			      }
			      Tc = W[9];
			      Ti = W[29];
			      {
				   E T3l, Ts, T2t, TL, TB, TE, TD, T3n, Ty, T2q, TC;
				   {
					E TH, TK, TJ, T2s, TI;
					{
					     E To, Tr, Tp, T3k, Tq, TG;
					     {
						  E T2k, Te, T2m, Tk, T2l, Th, Tn;
						  To = Rp[WS(rs, 2)];
						  T2l = Tf * Tj;
						  Th = Tf * Tg;
						  T2k = FNMS(Tc, Ta, T2j);
						  Te = FMA(Tc, Td, Tb);
						  T2m = FNMS(Ti, Tg, T2l);
						  Tk = FMA(Ti, Tj, Th);
						  Tr = Rm[WS(rs, 2)];
						  Tn = W[6];
						  T4n = T2k + T2m;
						  T2n = T2k - T2m;
						  T4O = Te - Tk;
						  Tl = Te + Tk;
						  Tp = Tn * To;
						  T3k = Tn * Tr;
					     }
					     Tq = W[7];
					     TH = Ip[WS(rs, 9)];
					     TK = Im[WS(rs, 9)];
					     TG = W[36];
					     T3l = FNMS(Tq, To, T3k);
					     Ts = FMA(Tq, Tr, Tp);
					     TJ = W[37];
					     T2s = TG * TK;
					     TI = TG * TH;
					}
					{
					     E Tu, Tx, Tt, Tw, T3m, Tv, TA;
					     Tu = Rp[WS(rs, 7)];
					     Tx = Rm[WS(rs, 7)];
					     T2t = FNMS(TJ, TH, T2s);
					     TL = FMA(TJ, TK, TI);
					     Tt = W[26];
					     Tw = W[27];
					     TB = Ip[WS(rs, 4)];
					     TE = Im[WS(rs, 4)];
					     T3m = Tt * Tx;
					     Tv = Tt * Tu;
					     TA = W[16];
					     TD = W[17];
					     T3n = FNMS(Tw, Tu, T3m);
					     Ty = FMA(Tw, Tx, Tv);
					     T2q = TA * TE;
					     TC = TA * TB;
					}
				   }
				   {
					E T3o, T3R, Tz, T2p, T2r, TF;
					T3o = T3l - T3n;
					T3R = T3l + T3n;
					Tz = Ts + Ty;
					T2p = Ts - Ty;
					T2r = FNMS(TD, TB, T2q);
					TF = FMA(TD, TE, TC);
					{
					     E T3S, T2u, TM, T3j;
					     T3S = T2r + T2t;
					     T2u = T2r - T2t;
					     TM = TF + TL;
					     T3j = TL - TF;
					     T2v = T2p - T2u;
					     T3v = T2p + T2u;
					     T3T = T3R + T3S;
					     T4f = T3S - T3R;
					     TN = Tz - TM;
					     T2b = Tz + TM;
					     T3F = T3o + T3j;
					     T3p = T3j - T3o;
					}
				   }
			      }
			 }
		    }
		    {
			 E T2Z, T1M, T2P, T25, T1V, T1Y, T1X, T31, T1S, T2M, T1W;
			 {
			      E T21, T24, T23, T2O, T22;
			      {
				   E T1I, T1L, T1H, T1K, T2Y, T1J, T20;
				   T1I = Rp[WS(rs, 6)];
				   T1L = Rm[WS(rs, 6)];
				   T1H = W[22];
				   T1K = W[23];
				   T21 = Ip[WS(rs, 3)];
				   T24 = Im[WS(rs, 3)];
				   T2Y = T1H * T1L;
				   T1J = T1H * T1I;
				   T20 = W[12];
				   T23 = W[13];
				   T2Z = FNMS(T1K, T1I, T2Y);
				   T1M = FMA(T1K, T1L, T1J);
				   T2O = T20 * T24;
				   T22 = T20 * T21;
			      }
			      {
				   E T1O, T1R, T1N, T1Q, T30, T1P, T1U;
				   T1O = Rp[WS(rs, 1)];
				   T1R = Rm[WS(rs, 1)];
				   T2P = FNMS(T23, T21, T2O);
				   T25 = FMA(T23, T24, T22);
				   T1N = W[2];
				   T1Q = W[3];
				   T1V = Ip[WS(rs, 8)];
				   T1Y = Im[WS(rs, 8)];
				   T30 = T1N * T1R;
				   T1P = T1N * T1O;
				   T1U = W[32];
				   T1X = W[33];
				   T31 = FNMS(T1Q, T1O, T30);
				   T1S = FMA(T1Q, T1R, T1P);
				   T2M = T1U * T1Y;
				   T1W = T1U * T1V;
			      }
			 }
			 {
			      E T32, T41, T1T, T2L, T2N, T1Z;
			      T32 = T2Z - T31;
			      T41 = T2Z + T31;
			      T1T = T1M + T1S;
			      T2L = T1M - T1S;
			      T2N = FNMS(T1X, T1V, T2M);
			      T1Z = FMA(T1X, T1Y, T1W);
			      {
				   E T42, T2Q, T26, T2X;
				   T42 = T2N + T2P;
				   T2Q = T2N - T2P;
				   T26 = T1Z + T25;
				   T2X = T25 - T1Z;
				   T2R = T2L - T2Q;
				   T3z = T2L + T2Q;
				   T43 = T41 + T42;
				   T4b = T42 - T41;
				   T27 = T1T - T26;
				   T2f = T1T + T26;
				   T3J = T32 + T2X;
				   T33 = T2X - T32;
			      }
			 }
		    }
		    {
			 E T36, T1l, T2I, T1E, T1u, T1x, T1w, T38, T1r, T2F, T1v;
			 {
			      E T1A, T1D, T1C, T2H, T1B;
			      {
				   E T1h, T1k, T1g, T1j, T35, T1i, T1z;
				   T1h = Rp[WS(rs, 4)];
				   T1k = Rm[WS(rs, 4)];
				   T1g = W[14];
				   T1j = W[15];
				   T1A = Ip[WS(rs, 1)];
				   T1D = Im[WS(rs, 1)];
				   T35 = T1g * T1k;
				   T1i = T1g * T1h;
				   T1z = W[4];
				   T1C = W[5];
				   T36 = FNMS(T1j, T1h, T35);
				   T1l = FMA(T1j, T1k, T1i);
				   T2H = T1z * T1D;
				   T1B = T1z * T1A;
			      }
			      {
				   E T1n, T1q, T1m, T1p, T37, T1o, T1t;
				   T1n = Rp[WS(rs, 9)];
				   T1q = Rm[WS(rs, 9)];
				   T2I = FNMS(T1C, T1A, T2H);
				   T1E = FMA(T1C, T1D, T1B);
				   T1m = W[34];
				   T1p = W[35];
				   T1u = Ip[WS(rs, 6)];
				   T1x = Im[WS(rs, 6)];
				   T37 = T1m * T1q;
				   T1o = T1m * T1n;
				   T1t = W[24];
				   T1w = W[25];
				   T38 = FNMS(T1p, T1n, T37);
				   T1r = FMA(T1p, T1q, T1o);
				   T2F = T1t * T1x;
				   T1v = T1t * T1u;
			      }
			 }
			 {
			      E T39, T3Y, T1s, T2E, T2G, T1y;
			      T39 = T36 - T38;
			      T3Y = T36 + T38;
			      T1s = T1l + T1r;
			      T2E = T1l - T1r;
			      T2G = FNMS(T1w, T1u, T2F);
			      T1y = FMA(T1w, T1x, T1v);
			      {
				   E T3Z, T2J, T1F, T34;
				   T3Z = T2G + T2I;
				   T2J = T2G - T2I;
				   T1F = T1y + T1E;
				   T34 = T1E - T1y;
				   T2K = T2E - T2J;
				   T3y = T2E + T2J;
				   T40 = T3Y + T3Z;
				   T4c = T3Z - T3Y;
				   T1G = T1s - T1F;
				   T2e = T1s + T1F;
				   T3I = T39 + T34;
				   T3a = T34 - T39;
			      }
			 }
		    }
		    {
			 E T3e, TT, T2A, T1c, T12, T15, T14, T3g, TZ, T2x, T13;
			 {
			      E T18, T1b, T1a, T2z, T19;
			      {
				   E TP, TS, TO, TR, T3d, TQ, T17;
				   TP = Rp[WS(rs, 8)];
				   TS = Rm[WS(rs, 8)];
				   TO = W[30];
				   TR = W[31];
				   T18 = Ip[WS(rs, 5)];
				   T1b = Im[WS(rs, 5)];
				   T3d = TO * TS;
				   TQ = TO * TP;
				   T17 = W[20];
				   T1a = W[21];
				   T3e = FNMS(TR, TP, T3d);
				   TT = FMA(TR, TS, TQ);
				   T2z = T17 * T1b;
				   T19 = T17 * T18;
			      }
			      {
				   E TV, TY, TU, TX, T3f, TW, T11;
				   TV = Rp[WS(rs, 3)];
				   TY = Rm[WS(rs, 3)];
				   T2A = FNMS(T1a, T18, T2z);
				   T1c = FMA(T1a, T1b, T19);
				   TU = W[10];
				   TX = W[11];
				   T12 = Ip[0];
				   T15 = Im[0];
				   T3f = TU * TY;
				   TW = TU * TV;
				   T11 = W[0];
				   T14 = W[1];
				   T3g = FNMS(TX, TV, T3f);
				   TZ = FMA(TX, TY, TW);
				   T2x = T11 * T15;
				   T13 = T11 * T12;
			      }
			 }
			 {
			      E T3h, T3U, T10, T2w, T2y, T16;
			      T3h = T3e - T3g;
			      T3U = T3e + T3g;
			      T10 = TT + TZ;
			      T2w = TT - TZ;
			      T2y = FNMS(T14, T12, T2x);
			      T16 = FMA(T14, T15, T13);
			      {
				   E T3V, T2B, T1d, T3c;
				   T3V = T2y + T2A;
				   T2B = T2y - T2A;
				   T1d = T16 + T1c;
				   T3c = T1c - T16;
				   T2C = T2w - T2B;
				   T3w = T2w + T2B;
				   T3W = T3U + T3V;
				   T4e = T3V - T3U;
				   T1e = T10 - T1d;
				   T2c = T10 + T1d;
				   T3G = T3h + T3c;
				   T3i = T3c - T3h;
			      }
			 }
		    }
		    {
			 E T4s, T4k, T4l, T45, T47, T3P, T4y, T4A, T3O;
			 {
			      E T4C, T4B, T2a, T4j, T4h, T4E, T4M, T4K, T4i, T4a;
			      {
				   E Tm, T1f, T4J, T4I, T28, T4d, T4g, T29, T49, T48;
				   T4C = T4c + T4b;
				   T4d = T4b - T4c;
				   T4g = T4e - T4f;
				   T4B = T4f + T4e;
				   T2a = T8 + Tl;
				   Tm = T8 - Tl;
				   T1f = TN + T1e;
				   T4J = T1e - TN;
				   T4I = T1G - T27;
				   T28 = T1G + T27;
				   T4j = FMA(KP618033988, T4d, T4g);
				   T4h = FNMS(KP618033988, T4g, T4d);
				   T29 = T1f + T28;
				   T49 = T1f - T28;
				   T4E = T4r - T4n;
				   T4s = T4n + T4r;
				   Rm[WS(rs, 9)] = Tm + T29;
				   T48 = FNMS(KP250000000, T29, Tm);
				   T4M = FNMS(KP618033988, T4I, T4J);
				   T4K = FMA(KP618033988, T4J, T4I);
				   T4i = FMA(KP559016994, T49, T48);
				   T4a = FNMS(KP559016994, T49, T48);
			      }
			      {
				   E T2d, T4w, T4x, T2g, T2h;
				   {
					E T3X, T4G, T4F, T44, T4D, T4L, T4H;
					T4k = T3T + T3W;
					T3X = T3T - T3W;
					T4G = T4C - T4B;
					T4D = T4B + T4C;
					Rm[WS(rs, 1)] = FMA(KP951056516, T4h, T4a);
					Rp[WS(rs, 2)] = FNMS(KP951056516, T4h, T4a);
					Rp[WS(rs, 6)] = FMA(KP951056516, T4j, T4i);
					Rm[WS(rs, 5)] = FNMS(KP951056516, T4j, T4i);
					Im[WS(rs, 9)] = T4D - T4E;
					T4F = FMA(KP250000000, T4D, T4E);
					T44 = T40 - T43;
					T4l = T40 + T43;
					T2d = T2b + T2c;
					T4w = T2b - T2c;
					T4L = FMA(KP559016994, T4G, T4F);
					T4H = FNMS(KP559016994, T4G, T4F);
					T45 = FMA(KP618033988, T44, T3X);
					T47 = FNMS(KP618033988, T3X, T44);
					Ip[WS(rs, 2)] = FMA(KP951056516, T4K, T4H);
					Im[WS(rs, 1)] = FMS(KP951056516, T4K, T4H);
					Ip[WS(rs, 6)] = FMA(KP951056516, T4M, T4L);
					Im[WS(rs, 5)] = FMS(KP951056516, T4M, T4L);
					T4x = T2f - T2e;
					T2g = T2e + T2f;
				   }
				   T2h = T2d + T2g;
				   T3P = T2d - T2g;
				   T4y = FNMS(KP618033988, T4x, T4w);
				   T4A = FMA(KP618033988, T4w, T4x);
				   Rp[0] = T2a + T2h;
				   T3O = FNMS(KP250000000, T2h, T2a);
			      }
			 }
			 {
			      E T3u, T54, T5a, T5c, T56, T53;
			      {
				   E T52, T51, T3t, T3r, T2o, T58, T59, T2T, T2V, T4u, T4t, T2U, T3s, T2W;
				   {
					E T3b, T3q, T46, T3Q, T4m;
					T52 = T3a + T33;
					T3b = T33 - T3a;
					T3q = T3i - T3p;
					T51 = T3p + T3i;
					T46 = FNMS(KP559016994, T3P, T3O);
					T3Q = FMA(KP559016994, T3P, T3O);
					T4m = T4k + T4l;
					T4u = T4k - T4l;
					Rm[WS(rs, 3)] = FMA(KP951056516, T45, T3Q);
					Rp[WS(rs, 4)] = FNMS(KP951056516, T45, T3Q);
					Rp[WS(rs, 8)] = FMA(KP951056516, T47, T46);
					Rm[WS(rs, 7)] = FNMS(KP951056516, T47, T46);
					Ip[0] = T4m + T4s;
					T4t = FNMS(KP250000000, T4m, T4s);
					T3t = FMA(KP618033988, T3b, T3q);
					T3r = FNMS(KP618033988, T3q, T3b);
				   }
				   T3u = T2i + T2n;
				   T2o = T2i - T2n;
				   {
					E T4v, T4z, T2D, T2S;
					T4v = FMA(KP559016994, T4u, T4t);
					T4z = FNMS(KP559016994, T4u, T4t);
					T2D = T2v + T2C;
					T58 = T2v - T2C;
					T59 = T2K - T2R;
					T2S = T2K + T2R;
					Ip[WS(rs, 4)] = FMA(KP951056516, T4y, T4v);
					Im[WS(rs, 3)] = FMS(KP951056516, T4y, T4v);
					Ip[WS(rs, 8)] = FMA(KP951056516, T4A, T4z);
					Im[WS(rs, 7)] = FMS(KP951056516, T4A, T4z);
					T2T = T2D + T2S;
					T2V = T2D - T2S;
				   }
				   Rm[WS(rs, 4)] = T2o + T2T;
				   T2U = FNMS(KP250000000, T2T, T2o);
				   T54 = T4O + T4N;
				   T4P = T4N - T4O;
				   T5a = FMA(KP618033988, T59, T58);
				   T5c = FNMS(KP618033988, T58, T59);
				   T3s = FMA(KP559016994, T2V, T2U);
				   T2W = FNMS(KP559016994, T2V, T2U);
				   Rp[WS(rs, 7)] = FNMS(KP951056516, T3r, T2W);
				   Rp[WS(rs, 3)] = FMA(KP951056516, T3r, T2W);
				   Rm[0] = FNMS(KP951056516, T3t, T3s);
				   Rm[WS(rs, 8)] = FMA(KP951056516, T3t, T3s);
				   T56 = T51 - T52;
				   T53 = T51 + T52;
			      }
			      {
				   E T4Q, T4R, T3N, T3L, T4X, T4W, T3B, T3D, T3H, T3K, T55, T3C, T3M, T3E;
				   T4Q = T3F + T3G;
				   T3H = T3F - T3G;
				   T3K = T3I - T3J;
				   T4R = T3I + T3J;
				   Im[WS(rs, 4)] = T53 - T54;
				   T55 = FMA(KP250000000, T53, T54);
				   T3N = FNMS(KP618033988, T3H, T3K);
				   T3L = FMA(KP618033988, T3K, T3H);
				   {
					E T57, T5b, T3x, T3A;
					T57 = FNMS(KP559016994, T56, T55);
					T5b = FMA(KP559016994, T56, T55);
					T3x = T3v + T3w;
					T4X = T3v - T3w;
					T4W = T3y - T3z;
					T3A = T3y + T3z;
					Im[0] = -(FMA(KP951056516, T5a, T57));
					Im[WS(rs, 8)] = FMS(KP951056516, T5a, T57);
					Ip[WS(rs, 7)] = FMA(KP951056516, T5c, T5b);
					Ip[WS(rs, 3)] = FNMS(KP951056516, T5c, T5b);
					T3B = T3x + T3A;
					T3D = T3x - T3A;
				   }
				   Rp[WS(rs, 5)] = T3u + T3B;
				   T3C = FNMS(KP250000000, T3B, T3u);
				   T4Y = FNMS(KP618033988, T4X, T4W);
				   T50 = FMA(KP618033988, T4W, T4X);
				   T3M = FNMS(KP559016994, T3D, T3C);
				   T3E = FMA(KP559016994, T3D, T3C);
				   Rp[WS(rs, 9)] = FNMS(KP951056516, T3L, T3E);
				   Rp[WS(rs, 1)] = FMA(KP951056516, T3L, T3E);
				   Rm[WS(rs, 2)] = FNMS(KP951056516, T3N, T3M);
				   Rm[WS(rs, 6)] = FMA(KP951056516, T3N, T3M);
				   T4U = T4Q - T4R;
				   T4S = T4Q + T4R;
			      }
			 }
		    }
	       }
	       Ip[WS(rs, 5)] = T4S + T4P;
	       T4T = FNMS(KP250000000, T4S, T4P);
	       T4Z = FMA(KP559016994, T4U, T4T);
	       T4V = FNMS(KP559016994, T4U, T4T);
	       Im[WS(rs, 2)] = -(FMA(KP951056516, T4Y, T4V));
	       Im[WS(rs, 6)] = FMS(KP951056516, T4Y, T4V);
	       Ip[WS(rs, 9)] = FMA(KP951056516, T50, T4Z);
	       Ip[WS(rs, 1)] = FNMS(KP951056516, T50, T4Z);
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 20},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 20, "hc2cf_20", twinstr, &GENUS, {136, 38, 110, 0} };

void X(codelet_hc2cf_20) (planner *p) {
     X(khc2c_register) (p, hc2cf_20, &desc, HC2C_VIA_RDFT);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_hc2c.native -compact -variables 4 -pipeline-latency 4 -n 20 -dit -name hc2cf_20 -include hc2cf.h */

/*
 * This function contains 246 FP additions, 124 FP multiplications,
 * (or, 184 additions, 62 multiplications, 62 fused multiply/add),
 * 85 stack variables, 4 constants, and 80 memory accesses
 */
#include "hc2cf.h"

static void hc2cf_20(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 38); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 38, MAKE_VOLATILE_STRIDE(80, rs)) {
	       E Tj, T1R, T4j, T4s, T2q, T37, T3Q, T42, T1r, T1O, T1P, T3p, T3s, T3K, T3A;
	       E T3B, T3Z, T1V, T1W, T1X, T23, T28, T4q, T2W, T2X, T4f, T33, T34, T35, T2G;
	       E T2L, T2M, TG, T13, T14, T3i, T3l, T3J, T3D, T3E, T40, T1S, T1T, T1U, T2e;
	       E T2j, T4p, T2T, T2U, T4e, T30, T31, T32, T2v, T2A, T2B;
	       {
		    E T1, T3O, T6, T3N, Tc, T2n, Th, T2o;
		    T1 = Rp[0];
		    T3O = Rm[0];
		    {
			 E T3, T5, T2, T4;
			 T3 = Rp[WS(rs, 5)];
			 T5 = Rm[WS(rs, 5)];
			 T2 = W[18];
			 T4 = W[19];
			 T6 = FMA(T2, T3, T4 * T5);
			 T3N = FNMS(T4, T3, T2 * T5);
		    }
		    {
			 E T9, Tb, T8, Ta;
			 T9 = Ip[WS(rs, 2)];
			 Tb = Im[WS(rs, 2)];
			 T8 = W[8];
			 Ta = W[9];
			 Tc = FMA(T8, T9, Ta * Tb);
			 T2n = FNMS(Ta, T9, T8 * Tb);
		    }
		    {
			 E Te, Tg, Td, Tf;
			 Te = Ip[WS(rs, 7)];
			 Tg = Im[WS(rs, 7)];
			 Td = W[28];
			 Tf = W[29];
			 Th = FMA(Td, Te, Tf * Tg);
			 T2o = FNMS(Tf, Te, Td * Tg);
		    }
		    {
			 E T7, Ti, T4h, T4i;
			 T7 = T1 + T6;
			 Ti = Tc + Th;
			 Tj = T7 - Ti;
			 T1R = T7 + Ti;
			 T4h = T3O - T3N;
			 T4i = Tc - Th;
			 T4j = T4h - T4i;
			 T4s = T4i + T4h;
		    }
		    {
			 E T2m, T2p, T3M, T3P;
			 T2m = T1 - T6;
			 T2p = T2n - T2o;
			 T2q = T2m - T2p;
			 T37 = T2m + T2p;
			 T3M = T2n + T2o;
			 T3P = T3N + T3O;
			 T3Q = T3M + T3P;
			 T42 = T3P - T3M;
		    }
	       }
	       {
		    E T1f, T3n, T21, T2C, T1N, T3r, T27, T2K, T1q, T3o, T22, T2F, T1C, T3q, T26;
		    E T2H;
		    {
			 E T19, T1Z, T1e, T20;
			 {
			      E T16, T18, T15, T17;
			      T16 = Rp[WS(rs, 4)];
			      T18 = Rm[WS(rs, 4)];
			      T15 = W[14];
			      T17 = W[15];
			      T19 = FMA(T15, T16, T17 * T18);
			      T1Z = FNMS(T17, T16, T15 * T18);
			 }
			 {
			      E T1b, T1d, T1a, T1c;
			      T1b = Rp[WS(rs, 9)];
			      T1d = Rm[WS(rs, 9)];
			      T1a = W[34];
			      T1c = W[35];
			      T1e = FMA(T1a, T1b, T1c * T1d);
			      T20 = FNMS(T1c, T1b, T1a * T1d);
			 }
			 T1f = T19 + T1e;
			 T3n = T1Z + T20;
			 T21 = T1Z - T20;
			 T2C = T19 - T1e;
		    }
		    {
			 E T1H, T2I, T1M, T2J;
			 {
			      E T1E, T1G, T1D, T1F;
			      T1E = Ip[WS(rs, 8)];
			      T1G = Im[WS(rs, 8)];
			      T1D = W[32];
			      T1F = W[33];
			      T1H = FMA(T1D, T1E, T1F * T1G);
			      T2I = FNMS(T1F, T1E, T1D * T1G);
			 }
			 {
			      E T1J, T1L, T1I, T1K;
			      T1J = Ip[WS(rs, 3)];
			      T1L = Im[WS(rs, 3)];
			      T1I = W[12];
			      T1K = W[13];
			      T1M = FMA(T1I, T1J, T1K * T1L);
			      T2J = FNMS(T1K, T1J, T1I * T1L);
			 }
			 T1N = T1H + T1M;
			 T3r = T2I + T2J;
			 T27 = T1H - T1M;
			 T2K = T2I - T2J;
		    }
		    {
			 E T1k, T2D, T1p, T2E;
			 {
			      E T1h, T1j, T1g, T1i;
			      T1h = Ip[WS(rs, 6)];
			      T1j = Im[WS(rs, 6)];
			      T1g = W[24];
			      T1i = W[25];
			      T1k = FMA(T1g, T1h, T1i * T1j);
			      T2D = FNMS(T1i, T1h, T1g * T1j);
			 }
			 {
			      E T1m, T1o, T1l, T1n;
			      T1m = Ip[WS(rs, 1)];
			      T1o = Im[WS(rs, 1)];
			      T1l = W[4];
			      T1n = W[5];
			      T1p = FMA(T1l, T1m, T1n * T1o);
			      T2E = FNMS(T1n, T1m, T1l * T1o);
			 }
			 T1q = T1k + T1p;
			 T3o = T2D + T2E;
			 T22 = T1k - T1p;
			 T2F = T2D - T2E;
		    }
		    {
			 E T1w, T24, T1B, T25;
			 {
			      E T1t, T1v, T1s, T1u;
			      T1t = Rp[WS(rs, 6)];
			      T1v = Rm[WS(rs, 6)];
			      T1s = W[22];
			      T1u = W[23];
			      T1w = FMA(T1s, T1t, T1u * T1v);
			      T24 = FNMS(T1u, T1t, T1s * T1v);
			 }
			 {
			      E T1y, T1A, T1x, T1z;
			      T1y = Rp[WS(rs, 1)];
			      T1A = Rm[WS(rs, 1)];
			      T1x = W[2];
			      T1z = W[3];
			      T1B = FMA(T1x, T1y, T1z * T1A);
			      T25 = FNMS(T1z, T1y, T1x * T1A);
			 }
			 T1C = T1w + T1B;
			 T3q = T24 + T25;
			 T26 = T24 - T25;
			 T2H = T1w - T1B;
		    }
		    T1r = T1f - T1q;
		    T1O = T1C - T1N;
		    T1P = T1r + T1O;
		    T3p = T3n + T3o;
		    T3s = T3q + T3r;
		    T3K = T3p + T3s;
		    T3A = T3n - T3o;
		    T3B = T3r - T3q;
		    T3Z = T3B - T3A;
		    T1V = T1f + T1q;
		    T1W = T1C + T1N;
		    T1X = T1V + T1W;
		    T23 = T21 + T22;
		    T28 = T26 + T27;
		    T4q = T23 + T28;
		    T2W = T21 - T22;
		    T2X = T26 - T27;
		    T4f = T2W + T2X;
		    T33 = T2C + T2F;
		    T34 = T2H + T2K;
		    T35 = T33 + T34;
		    T2G = T2C - T2F;
		    T2L = T2H - T2K;
		    T2M = T2G + T2L;
	       }
	       {
		    E Tu, T3g, T2c, T2r, T12, T3k, T2f, T2z, TF, T3h, T2d, T2u, TR, T3j, T2i;
		    E T2w;
		    {
			 E To, T2a, Tt, T2b;
			 {
			      E Tl, Tn, Tk, Tm;
			      Tl = Rp[WS(rs, 2)];
			      Tn = Rm[WS(rs, 2)];
			      Tk = W[6];
			      Tm = W[7];
			      To = FMA(Tk, Tl, Tm * Tn);
			      T2a = FNMS(Tm, Tl, Tk * Tn);
			 }
			 {
			      E Tq, Ts, Tp, Tr;
			      Tq = Rp[WS(rs, 7)];
			      Ts = Rm[WS(rs, 7)];
			      Tp = W[26];
			      Tr = W[27];
			      Tt = FMA(Tp, Tq, Tr * Ts);
			      T2b = FNMS(Tr, Tq, Tp * Ts);
			 }
			 Tu = To + Tt;
			 T3g = T2a + T2b;
			 T2c = T2a - T2b;
			 T2r = To - Tt;
		    }
		    {
			 E TW, T2x, T11, T2y;
			 {
			      E TT, TV, TS, TU;
			      TT = Ip[0];
			      TV = Im[0];
			      TS = W[0];
			      TU = W[1];
			      TW = FMA(TS, TT, TU * TV);
			      T2x = FNMS(TU, TT, TS * TV);
			 }
			 {
			      E TY, T10, TX, TZ;
			      TY = Ip[WS(rs, 5)];
			      T10 = Im[WS(rs, 5)];
			      TX = W[20];
			      TZ = W[21];
			      T11 = FMA(TX, TY, TZ * T10);
			      T2y = FNMS(TZ, TY, TX * T10);
			 }
			 T12 = TW + T11;
			 T3k = T2x + T2y;
			 T2f = T11 - TW;
			 T2z = T2x - T2y;
		    }
		    {
			 E Tz, T2s, TE, T2t;
			 {
			      E Tw, Ty, Tv, Tx;
			      Tw = Ip[WS(rs, 4)];
			      Ty = Im[WS(rs, 4)];
			      Tv = W[16];
			      Tx = W[17];
			      Tz = FMA(Tv, Tw, Tx * Ty);
			      T2s = FNMS(Tx, Tw, Tv * Ty);
			 }
			 {
			      E TB, TD, TA, TC;
			      TB = Ip[WS(rs, 9)];
			      TD = Im[WS(rs, 9)];
			      TA = W[36];
			      TC = W[37];
			      TE = FMA(TA, TB, TC * TD);
			      T2t = FNMS(TC, TB, TA * TD);
			 }
			 TF = Tz + TE;
			 T3h = T2s + T2t;
			 T2d = Tz - TE;
			 T2u = T2s - T2t;
		    }
		    {
			 E TL, T2g, TQ, T2h;
			 {
			      E TI, TK, TH, TJ;
			      TI = Rp[WS(rs, 8)];
			      TK = Rm[WS(rs, 8)];
			      TH = W[30];
			      TJ = W[31];
			      TL = FMA(TH, TI, TJ * TK);
			      T2g = FNMS(TJ, TI, TH * TK);
			 }
			 {
			      E TN, TP, TM, TO;
			      TN = Rp[WS(rs, 3)];
			      TP = Rm[WS(rs, 3)];
			      TM = W[10];
			      TO = W[11];
			      TQ = FMA(TM, TN, TO * TP);
			      T2h = FNMS(TO, TN, TM * TP);
			 }
			 TR = TL + TQ;
			 T3j = T2g + T2h;
			 T2i = T2g - T2h;
			 T2w = TL - TQ;
		    }
		    TG = Tu - TF;
		    T13 = TR - T12;
		    T14 = TG + T13;
		    T3i = T3g + T3h;
		    T3l = T3j + T3k;
		    T3J = T3i + T3l;
		    T3D = T3g - T3h;
		    T3E = T3j - T3k;
		    T40 = T3D + T3E;
		    T1S = Tu + TF;
		    T1T = TR + T12;
		    T1U = T1S + T1T;
		    T2e = T2c + T2d;
		    T2j = T2f - T2i;
		    T4p = T2j - T2e;
		    T2T = T2c - T2d;
		    T2U = T2i + T2f;
		    T4e = T2T + T2U;
		    T30 = T2r + T2u;
		    T31 = T2w + T2z;
		    T32 = T30 + T31;
		    T2v = T2r - T2u;
		    T2A = T2w - T2z;
		    T2B = T2v + T2A;
	       }
	       {
		    E T3y, T1Q, T3x, T3G, T3I, T3C, T3F, T3H, T3z;
		    T3y = KP559016994 * (T14 - T1P);
		    T1Q = T14 + T1P;
		    T3x = FNMS(KP250000000, T1Q, Tj);
		    T3C = T3A + T3B;
		    T3F = T3D - T3E;
		    T3G = FNMS(KP587785252, T3F, KP951056516 * T3C);
		    T3I = FMA(KP951056516, T3F, KP587785252 * T3C);
		    Rm[WS(rs, 9)] = Tj + T1Q;
		    T3H = T3y + T3x;
		    Rm[WS(rs, 5)] = T3H - T3I;
		    Rp[WS(rs, 6)] = T3H + T3I;
		    T3z = T3x - T3y;
		    Rp[WS(rs, 2)] = T3z - T3G;
		    Rm[WS(rs, 1)] = T3z + T3G;
	       }
	       {
		    E T47, T41, T46, T45, T49, T43, T44, T4a, T48;
		    T47 = KP559016994 * (T40 + T3Z);
		    T41 = T3Z - T40;
		    T46 = FMA(KP250000000, T41, T42);
		    T43 = T13 - TG;
		    T44 = T1r - T1O;
		    T45 = FMA(KP587785252, T43, KP951056516 * T44);
		    T49 = FNMS(KP587785252, T44, KP951056516 * T43);
		    Im[WS(rs, 9)] = T41 - T42;
		    T4a = T47 + T46;
		    Im[WS(rs, 5)] = T49 - T4a;
		    Ip[WS(rs, 6)] = T49 + T4a;
		    T48 = T46 - T47;
		    Im[WS(rs, 1)] = T45 - T48;
		    Ip[WS(rs, 2)] = T45 + T48;
	       }
	       {
		    E T3d, T1Y, T3e, T3u, T3w, T3m, T3t, T3v, T3f;
		    T3d = KP559016994 * (T1U - T1X);
		    T1Y = T1U + T1X;
		    T3e = FNMS(KP250000000, T1Y, T1R);
		    T3m = T3i - T3l;
		    T3t = T3p - T3s;
		    T3u = FMA(KP951056516, T3m, KP587785252 * T3t);
		    T3w = FNMS(KP587785252, T3m, KP951056516 * T3t);
		    Rp[0] = T1R + T1Y;
		    T3v = T3e - T3d;
		    Rm[WS(rs, 7)] = T3v - T3w;
		    Rp[WS(rs, 8)] = T3v + T3w;
		    T3f = T3d + T3e;
		    Rp[WS(rs, 4)] = T3f - T3u;
		    Rm[WS(rs, 3)] = T3f + T3u;
	       }
	       {
		    E T3U, T3L, T3V, T3T, T3X, T3R, T3S, T3Y, T3W;
		    T3U = KP559016994 * (T3J - T3K);
		    T3L = T3J + T3K;
		    T3V = FNMS(KP250000000, T3L, T3Q);
		    T3R = T1S - T1T;
		    T3S = T1V - T1W;
		    T3T = FMA(KP951056516, T3R, KP587785252 * T3S);
		    T3X = FNMS(KP951056516, T3S, KP587785252 * T3R);
		    Ip[0] = T3L + T3Q;
		    T3Y = T3V - T3U;
		    Im[WS(rs, 7)] = T3X - T3Y;
		    Ip[WS(rs, 8)] = T3X + T3Y;
		    T3W = T3U + T3V;
		    Im[WS(rs, 3)] = T3T - T3W;
		    Ip[WS(rs, 4)] = T3T + T3W;
	       }
	       {
		    E T2P, T2N, T2O, T2l, T2R, T29, T2k, T2S, T2Q;
		    T2P = KP559016994 * (T2B - T2M);
		    T2N = T2B + T2M;
		    T2O = FNMS(KP250000000, T2N, T2q);
		    T29 = T23 - T28;
		    T2k = T2e + T2j;
		    T2l = FNMS(KP587785252, T2k, KP951056516 * T29);
		    T2R = FMA(KP951056516, T2k, KP587785252 * T29);
		    Rm[WS(rs, 4)] = T2q + T2N;
		    T2S = T2P + T2O;
		    Rm[WS(rs, 8)] = T2R + T2S;
		    Rm[0] = T2S - T2R;
		    T2Q = T2O - T2P;
		    Rp[WS(rs, 3)] = T2l + T2Q;
		    Rp[WS(rs, 7)] = T2Q - T2l;
	       }
	       {
		    E T4w, T4r, T4x, T4v, T4A, T4t, T4u, T4z, T4y;
		    T4w = KP559016994 * (T4p + T4q);
		    T4r = T4p - T4q;
		    T4x = FMA(KP250000000, T4r, T4s);
		    T4t = T2v - T2A;
		    T4u = T2G - T2L;
		    T4v = FMA(KP951056516, T4t, KP587785252 * T4u);
		    T4A = FNMS(KP587785252, T4t, KP951056516 * T4u);
		    Im[WS(rs, 4)] = T4r - T4s;
		    T4z = T4w + T4x;
		    Ip[WS(rs, 3)] = T4z - T4A;
		    Ip[WS(rs, 7)] = T4A + T4z;
		    T4y = T4w - T4x;
		    Im[WS(rs, 8)] = T4v + T4y;
		    Im[0] = T4y - T4v;
	       }
	       {
		    E T36, T38, T39, T2Z, T3b, T2V, T2Y, T3c, T3a;
		    T36 = KP559016994 * (T32 - T35);
		    T38 = T32 + T35;
		    T39 = FNMS(KP250000000, T38, T37);
		    T2V = T2T - T2U;
		    T2Y = T2W - T2X;
		    T2Z = FMA(KP951056516, T2V, KP587785252 * T2Y);
		    T3b = FNMS(KP587785252, T2V, KP951056516 * T2Y);
		    Rp[WS(rs, 5)] = T37 + T38;
		    T3c = T39 - T36;
		    Rm[WS(rs, 6)] = T3b + T3c;
		    Rm[WS(rs, 2)] = T3c - T3b;
		    T3a = T36 + T39;
		    Rp[WS(rs, 1)] = T2Z + T3a;
		    Rp[WS(rs, 9)] = T3a - T2Z;
	       }
	       {
		    E T4g, T4k, T4l, T4d, T4o, T4b, T4c, T4n, T4m;
		    T4g = KP559016994 * (T4e - T4f);
		    T4k = T4e + T4f;
		    T4l = FNMS(KP250000000, T4k, T4j);
		    T4b = T33 - T34;
		    T4c = T30 - T31;
		    T4d = FNMS(KP587785252, T4c, KP951056516 * T4b);
		    T4o = FMA(KP951056516, T4c, KP587785252 * T4b);
		    Ip[WS(rs, 5)] = T4k + T4j;
		    T4n = T4g + T4l;
		    Ip[WS(rs, 1)] = T4n - T4o;
		    Ip[WS(rs, 9)] = T4o + T4n;
		    T4m = T4g - T4l;
		    Im[WS(rs, 6)] = T4d + T4m;
		    Im[WS(rs, 2)] = T4m - T4d;
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 20},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 20, "hc2cf_20", twinstr, &GENUS, {184, 62, 62, 0} };

void X(codelet_hc2cf_20) (planner *p) {
     X(khc2c_register) (p, hc2cf_20, &desc, HC2C_VIA_RDFT);
}
#endif				/* HAVE_FMA */

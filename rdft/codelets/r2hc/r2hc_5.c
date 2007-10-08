/*
 * Copyright (c) 2003, 2006 Matteo Frigo
 * Copyright (c) 2003, 2006 Massachusetts Institute of Technology
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Jul  2 14:18:40 EDT 2006 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_r2hc -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 5 -name r2hc_5 -include r2hc.h */

/*
 * This function contains 12 FP additions, 7 FP multiplications,
 * (or, 7 additions, 2 multiplications, 5 fused multiply/add),
 * 17 stack variables, and 10 memory accesses
 */
/*
 * Generator Id's : 
 * $Id: algsimp.ml,v 1.9 2006-02-12 23:34:12 athena Exp $
 * $Id: fft.ml,v 1.4 2006-01-05 03:04:27 stevenj Exp $
 * $Id: gen_r2hc.ml,v 1.18 2006-02-12 23:34:12 athena Exp $
 */

#include "r2hc.h"

static void r2hc_5(const R *I, R *ro, R *io, stride is, stride ros, stride ios, INT v, INT ivs, INT ovs)
{
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     INT i;
     for (i = v; i > 0; i = i - 1, I = I + ivs, ro = ro + ovs, io = io + ovs, MAKE_VOLATILE_STRIDE(is), MAKE_VOLATILE_STRIDE(ros), MAKE_VOLATILE_STRIDE(ios)) {
	  E T7, T1, T2, T4, T5;
	  T7 = I[0];
	  T1 = I[WS(is, 4)];
	  T2 = I[WS(is, 1)];
	  T4 = I[WS(is, 2)];
	  T5 = I[WS(is, 3)];
	  {
	       E T3, T8, T6, T9, Tc, Ta, Tb;
	       T3 = T1 - T2;
	       T8 = T2 + T1;
	       T6 = T4 - T5;
	       T9 = T4 + T5;
	       io[WS(ios, 2)] = KP951056516 * (FMA(KP618033988, T3, T6));
	       io[WS(ios, 1)] = KP951056516 * (FNMS(KP618033988, T6, T3));
	       Tc = T8 - T9;
	       Ta = T8 + T9;
	       Tb = FNMS(KP250000000, Ta, T7);
	       ro[0] = T7 + Ta;
	       ro[WS(ros, 2)] = FNMS(KP559016994, Tc, Tb);
	       ro[WS(ros, 1)] = FMA(KP559016994, Tc, Tb);
	  }
     }
}

static const kr2hc_desc desc = { 5, "r2hc_5", {7, 2, 5, 0}, &GENUS, 0, 0, 0, 0, 0 };

void X(codelet_r2hc_5) (planner *p) {
     X(kr2hc_register) (p, r2hc_5, &desc);
}

#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_r2hc -compact -variables 4 -pipeline-latency 4 -n 5 -name r2hc_5 -include r2hc.h */

/*
 * This function contains 12 FP additions, 6 FP multiplications,
 * (or, 9 additions, 3 multiplications, 3 fused multiply/add),
 * 17 stack variables, and 10 memory accesses
 */
/*
 * Generator Id's : 
 * $Id: algsimp.ml,v 1.9 2006-02-12 23:34:12 athena Exp $
 * $Id: fft.ml,v 1.4 2006-01-05 03:04:27 stevenj Exp $
 * $Id: gen_r2hc.ml,v 1.18 2006-02-12 23:34:12 athena Exp $
 */

#include "r2hc.h"

static void r2hc_5(const R *I, R *ro, R *io, stride is, stride ros, stride ios, INT v, INT ivs, INT ovs)
{
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     INT i;
     for (i = v; i > 0; i = i - 1, I = I + ivs, ro = ro + ovs, io = io + ovs, MAKE_VOLATILE_STRIDE(is), MAKE_VOLATILE_STRIDE(ros), MAKE_VOLATILE_STRIDE(ios)) {
	  E Ta, T7, T8, T3, Tb, T6, T9, Tc;
	  Ta = I[0];
	  {
	       E T1, T2, T4, T5;
	       T1 = I[WS(is, 4)];
	       T2 = I[WS(is, 1)];
	       T7 = T2 + T1;
	       T4 = I[WS(is, 2)];
	       T5 = I[WS(is, 3)];
	       T8 = T4 + T5;
	       T3 = T1 - T2;
	       Tb = T7 + T8;
	       T6 = T4 - T5;
	  }
	  io[WS(ios, 1)] = FNMS(KP587785252, T6, KP951056516 * T3);
	  ro[0] = Ta + Tb;
	  io[WS(ios, 2)] = FMA(KP587785252, T3, KP951056516 * T6);
	  T9 = KP559016994 * (T7 - T8);
	  Tc = FNMS(KP250000000, Tb, Ta);
	  ro[WS(ros, 1)] = T9 + Tc;
	  ro[WS(ros, 2)] = Tc - T9;
     }
}

static const kr2hc_desc desc = { 5, "r2hc_5", {9, 3, 3, 0}, &GENUS, 0, 0, 0, 0, 0 };

void X(codelet_r2hc_5) (planner *p) {
     X(kr2hc_register) (p, r2hc_5, &desc);
}

#endif				/* HAVE_FMA */

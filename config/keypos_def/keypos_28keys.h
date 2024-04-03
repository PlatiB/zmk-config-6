/* This file is copied and then modified from https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h
 * LICENSE for that repo is inlined below.

 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*                              28 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  ╰───╮ 20  21  22     │     23  24  25 ╭───╯ ╰───╮ LB3 LB2 LB1     │     RB1 RB2 RB3 ╭───╯
      ╰───────────╮ 26 │ 27 ╭───────────╯         ╰───────────╮ LH0 │ RH0 ╭───────────╯
                  ╰────┴────╯                                 ╰─────┴─────╯             */

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB1 22  // left-bottom row
#define LB2 21
#define LB3 20

#define RB1 23  // right-bottom row
#define RB2 24
#define RB3 25

#define LH0 26  // left thumb key

#define RH0 27  // right thumb key

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4     LB1 LB2 LB3      // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4     RB1 RB2 RB3      // right-hand keys
#define THUMBS         LH0 RH0                                              // thumb keys

#define LAYER_FROM36( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
              k30, k31, k32, k33, k34, k35            \
) \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
         k21, k22, k23,           k26, k27, k28,      \
                        k32, k33

/* SPDX-License-Identifier: BSD-2-Clause */
/*
 *  Auto Sudoku program - struct definitions
 *
 *  Copyright (C) 2021 Kiyoshi Owada
 */

#define	SEL	3

#if SEL == 0

#define	QUIZ_DATA			\
	{				\
		{0,0,1, 0,9,0, 0,0,0},	\
		{0,2,0, 0,0,6, 4,0,0},	\
		{3,0,0, 7,0,0, 0,5,0},	\
					\
                {0,0,2, 0,0,1, 0,6,0},	\
                {8,0,0, 0,6,0, 0,0,9},	\
		{0,5,0, 4,0,0, 7,0,0},	\
					\
		{0,4,0, 0,0,8, 0,0,1},	\
		{0,0,5, 9,0,0, 0,2,0},	\
		{0,0,0, 0,5,0, 3,0,0}	\
	}

#elif SEL == 1

#define	QUIZ_DATA			\
	{				\
		{0,0,9, 8,0,0, 0,1,0},	\
		{2,0,1, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,6, 8,0,4},	\
					\
		{9,0,0, 0,0,0, 0,4,0},	\
		{0,0,0, 0,2,0, 0,7,0},	\
		{3,0,7, 5,0,1, 0,0,0},	\
					\
		{0,1,0, 9,0,0, 7,0,0},	\
		{0,0,0, 0,0,7, 3,8,0},	\
		{0,0,0, 6,0,0, 0,0,0}	\
	}

#elif SEL == 2

#define	QUIZ_DATA			\
	{				\
		{0,0,0, 0,0,1, 0,0,0},	\
		{0,3,6, 7,0,0, 5,0,0},	\
		{5,0,0, 0,8,0, 0,2,0},	\
					\
		{0,9,7, 3,0,0, 0,0,5},	\
		{0,0,0, 0,0,0, 0,0,0},	\
		{1,0,0, 0,0,2, 8,3,0},	\
					\
		{0,8,0, 0,5,0, 0,0,9},	\
		{0,0,9, 0,0,6, 2,7,0},	\
		{0,0,0, 1,0,0, 0,0,0}	\
	}

#elif SEL == 3

#define	QUIZ_DATA			\
	{				\
		{7,0,0, 0,5,0, 0,6,0},	\
		{0,0,9, 0,0,4, 0,0,2},	\
		{0,8,0, 0,0,0, 9,0,0},	\
					\
		{0,0,0, 9,0,0, 0,2,0},	\
		{6,0,0, 0,7,0, 0,0,5},	\
		{0,2,0, 0,0,1, 0,0,0},	\
					\
		{0,0,4, 0,0,0, 0,1,0},	\
		{9,0,0, 3,0,0, 7,0,0},	\
		{0,5,0, 0,6,0, 0,0,8}	\
	}

#else

#define	QUIZ_DATA			\
	{				\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0},	\
					\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0},	\
					\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0},	\
		{0,0,0, 0,0,0, 0,0,0}	\
	}

#endif


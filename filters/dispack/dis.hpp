/*
 * This file is a part of Pcompress, a chunked parallel multi-
 * algorithm lossless compression and decompression program.
 *
 * Copyright (C) 2012-2013 Moinak Ghosh. All rights reserved.
 * Use is subject to license terms.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * moinakg@belenix.org, http://moinakg.wordpress.com/
 */

#ifndef __DIS_HPP__
#define __DIS_HPP__

#include <utils.h>

#ifdef	__cplusplus
extern "C" {
#endif

int dispack_encode(uchar_t *from, uint64_t fromlen, uchar_t *to, uint64_t *_dstlen);
int dispack_decode(uchar_t *from, uint64_t fromlen, uchar_t *to, uint64_t *dstlen);

#ifdef	__cplusplus
}
#endif

#endif

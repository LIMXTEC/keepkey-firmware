/*
 * This file is part of the KeepKey project.
 *
 * Copyright (C) 2018 KeepKey LLC
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keepkey/board/variant.h"

#include "keepkey/board/timer.h"


const uint8_t dash_logo_data[629] =
{
    0x13, 0x0, 0xff, 0xe, 0x1b, 0xff, 0xf8, 0xf0, 0xeb, 0xd9, 0xba, 0x9c, 0x7e, 0x4a, 0x13, 0x21, 0x0, 0xff, 0x3b, 0x23, 0xff, 0xfc, 0xda, 0x92, 0x3e, 0x1, 0x1d, 0x0, 0xff, 0x68, 0x26, 0xff, 0xfd, 0xdb, 0x6b, 0x7, 0x1b, 0x0, 0xff, 0x94, 0x28, 0xff, 0xfe, 0xe0, 0x4f, 0x1a, 0x0, 0xff, 0xc1, 0x2a, 0xff, 0xfe, 0x9c, 0x8, 0x18, 0x0, 0xff, 0xef, 0x2b, 0xff, 0xfe, 0xc3, 0xf, 0x16, 0x0, 0xff, 0x1c, 0x2d, 0xff, 0xfe, 0xc3, 0x6, 0x15, 0x0, 0xff, 0x49, 0x2e, 0xff, 0xff, 0x95, 0x15, 0x0, 0xff, 0x75, 0x2f, 0xff, 0xff, 0x42, 0x14, 0x0, 0xff, 0xa2, 0x2f, 0xff, 0xfe, 0xcf, 0x1, 0x13, 0x0, 0xff, 0xd0, 0x30, 0xff, 0xff, 0x48, 0x12, 0x0, 0xfe, 0x2, 0xd9, 0x15, 0xe0, 0xfd, 0xe4, 0xf0, 0xf2, 0x18, 0xff, 0xff, 0xaa, 0x2c, 0x0, 0xfa, 0x5, 0x1b, 0x3e, 0x69, 0xa3, 0xec, 0x12, 0xff, 0xfe, 0xf8, 0xc, 0x30, 0x0, 0xfd, 0x3, 0x4f, 0xca, 0x11, 0xff, 0xff, 0x46, 0x32, 0x0, 0xfd, 0x1, 0x6c, 0xfa, 0xf, 0xff, 0xff, 0x82, 0x34, 0x0, 0xfe, 0x4f, 0xfd, 0xe, 0xff, 0xff, 0xae, 0x35, 0x0, 0xff, 0x84, 0xe, 0xff, 0xff, 0xce, 0x35, 0x0, 0xfe, 0x9, 0xec, 0xd, 0xff, 0xff, 0xeb, 0x36, 0x0, 0xff, 0x92, 0xd, 0xff, 0xff, 0xf9, 0x36, 0x0, 0xff, 0x4e, 0xe, 0xff, 0x36, 0x0, 0xff, 0x25, 0xe, 0xff, 0x36, 0x0, 0xff, 0x12, 0xd, 0xff, 0xff, 0xfe, 0x6, 0x0, 0xfd, 0x2c, 0x5b, 0x71, 0x19, 0x80, 0xff, 0x7a, 0x13, 0x0, 0xff, 0x4, 0xd, 0xff, 0xff, 0xf0, 0x4, 0x0, 0xfe, 0x5b, 0xd8, 0x1c, 0xff, 0xff, 0xc9, 0x13, 0x0, 0xff, 0xa, 0xd, 0xff, 0xff, 0xe3, 0x2, 0x0, 0xfe, 0x1, 0x97, 0x1e, 0xff, 0xff, 0x8f, 0x13, 0x0, 0xff, 0x1c, 0xd, 0xff, 0xff, 0xc8, 0x2, 0x0, 0xff, 0x69, 0x1f, 0xff, 0xff, 0x56, 0x13, 0x0, 0xff, 0x3c, 0xd, 0xff, 0xfc, 0xac, 0x0, 0xc, 0xf0, 0x1f, 0xff, 0xff, 0x1c, 0x13, 0x0, 0xff, 0x66, 0xd, 0xff, 0xfd, 0x8f, 0x0, 0x63, 0x1f, 0xff, 0xff, 0xe3, 0x14, 0x0, 0xff, 0x94, 0xd, 0xff, 0xfd, 0x67, 0x0, 0xb2, 0x1f, 0xff, 0xff, 0xa3, 0x14, 0x0, 0xff, 0xc3, 0xd, 0xff, 0xfd, 0x3f, 0x2, 0xee, 0x1f, 0xff, 0xff, 0x54, 0x13, 0x0, 0xfe, 0x4, 0xf4, 0xd, 0xff, 0xfe, 0x14, 0x2a, 0x1f, 0xff, 0xfe, 0xe6, 0x6, 0x13, 0x0, 0xff, 0x34, 0xd, 0xff, 0xfd, 0xde, 0x0, 0x64, 0x1f, 0xff, 0xff, 0x56, 0x14, 0x0, 0xff, 0x71, 0xd, 0xff, 0xfd, 0xa5, 0x0, 0x9c, 0x1e, 0xff, 0xff, 0x84, 0x15, 0x0, 0xff, 0xb3, 0xd, 0xff, 0xfd, 0x6a, 0x0, 0xd6, 0x1c, 0xff, 0xfe, 0xca, 0x49, 0x15, 0x0, 0xfe, 0x8, 0xf6, 0xd, 0xff, 0xfd, 0x32, 0x0, 0x6e, 0x19, 0x70, 0xfd, 0x69, 0x4f, 0x1e, 0x17, 0x0, 0xff, 0x50, 0xd, 0xff, 0xfe, 0xea, 0x2, 0x35, 0x0, 0xff, 0xb2, 0xd, 0xff, 0xff, 0xa1, 0x35, 0x0, 0xfe, 0x25, 0xfc, 0xd, 0xff, 0xff, 0x4d, 0x35, 0x0, 0xff, 0xa8, 0xd, 0xff, 0xfe, 0xf0, 0x7, 0x34, 0x0, 0xff, 0x41, 0xe, 0xff, 0xff, 0x93, 0x34, 0x0, 0xfe, 0x18, 0xe5, 0xe, 0xff, 0xff, 0x2d, 0x33, 0x0, 0xfe, 0x15, 0xd3, 0xe, 0xff, 0xff, 0xba, 0x33, 0x0, 0xfe, 0x30, 0xdd, 0xf, 0xff, 0xff, 0x40, 0x31, 0x0, 0xfd, 0xd, 0x84, 0xf9, 0xf, 0xff, 0xff, 0xbc, 0x30, 0x0, 0xfd, 0x2d, 0x8b, 0xee, 0x10, 0xff, 0xfe, 0xfc, 0x2f, 0x2a, 0x0, 0xfa, 0x5, 0x19, 0x3d, 0x65, 0x9c, 0xdb, 0x13, 0xff, 0xff, 0x91, 0x12, 0x0, 0xff, 0xb6, 0x16, 0xe0, 0xfe, 0xe9, 0xf0, 0x18, 0xff, 0xfe, 0xdb, 0xa, 0x11, 0x0, 0xfe, 0x3, 0xf7, 0x2f, 0xff, 0xfe, 0xf8, 0x34, 0x12, 0x0, 0xff, 0x27, 0x30, 0xff, 0xff, 0x61, 0x13, 0x0, 0xff, 0x54, 0x2f, 0xff, 0xff, 0x80, 0x14, 0x0, 0xff, 0x81, 0x2e, 0xff, 0xff, 0x88, 0x15, 0x0, 0xff, 0xae, 0x2c, 0xff, 0xfe, 0xfd, 0x72, 0x16, 0x0, 0xff, 0xdb, 0x2b, 0xff, 0xfe, 0xea, 0x48, 0x16, 0x0, 0xfe, 0xa, 0xfe, 0x2a, 0xff, 0xfe, 0xac, 0x18, 0x17, 0x0, 0xff, 0x35, 0x29, 0xff, 0xfe, 0xcd, 0x45, 0x19, 0x0, 0xff, 0x62, 0x26, 0xff, 0xfc, 0xfe, 0xba, 0x4b, 0x1, 0x1a, 0x0, 0xff, 0x90, 0x23, 0xff, 0xfc, 0xfc, 0xc5, 0x79, 0x20, 0x1d, 0x0, 0xff, 0xbd, 0x1b, 0xff, 0xf7, 0xfa, 0xed, 0xdf, 0xca, 0xb2, 0x94, 0x6d, 0x40, 0xb, 0x16, 0x0
};
static const Image dash_logo_image = {69, 57, 629, dash_logo_data};

const VariantAnimation dash_logo = {
    21,
    {
        {94, 4, 25, 0, &dash_logo_image},
        {94, 4, 25, 5, &dash_logo_image},
        {94, 4, 25, 10, &dash_logo_image},
        {94, 4, 25, 15, &dash_logo_image},
        {94, 4, 25, 20, &dash_logo_image},
        {94, 4, 25, 25, &dash_logo_image},
        {94, 4, 25, 30, &dash_logo_image},
        {94, 4, 25, 35, &dash_logo_image},
        {94, 4, 25, 40, &dash_logo_image},
        {94, 4, 25, 45, &dash_logo_image},
        {94, 4, 25, 50, &dash_logo_image},
        {94, 4, 25, 55, &dash_logo_image},
        {94, 4, 25, 60, &dash_logo_image},
        {94, 4, 25, 65, &dash_logo_image},
        {94, 4, 25, 70, &dash_logo_image},
        {94, 4, 25, 75, &dash_logo_image},
        {94, 4, 25, 80, &dash_logo_image},
        {94, 4, 25, 85, &dash_logo_image},
        {94, 4, 25, 90, &dash_logo_image},
        {94, 4, 25, 95, &dash_logo_image},
        {94, 4, 25, 100, &dash_logo_image},
    }
};
const VariantAnimation dash_logo_reversed = {
    21,
    {
        {94, 4, 25, 100, &dash_logo_image},
        {94, 4, 25, 95, &dash_logo_image},
        {94, 4, 25, 90, &dash_logo_image},
        {94, 4, 25, 85, &dash_logo_image},
        {94, 4, 25, 80, &dash_logo_image},
        {94, 4, 25, 75, &dash_logo_image},
        {94, 4, 25, 70, &dash_logo_image},
        {94, 4, 25, 65, &dash_logo_image},
        {94, 4, 25, 60, &dash_logo_image},
        {94, 4, 25, 55, &dash_logo_image},
        {94, 4, 25, 50, &dash_logo_image},
        {94, 4, 25, 45, &dash_logo_image},
        {94, 4, 25, 40, &dash_logo_image},
        {94, 4, 25, 35, &dash_logo_image},
        {94, 4, 25, 30, &dash_logo_image},
        {94, 4, 25, 25, &dash_logo_image},
        {94, 4, 25, 20, &dash_logo_image},
        {94, 4, 25, 15, &dash_logo_image},
        {94, 4, 25, 10, &dash_logo_image},
        {94, 4, 25, 5, &dash_logo_image},
        {94, 4, 25, 0, &dash_logo_image},
    }
};

const uint8_t dash_screensaver_data[629] =
{
    0x13, 0x0, 0xff, 0xe, 0x1b, 0xff, 0xf8, 0xf0, 0xeb, 0xd9, 0xba, 0x9c, 0x7e, 0x4a, 0x13, 0x21, 0x0, 0xff, 0x3b, 0x23, 0xff, 0xfc, 0xda, 0x92, 0x3e, 0x1, 0x1d, 0x0, 0xff, 0x68, 0x26, 0xff, 0xfd, 0xdb, 0x6b, 0x7, 0x1b, 0x0, 0xff, 0x94, 0x28, 0xff, 0xfe, 0xe0, 0x4f, 0x1a, 0x0, 0xff, 0xc1, 0x2a, 0xff, 0xfe, 0x9c, 0x8, 0x18, 0x0, 0xff, 0xef, 0x2b, 0xff, 0xfe, 0xc3, 0xf, 0x16, 0x0, 0xff, 0x1c, 0x2d, 0xff, 0xfe, 0xc3, 0x6, 0x15, 0x0, 0xff, 0x49, 0x2e, 0xff, 0xff, 0x95, 0x15, 0x0, 0xff, 0x75, 0x2f, 0xff, 0xff, 0x42, 0x14, 0x0, 0xff, 0xa2, 0x2f, 0xff, 0xfe, 0xcf, 0x1, 0x13, 0x0, 0xff, 0xd0, 0x30, 0xff, 0xff, 0x48, 0x12, 0x0, 0xfe, 0x2, 0xd9, 0x15, 0xe0, 0xfd, 0xe4, 0xf0, 0xf2, 0x18, 0xff, 0xff, 0xaa, 0x2c, 0x0, 0xfa, 0x5, 0x1b, 0x3e, 0x69, 0xa3, 0xec, 0x12, 0xff, 0xfe, 0xf8, 0xc, 0x30, 0x0, 0xfd, 0x3, 0x4f, 0xca, 0x11, 0xff, 0xff, 0x46, 0x32, 0x0, 0xfd, 0x1, 0x6c, 0xfa, 0xf, 0xff, 0xff, 0x82, 0x34, 0x0, 0xfe, 0x4f, 0xfd, 0xe, 0xff, 0xff, 0xae, 0x35, 0x0, 0xff, 0x84, 0xe, 0xff, 0xff, 0xce, 0x35, 0x0, 0xfe, 0x9, 0xec, 0xd, 0xff, 0xff, 0xeb, 0x36, 0x0, 0xff, 0x92, 0xd, 0xff, 0xff, 0xf9, 0x36, 0x0, 0xff, 0x4e, 0xe, 0xff, 0x36, 0x0, 0xff, 0x25, 0xe, 0xff, 0x36, 0x0, 0xff, 0x12, 0xd, 0xff, 0xff, 0xfe, 0x6, 0x0, 0xfd, 0x2c, 0x5b, 0x71, 0x19, 0x80, 0xff, 0x7a, 0x13, 0x0, 0xff, 0x4, 0xd, 0xff, 0xff, 0xf0, 0x4, 0x0, 0xfe, 0x5b, 0xd8, 0x1c, 0xff, 0xff, 0xc9, 0x13, 0x0, 0xff, 0xa, 0xd, 0xff, 0xff, 0xe3, 0x2, 0x0, 0xfe, 0x1, 0x97, 0x1e, 0xff, 0xff, 0x8f, 0x13, 0x0, 0xff, 0x1c, 0xd, 0xff, 0xff, 0xc8, 0x2, 0x0, 0xff, 0x69, 0x1f, 0xff, 0xff, 0x56, 0x13, 0x0, 0xff, 0x3c, 0xd, 0xff, 0xfc, 0xac, 0x0, 0xc, 0xf0, 0x1f, 0xff, 0xff, 0x1c, 0x13, 0x0, 0xff, 0x66, 0xd, 0xff, 0xfd, 0x8f, 0x0, 0x63, 0x1f, 0xff, 0xff, 0xe3, 0x14, 0x0, 0xff, 0x94, 0xd, 0xff, 0xfd, 0x67, 0x0, 0xb2, 0x1f, 0xff, 0xff, 0xa3, 0x14, 0x0, 0xff, 0xc3, 0xd, 0xff, 0xfd, 0x3f, 0x2, 0xee, 0x1f, 0xff, 0xff, 0x54, 0x13, 0x0, 0xfe, 0x4, 0xf4, 0xd, 0xff, 0xfe, 0x14, 0x2a, 0x1f, 0xff, 0xfe, 0xe6, 0x6, 0x13, 0x0, 0xff, 0x34, 0xd, 0xff, 0xfd, 0xde, 0x0, 0x64, 0x1f, 0xff, 0xff, 0x56, 0x14, 0x0, 0xff, 0x71, 0xd, 0xff, 0xfd, 0xa5, 0x0, 0x9c, 0x1e, 0xff, 0xff, 0x84, 0x15, 0x0, 0xff, 0xb3, 0xd, 0xff, 0xfd, 0x6a, 0x0, 0xd6, 0x1c, 0xff, 0xfe, 0xca, 0x49, 0x15, 0x0, 0xfe, 0x8, 0xf6, 0xd, 0xff, 0xfd, 0x32, 0x0, 0x6e, 0x19, 0x70, 0xfd, 0x69, 0x4f, 0x1e, 0x17, 0x0, 0xff, 0x50, 0xd, 0xff, 0xfe, 0xea, 0x2, 0x35, 0x0, 0xff, 0xb2, 0xd, 0xff, 0xff, 0xa1, 0x35, 0x0, 0xfe, 0x25, 0xfc, 0xd, 0xff, 0xff, 0x4d, 0x35, 0x0, 0xff, 0xa8, 0xd, 0xff, 0xfe, 0xf0, 0x7, 0x34, 0x0, 0xff, 0x41, 0xe, 0xff, 0xff, 0x93, 0x34, 0x0, 0xfe, 0x18, 0xe5, 0xe, 0xff, 0xff, 0x2d, 0x33, 0x0, 0xfe, 0x15, 0xd3, 0xe, 0xff, 0xff, 0xba, 0x33, 0x0, 0xfe, 0x30, 0xdd, 0xf, 0xff, 0xff, 0x40, 0x31, 0x0, 0xfd, 0xd, 0x84, 0xf9, 0xf, 0xff, 0xff, 0xbc, 0x30, 0x0, 0xfd, 0x2d, 0x8b, 0xee, 0x10, 0xff, 0xfe, 0xfc, 0x2f, 0x2a, 0x0, 0xfa, 0x5, 0x19, 0x3d, 0x65, 0x9c, 0xdb, 0x13, 0xff, 0xff, 0x91, 0x12, 0x0, 0xff, 0xb6, 0x16, 0xe0, 0xfe, 0xe9, 0xf0, 0x18, 0xff, 0xfe, 0xdb, 0xa, 0x11, 0x0, 0xfe, 0x3, 0xf7, 0x2f, 0xff, 0xfe, 0xf8, 0x34, 0x12, 0x0, 0xff, 0x27, 0x30, 0xff, 0xff, 0x61, 0x13, 0x0, 0xff, 0x54, 0x2f, 0xff, 0xff, 0x80, 0x14, 0x0, 0xff, 0x81, 0x2e, 0xff, 0xff, 0x88, 0x15, 0x0, 0xff, 0xae, 0x2c, 0xff, 0xfe, 0xfd, 0x72, 0x16, 0x0, 0xff, 0xdb, 0x2b, 0xff, 0xfe, 0xea, 0x48, 0x16, 0x0, 0xfe, 0xa, 0xfe, 0x2a, 0xff, 0xfe, 0xac, 0x18, 0x17, 0x0, 0xff, 0x35, 0x29, 0xff, 0xfe, 0xcd, 0x45, 0x19, 0x0, 0xff, 0x62, 0x26, 0xff, 0xfc, 0xfe, 0xba, 0x4b, 0x1, 0x1a, 0x0, 0xff, 0x90, 0x23, 0xff, 0xfc, 0xfc, 0xc5, 0x79, 0x20, 0x1d, 0x0, 0xff, 0xbd, 0x1b, 0xff, 0xf7, 0xfa, 0xed, 0xdf, 0xca, 0xb2, 0x94, 0x6d, 0x40, 0xb, 0x16, 0x0
};
static const Image dash_screensaver_image = {69, 57, 629, dash_screensaver_data};

const VariantAnimation dash_screensaver = {
    374,
    {
        {94, 4, 75, 60, &dash_screensaver_image},
        {95, 4, 75, 60, &dash_screensaver_image},
        {96, 4, 75, 60, &dash_screensaver_image},
        {97, 4, 75, 60, &dash_screensaver_image},
        {98, 4, 75, 60, &dash_screensaver_image},
        {99, 4, 75, 60, &dash_screensaver_image},
        {100, 4, 75, 60, &dash_screensaver_image},
        {101, 4, 75, 60, &dash_screensaver_image},
        {102, 4, 75, 60, &dash_screensaver_image},
        {103, 4, 75, 60, &dash_screensaver_image},
        {104, 4, 75, 60, &dash_screensaver_image},
        {105, 4, 75, 60, &dash_screensaver_image},
        {106, 4, 75, 60, &dash_screensaver_image},
        {107, 4, 75, 60, &dash_screensaver_image},
        {108, 4, 75, 60, &dash_screensaver_image},
        {109, 4, 75, 60, &dash_screensaver_image},
        {110, 4, 75, 60, &dash_screensaver_image},
        {111, 4, 75, 60, &dash_screensaver_image},
        {112, 4, 75, 60, &dash_screensaver_image},
        {113, 4, 75, 60, &dash_screensaver_image},
        {114, 4, 75, 60, &dash_screensaver_image},
        {115, 4, 75, 60, &dash_screensaver_image},
        {116, 4, 75, 60, &dash_screensaver_image},
        {117, 4, 75, 60, &dash_screensaver_image},
        {118, 4, 75, 60, &dash_screensaver_image},
        {119, 4, 75, 60, &dash_screensaver_image},
        {120, 4, 75, 60, &dash_screensaver_image},
        {121, 4, 75, 60, &dash_screensaver_image},
        {122, 4, 75, 60, &dash_screensaver_image},
        {123, 4, 75, 60, &dash_screensaver_image},
        {124, 4, 75, 60, &dash_screensaver_image},
        {125, 4, 75, 60, &dash_screensaver_image},
        {126, 4, 75, 60, &dash_screensaver_image},
        {127, 4, 75, 60, &dash_screensaver_image},
        {128, 4, 75, 60, &dash_screensaver_image},
        {129, 4, 75, 60, &dash_screensaver_image},
        {130, 4, 75, 60, &dash_screensaver_image},
        {131, 4, 75, 60, &dash_screensaver_image},
        {132, 4, 75, 60, &dash_screensaver_image},
        {133, 4, 75, 60, &dash_screensaver_image},
        {134, 4, 75, 60, &dash_screensaver_image},
        {135, 4, 75, 60, &dash_screensaver_image},
        {136, 4, 75, 60, &dash_screensaver_image},
        {137, 4, 75, 60, &dash_screensaver_image},
        {138, 4, 75, 60, &dash_screensaver_image},
        {139, 4, 75, 60, &dash_screensaver_image},
        {140, 4, 75, 60, &dash_screensaver_image},
        {141, 4, 75, 60, &dash_screensaver_image},
        {142, 4, 75, 60, &dash_screensaver_image},
        {143, 4, 75, 60, &dash_screensaver_image},
        {144, 4, 75, 60, &dash_screensaver_image},
        {145, 4, 75, 60, &dash_screensaver_image},
        {146, 4, 75, 60, &dash_screensaver_image},
        {147, 4, 75, 60, &dash_screensaver_image},
        {148, 4, 75, 60, &dash_screensaver_image},
        {149, 4, 75, 60, &dash_screensaver_image},
        {150, 4, 75, 60, &dash_screensaver_image},
        {151, 4, 75, 60, &dash_screensaver_image},
        {152, 4, 75, 60, &dash_screensaver_image},
        {153, 4, 75, 60, &dash_screensaver_image},
        {154, 4, 75, 60, &dash_screensaver_image},
        {155, 4, 75, 60, &dash_screensaver_image},
        {156, 4, 75, 60, &dash_screensaver_image},
        {157, 4, 75, 60, &dash_screensaver_image},
        {158, 4, 75, 60, &dash_screensaver_image},
        {159, 4, 75, 60, &dash_screensaver_image},
        {160, 4, 75, 60, &dash_screensaver_image},
        {161, 4, 75, 60, &dash_screensaver_image},
        {162, 4, 75, 60, &dash_screensaver_image},
        {163, 4, 75, 60, &dash_screensaver_image},
        {164, 4, 75, 60, &dash_screensaver_image},
        {165, 4, 75, 60, &dash_screensaver_image},
        {166, 4, 75, 60, &dash_screensaver_image},
        {167, 4, 75, 60, &dash_screensaver_image},
        {168, 4, 75, 60, &dash_screensaver_image},
        {169, 4, 75, 60, &dash_screensaver_image},
        {170, 4, 75, 60, &dash_screensaver_image},
        {171, 4, 75, 60, &dash_screensaver_image},
        {172, 4, 75, 60, &dash_screensaver_image},
        {173, 4, 75, 60, &dash_screensaver_image},
        {174, 4, 75, 60, &dash_screensaver_image},
        {175, 4, 75, 60, &dash_screensaver_image},
        {176, 4, 75, 60, &dash_screensaver_image},
        {177, 4, 75, 60, &dash_screensaver_image},
        {178, 4, 75, 60, &dash_screensaver_image},
        {179, 4, 75, 60, &dash_screensaver_image},
        {180, 4, 75, 60, &dash_screensaver_image},
        {181, 4, 75, 60, &dash_screensaver_image},
        {182, 4, 75, 60, &dash_screensaver_image},
        {183, 4, 75, 60, &dash_screensaver_image},
        {184, 4, 75, 60, &dash_screensaver_image},
        {185, 4, 75, 60, &dash_screensaver_image},
        {186, 4, 75, 60, &dash_screensaver_image},
        {185, 4, 75, 60, &dash_screensaver_image},
        {184, 4, 75, 60, &dash_screensaver_image},
        {183, 4, 75, 60, &dash_screensaver_image},
        {182, 4, 75, 60, &dash_screensaver_image},
        {181, 4, 75, 60, &dash_screensaver_image},
        {180, 4, 75, 60, &dash_screensaver_image},
        {179, 4, 75, 60, &dash_screensaver_image},
        {178, 4, 75, 60, &dash_screensaver_image},
        {177, 4, 75, 60, &dash_screensaver_image},
        {176, 4, 75, 60, &dash_screensaver_image},
        {175, 4, 75, 60, &dash_screensaver_image},
        {174, 4, 75, 60, &dash_screensaver_image},
        {173, 4, 75, 60, &dash_screensaver_image},
        {172, 4, 75, 60, &dash_screensaver_image},
        {171, 4, 75, 60, &dash_screensaver_image},
        {170, 4, 75, 60, &dash_screensaver_image},
        {169, 4, 75, 60, &dash_screensaver_image},
        {168, 4, 75, 60, &dash_screensaver_image},
        {167, 4, 75, 60, &dash_screensaver_image},
        {166, 4, 75, 60, &dash_screensaver_image},
        {165, 4, 75, 60, &dash_screensaver_image},
        {164, 4, 75, 60, &dash_screensaver_image},
        {163, 4, 75, 60, &dash_screensaver_image},
        {162, 4, 75, 60, &dash_screensaver_image},
        {161, 4, 75, 60, &dash_screensaver_image},
        {160, 4, 75, 60, &dash_screensaver_image},
        {159, 4, 75, 60, &dash_screensaver_image},
        {158, 4, 75, 60, &dash_screensaver_image},
        {157, 4, 75, 60, &dash_screensaver_image},
        {156, 4, 75, 60, &dash_screensaver_image},
        {155, 4, 75, 60, &dash_screensaver_image},
        {154, 4, 75, 60, &dash_screensaver_image},
        {153, 4, 75, 60, &dash_screensaver_image},
        {152, 4, 75, 60, &dash_screensaver_image},
        {151, 4, 75, 60, &dash_screensaver_image},
        {150, 4, 75, 60, &dash_screensaver_image},
        {149, 4, 75, 60, &dash_screensaver_image},
        {148, 4, 75, 60, &dash_screensaver_image},
        {147, 4, 75, 60, &dash_screensaver_image},
        {146, 4, 75, 60, &dash_screensaver_image},
        {145, 4, 75, 60, &dash_screensaver_image},
        {144, 4, 75, 60, &dash_screensaver_image},
        {143, 4, 75, 60, &dash_screensaver_image},
        {142, 4, 75, 60, &dash_screensaver_image},
        {141, 4, 75, 60, &dash_screensaver_image},
        {140, 4, 75, 60, &dash_screensaver_image},
        {139, 4, 75, 60, &dash_screensaver_image},
        {138, 4, 75, 60, &dash_screensaver_image},
        {137, 4, 75, 60, &dash_screensaver_image},
        {136, 4, 75, 60, &dash_screensaver_image},
        {135, 4, 75, 60, &dash_screensaver_image},
        {134, 4, 75, 60, &dash_screensaver_image},
        {133, 4, 75, 60, &dash_screensaver_image},
        {132, 4, 75, 60, &dash_screensaver_image},
        {131, 4, 75, 60, &dash_screensaver_image},
        {130, 4, 75, 60, &dash_screensaver_image},
        {129, 4, 75, 60, &dash_screensaver_image},
        {128, 4, 75, 60, &dash_screensaver_image},
        {127, 4, 75, 60, &dash_screensaver_image},
        {126, 4, 75, 60, &dash_screensaver_image},
        {125, 4, 75, 60, &dash_screensaver_image},
        {124, 4, 75, 60, &dash_screensaver_image},
        {123, 4, 75, 60, &dash_screensaver_image},
        {122, 4, 75, 60, &dash_screensaver_image},
        {121, 4, 75, 60, &dash_screensaver_image},
        {120, 4, 75, 60, &dash_screensaver_image},
        {119, 4, 75, 60, &dash_screensaver_image},
        {118, 4, 75, 60, &dash_screensaver_image},
        {117, 4, 75, 60, &dash_screensaver_image},
        {116, 4, 75, 60, &dash_screensaver_image},
        {115, 4, 75, 60, &dash_screensaver_image},
        {114, 4, 75, 60, &dash_screensaver_image},
        {113, 4, 75, 60, &dash_screensaver_image},
        {112, 4, 75, 60, &dash_screensaver_image},
        {111, 4, 75, 60, &dash_screensaver_image},
        {110, 4, 75, 60, &dash_screensaver_image},
        {109, 4, 75, 60, &dash_screensaver_image},
        {108, 4, 75, 60, &dash_screensaver_image},
        {107, 4, 75, 60, &dash_screensaver_image},
        {106, 4, 75, 60, &dash_screensaver_image},
        {105, 4, 75, 60, &dash_screensaver_image},
        {104, 4, 75, 60, &dash_screensaver_image},
        {103, 4, 75, 60, &dash_screensaver_image},
        {102, 4, 75, 60, &dash_screensaver_image},
        {101, 4, 75, 60, &dash_screensaver_image},
        {100, 4, 75, 60, &dash_screensaver_image},
        {99, 4, 75, 60, &dash_screensaver_image},
        {98, 4, 75, 60, &dash_screensaver_image},
        {97, 4, 75, 60, &dash_screensaver_image},
        {96, 4, 75, 60, &dash_screensaver_image},
        {95, 4, 75, 60, &dash_screensaver_image},
        {94, 4, 75, 60, &dash_screensaver_image},
        {93, 4, 75, 60, &dash_screensaver_image},
        {92, 4, 75, 60, &dash_screensaver_image},
        {91, 4, 75, 60, &dash_screensaver_image},
        {90, 4, 75, 60, &dash_screensaver_image},
        {89, 4, 75, 60, &dash_screensaver_image},
        {88, 4, 75, 60, &dash_screensaver_image},
        {87, 4, 75, 60, &dash_screensaver_image},
        {86, 4, 75, 60, &dash_screensaver_image},
        {85, 4, 75, 60, &dash_screensaver_image},
        {84, 4, 75, 60, &dash_screensaver_image},
        {83, 4, 75, 60, &dash_screensaver_image},
        {82, 4, 75, 60, &dash_screensaver_image},
        {81, 4, 75, 60, &dash_screensaver_image},
        {80, 4, 75, 60, &dash_screensaver_image},
        {79, 4, 75, 60, &dash_screensaver_image},
        {78, 4, 75, 60, &dash_screensaver_image},
        {77, 4, 75, 60, &dash_screensaver_image},
        {76, 4, 75, 60, &dash_screensaver_image},
        {75, 4, 75, 60, &dash_screensaver_image},
        {74, 4, 75, 60, &dash_screensaver_image},
        {73, 4, 75, 60, &dash_screensaver_image},
        {72, 4, 75, 60, &dash_screensaver_image},
        {71, 4, 75, 60, &dash_screensaver_image},
        {70, 4, 75, 60, &dash_screensaver_image},
        {69, 4, 75, 60, &dash_screensaver_image},
        {68, 4, 75, 60, &dash_screensaver_image},
        {67, 4, 75, 60, &dash_screensaver_image},
        {66, 4, 75, 60, &dash_screensaver_image},
        {65, 4, 75, 60, &dash_screensaver_image},
        {64, 4, 75, 60, &dash_screensaver_image},
        {63, 4, 75, 60, &dash_screensaver_image},
        {62, 4, 75, 60, &dash_screensaver_image},
        {61, 4, 75, 60, &dash_screensaver_image},
        {60, 4, 75, 60, &dash_screensaver_image},
        {59, 4, 75, 60, &dash_screensaver_image},
        {58, 4, 75, 60, &dash_screensaver_image},
        {57, 4, 75, 60, &dash_screensaver_image},
        {56, 4, 75, 60, &dash_screensaver_image},
        {55, 4, 75, 60, &dash_screensaver_image},
        {54, 4, 75, 60, &dash_screensaver_image},
        {53, 4, 75, 60, &dash_screensaver_image},
        {52, 4, 75, 60, &dash_screensaver_image},
        {51, 4, 75, 60, &dash_screensaver_image},
        {50, 4, 75, 60, &dash_screensaver_image},
        {49, 4, 75, 60, &dash_screensaver_image},
        {48, 4, 75, 60, &dash_screensaver_image},
        {47, 4, 75, 60, &dash_screensaver_image},
        {46, 4, 75, 60, &dash_screensaver_image},
        {45, 4, 75, 60, &dash_screensaver_image},
        {44, 4, 75, 60, &dash_screensaver_image},
        {43, 4, 75, 60, &dash_screensaver_image},
        {42, 4, 75, 60, &dash_screensaver_image},
        {41, 4, 75, 60, &dash_screensaver_image},
        {40, 4, 75, 60, &dash_screensaver_image},
        {39, 4, 75, 60, &dash_screensaver_image},
        {38, 4, 75, 60, &dash_screensaver_image},
        {37, 4, 75, 60, &dash_screensaver_image},
        {36, 4, 75, 60, &dash_screensaver_image},
        {35, 4, 75, 60, &dash_screensaver_image},
        {34, 4, 75, 60, &dash_screensaver_image},
        {33, 4, 75, 60, &dash_screensaver_image},
        {32, 4, 75, 60, &dash_screensaver_image},
        {31, 4, 75, 60, &dash_screensaver_image},
        {30, 4, 75, 60, &dash_screensaver_image},
        {29, 4, 75, 60, &dash_screensaver_image},
        {28, 4, 75, 60, &dash_screensaver_image},
        {27, 4, 75, 60, &dash_screensaver_image},
        {26, 4, 75, 60, &dash_screensaver_image},
        {25, 4, 75, 60, &dash_screensaver_image},
        {24, 4, 75, 60, &dash_screensaver_image},
        {23, 4, 75, 60, &dash_screensaver_image},
        {22, 4, 75, 60, &dash_screensaver_image},
        {21, 4, 75, 60, &dash_screensaver_image},
        {20, 4, 75, 60, &dash_screensaver_image},
        {19, 4, 75, 60, &dash_screensaver_image},
        {18, 4, 75, 60, &dash_screensaver_image},
        {17, 4, 75, 60, &dash_screensaver_image},
        {16, 4, 75, 60, &dash_screensaver_image},
        {15, 4, 75, 60, &dash_screensaver_image},
        {14, 4, 75, 60, &dash_screensaver_image},
        {13, 4, 75, 60, &dash_screensaver_image},
        {12, 4, 75, 60, &dash_screensaver_image},
        {11, 4, 75, 60, &dash_screensaver_image},
        {10, 4, 75, 60, &dash_screensaver_image},
        {9, 4, 75, 60, &dash_screensaver_image},
        {8, 4, 75, 60, &dash_screensaver_image},
        {7, 4, 75, 60, &dash_screensaver_image},
        {6, 4, 75, 60, &dash_screensaver_image},
        {5, 4, 75, 60, &dash_screensaver_image},
        {4, 4, 75, 60, &dash_screensaver_image},
        {3, 4, 75, 60, &dash_screensaver_image},
        {2, 4, 75, 60, &dash_screensaver_image},
        {1, 4, 75, 60, &dash_screensaver_image},
        {0, 4, 75, 60, &dash_screensaver_image},
        {0, 4, 75, 60, &dash_screensaver_image},
        {1, 4, 75, 60, &dash_screensaver_image},
        {2, 4, 75, 60, &dash_screensaver_image},
        {3, 4, 75, 60, &dash_screensaver_image},
        {4, 4, 75, 60, &dash_screensaver_image},
        {5, 4, 75, 60, &dash_screensaver_image},
        {6, 4, 75, 60, &dash_screensaver_image},
        {7, 4, 75, 60, &dash_screensaver_image},
        {8, 4, 75, 60, &dash_screensaver_image},
        {9, 4, 75, 60, &dash_screensaver_image},
        {10, 4, 75, 60, &dash_screensaver_image},
        {11, 4, 75, 60, &dash_screensaver_image},
        {12, 4, 75, 60, &dash_screensaver_image},
        {13, 4, 75, 60, &dash_screensaver_image},
        {14, 4, 75, 60, &dash_screensaver_image},
        {15, 4, 75, 60, &dash_screensaver_image},
        {16, 4, 75, 60, &dash_screensaver_image},
        {17, 4, 75, 60, &dash_screensaver_image},
        {18, 4, 75, 60, &dash_screensaver_image},
        {19, 4, 75, 60, &dash_screensaver_image},
        {20, 4, 75, 60, &dash_screensaver_image},
        {21, 4, 75, 60, &dash_screensaver_image},
        {22, 4, 75, 60, &dash_screensaver_image},
        {23, 4, 75, 60, &dash_screensaver_image},
        {24, 4, 75, 60, &dash_screensaver_image},
        {25, 4, 75, 60, &dash_screensaver_image},
        {26, 4, 75, 60, &dash_screensaver_image},
        {27, 4, 75, 60, &dash_screensaver_image},
        {28, 4, 75, 60, &dash_screensaver_image},
        {29, 4, 75, 60, &dash_screensaver_image},
        {30, 4, 75, 60, &dash_screensaver_image},
        {31, 4, 75, 60, &dash_screensaver_image},
        {32, 4, 75, 60, &dash_screensaver_image},
        {33, 4, 75, 60, &dash_screensaver_image},
        {34, 4, 75, 60, &dash_screensaver_image},
        {35, 4, 75, 60, &dash_screensaver_image},
        {36, 4, 75, 60, &dash_screensaver_image},
        {37, 4, 75, 60, &dash_screensaver_image},
        {38, 4, 75, 60, &dash_screensaver_image},
        {39, 4, 75, 60, &dash_screensaver_image},
        {40, 4, 75, 60, &dash_screensaver_image},
        {41, 4, 75, 60, &dash_screensaver_image},
        {42, 4, 75, 60, &dash_screensaver_image},
        {43, 4, 75, 60, &dash_screensaver_image},
        {44, 4, 75, 60, &dash_screensaver_image},
        {45, 4, 75, 60, &dash_screensaver_image},
        {46, 4, 75, 60, &dash_screensaver_image},
        {47, 4, 75, 60, &dash_screensaver_image},
        {48, 4, 75, 60, &dash_screensaver_image},
        {49, 4, 75, 60, &dash_screensaver_image},
        {50, 4, 75, 60, &dash_screensaver_image},
        {51, 4, 75, 60, &dash_screensaver_image},
        {52, 4, 75, 60, &dash_screensaver_image},
        {53, 4, 75, 60, &dash_screensaver_image},
        {54, 4, 75, 60, &dash_screensaver_image},
        {55, 4, 75, 60, &dash_screensaver_image},
        {56, 4, 75, 60, &dash_screensaver_image},
        {57, 4, 75, 60, &dash_screensaver_image},
        {58, 4, 75, 60, &dash_screensaver_image},
        {59, 4, 75, 60, &dash_screensaver_image},
        {60, 4, 75, 60, &dash_screensaver_image},
        {61, 4, 75, 60, &dash_screensaver_image},
        {62, 4, 75, 60, &dash_screensaver_image},
        {63, 4, 75, 60, &dash_screensaver_image},
        {64, 4, 75, 60, &dash_screensaver_image},
        {65, 4, 75, 60, &dash_screensaver_image},
        {66, 4, 75, 60, &dash_screensaver_image},
        {67, 4, 75, 60, &dash_screensaver_image},
        {68, 4, 75, 60, &dash_screensaver_image},
        {69, 4, 75, 60, &dash_screensaver_image},
        {70, 4, 75, 60, &dash_screensaver_image},
        {71, 4, 75, 60, &dash_screensaver_image},
        {72, 4, 75, 60, &dash_screensaver_image},
        {73, 4, 75, 60, &dash_screensaver_image},
        {74, 4, 75, 60, &dash_screensaver_image},
        {75, 4, 75, 60, &dash_screensaver_image},
        {76, 4, 75, 60, &dash_screensaver_image},
        {77, 4, 75, 60, &dash_screensaver_image},
        {78, 4, 75, 60, &dash_screensaver_image},
        {79, 4, 75, 60, &dash_screensaver_image},
        {80, 4, 75, 60, &dash_screensaver_image},
        {81, 4, 75, 60, &dash_screensaver_image},
        {82, 4, 75, 60, &dash_screensaver_image},
        {83, 4, 75, 60, &dash_screensaver_image},
        {84, 4, 75, 60, &dash_screensaver_image},
        {85, 4, 75, 60, &dash_screensaver_image},
        {86, 4, 75, 60, &dash_screensaver_image},
        {87, 4, 75, 60, &dash_screensaver_image},
        {88, 4, 75, 60, &dash_screensaver_image},
        {89, 4, 75, 60, &dash_screensaver_image},
        {90, 4, 75, 60, &dash_screensaver_image},
        {91, 4, 75, 60, &dash_screensaver_image},
        {92, 4, 75, 60, &dash_screensaver_image},
        {93, 4, 75, 60, &dash_screensaver_image},
        {94, 4, 75, 60, &dash_screensaver_image},
    }
};

VariantInfo dash_svi __attribute__((section("variant_info"))) = {
    .version = 1,
    .name = "DASH",
    .logo = &dash_logo,
    .logo_reversed = &dash_logo_reversed,
    .screensaver_timeout = ONE_SEC * 60 * 10,
    .screensaver = &dash_screensaver
};


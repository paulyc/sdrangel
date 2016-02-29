///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2015 Edouard Griffiths, F4EXB.                                  //
//                                                                               //
// This is a header file to help migrate to GL ES 2.0                            //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_UTIL_GLESHELP_H_
#define INCLUDE_UTIL_GLESHELP_H_

#define GL_VERTEX_ARRAY 0        // We like submitting vertices on stream 0 for no special reason (GL: 0x8074)
#define GL_NORMAL_ARRAY 1        // We like submitting normals on stream 1 for no special reason (GL: 0x8075)
#define GL_TEXTURE_COORD_ARRAY 2 // We like submitting texcoords on stream 2 for no special reason (GL: 0x8078)

#define glColor4fv(a) glColor4f(a[0], a[1], a[2], a[3])
#define glColor3fv(a) glColor4f(a[0], a[1], a[2], 1.0f)
#define glColor3f(a,b,c) glColor4f(a, b, c, 1.0f)


#endif /* INCLUDE_UTIL_GLESHELP_H_ */

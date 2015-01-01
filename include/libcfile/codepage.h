/*
 * Codepage definitions for libcfile
 *
 * Copyright (C) 2008-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCFILE_CODEPAGE_H )
#define _LIBCFILE_CODEPAGE_H

#include <libcfile/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBCFILE_CODEPAGES
{
	LIBCFILE_CODEPAGE_ASCII				= 20127,

	LIBCFILE_CODEPAGE_ISO_8859_1			= 28591,
	LIBCFILE_CODEPAGE_ISO_8859_2			= 28592,
	LIBCFILE_CODEPAGE_ISO_8859_3			= 28593,
	LIBCFILE_CODEPAGE_ISO_8859_4			= 28594,
	LIBCFILE_CODEPAGE_ISO_8859_5			= 28595,
	LIBCFILE_CODEPAGE_ISO_8859_6			= 28596,
	LIBCFILE_CODEPAGE_ISO_8859_7			= 28597,
	LIBCFILE_CODEPAGE_ISO_8859_8			= 28598,
	LIBCFILE_CODEPAGE_ISO_8859_9			= 28599,
	LIBCFILE_CODEPAGE_ISO_8859_10			= 28600,
	LIBCFILE_CODEPAGE_ISO_8859_11			= 28601,
	LIBCFILE_CODEPAGE_ISO_8859_13			= 28603,
	LIBCFILE_CODEPAGE_ISO_8859_14			= 28604,
	LIBCFILE_CODEPAGE_ISO_8859_15			= 28605,
	LIBCFILE_CODEPAGE_ISO_8859_16			= 28606,

	LIBCFILE_CODEPAGE_KOI8_R			= 20866,
	LIBCFILE_CODEPAGE_KOI8_U			= 21866,

	LIBCFILE_CODEPAGE_WINDOWS_874			= 874,
	LIBCFILE_CODEPAGE_WINDOWS_932			= 932,
	LIBCFILE_CODEPAGE_WINDOWS_936			= 936,
	LIBCFILE_CODEPAGE_WINDOWS_949			= 949,
	LIBCFILE_CODEPAGE_WINDOWS_950			= 950,
	LIBCFILE_CODEPAGE_WINDOWS_1250			= 1250,
	LIBCFILE_CODEPAGE_WINDOWS_1251			= 1251,
	LIBCFILE_CODEPAGE_WINDOWS_1252			= 1252,
	LIBCFILE_CODEPAGE_WINDOWS_1253			= 1253,
	LIBCFILE_CODEPAGE_WINDOWS_1254			= 1254,
	LIBCFILE_CODEPAGE_WINDOWS_1255			= 1255,
	LIBCFILE_CODEPAGE_WINDOWS_1256			= 1256,
	LIBCFILE_CODEPAGE_WINDOWS_1257			= 1257,
	LIBCFILE_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBCFILE_CODEPAGE_US_ASCII			LIBCFILE_CODEPAGE_ASCII

#define LIBCFILE_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBCFILE_CODEPAGE_ISO_8859_1
#define LIBCFILE_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBCFILE_CODEPAGE_ISO_8859_2
#define LIBCFILE_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBCFILE_CODEPAGE_ISO_8859_3
#define LIBCFILE_CODEPAGE_ISO_NORTH_EUROPEAN		LIBCFILE_CODEPAGE_ISO_8859_4
#define LIBCFILE_CODEPAGE_ISO_CYRILLIC			LIBCFILE_CODEPAGE_ISO_8859_5
#define LIBCFILE_CODEPAGE_ISO_ARABIC			LIBCFILE_CODEPAGE_ISO_8859_6
#define LIBCFILE_CODEPAGE_ISO_GREEK			LIBCFILE_CODEPAGE_ISO_8859_7
#define LIBCFILE_CODEPAGE_ISO_HEBREW			LIBCFILE_CODEPAGE_ISO_8859_8
#define LIBCFILE_CODEPAGE_ISO_TURKISH			LIBCFILE_CODEPAGE_ISO_8859_9
#define LIBCFILE_CODEPAGE_ISO_NORDIC			LIBCFILE_CODEPAGE_ISO_8859_10
#define LIBCFILE_CODEPAGE_ISO_THAI			LIBCFILE_CODEPAGE_ISO_8859_11
#define LIBCFILE_CODEPAGE_ISO_BALTIC			LIBCFILE_CODEPAGE_ISO_8859_13
#define LIBCFILE_CODEPAGE_ISO_CELTIC			LIBCFILE_CODEPAGE_ISO_8859_14

#define LIBCFILE_CODEPAGE_ISO_LATIN_1			LIBCFILE_CODEPAGE_ISO_8859_1
#define LIBCFILE_CODEPAGE_ISO_LATIN_2			LIBCFILE_CODEPAGE_ISO_8859_2
#define LIBCFILE_CODEPAGE_ISO_LATIN_3			LIBCFILE_CODEPAGE_ISO_8859_3
#define LIBCFILE_CODEPAGE_ISO_LATIN_4			LIBCFILE_CODEPAGE_ISO_8859_4
#define LIBCFILE_CODEPAGE_ISO_LATIN_5			LIBCFILE_CODEPAGE_ISO_8859_9
#define LIBCFILE_CODEPAGE_ISO_LATIN_6			LIBCFILE_CODEPAGE_ISO_8859_10
#define LIBCFILE_CODEPAGE_ISO_LATIN_7			LIBCFILE_CODEPAGE_ISO_8859_13
#define LIBCFILE_CODEPAGE_ISO_LATIN_8			LIBCFILE_CODEPAGE_ISO_8859_14
#define LIBCFILE_CODEPAGE_ISO_LATIN_9			LIBCFILE_CODEPAGE_ISO_8859_15
#define LIBCFILE_CODEPAGE_ISO_LATIN_10			LIBCFILE_CODEPAGE_ISO_8859_16

#define LIBCFILE_CODEPAGE_KOI8_RUSSIAN			LIBCFILE_CODEPAGE_KOI8_R
#define LIBCFILE_CODEPAGE_KOI8_UKRAINIAN		LIBCFILE_CODEPAGE_KOI8_U

#define LIBCFILE_CODEPAGE_WINDOWS_THAI			LIBCFILE_CODEPAGE_WINDOWS_874
#define LIBCFILE_CODEPAGE_WINDOWS_JAPANESE		LIBCFILE_CODEPAGE_WINDOWS_932
#define LIBCFILE_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBCFILE_CODEPAGE_WINDOWS_936
#define LIBCFILE_CODEPAGE_WINDOWS_KOREAN		LIBCFILE_CODEPAGE_WINDOWS_949
#define LIBCFILE_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBCFILE_CODEPAGE_WINDOWS_950
#define LIBCFILE_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBCFILE_CODEPAGE_WINDOWS_1250
#define LIBCFILE_CODEPAGE_WINDOWS_CYRILLIC		LIBCFILE_CODEPAGE_WINDOWS_1251
#define LIBCFILE_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBCFILE_CODEPAGE_WINDOWS_1252
#define LIBCFILE_CODEPAGE_WINDOWS_GREEK			LIBCFILE_CODEPAGE_WINDOWS_1253
#define LIBCFILE_CODEPAGE_WINDOWS_TURKISH		LIBCFILE_CODEPAGE_WINDOWS_1254
#define LIBCFILE_CODEPAGE_WINDOWS_HEBREW		LIBCFILE_CODEPAGE_WINDOWS_1255
#define LIBCFILE_CODEPAGE_WINDOWS_ARABIC		LIBCFILE_CODEPAGE_WINDOWS_1256
#define LIBCFILE_CODEPAGE_WINDOWS_BALTIC		LIBCFILE_CODEPAGE_WINDOWS_1257
#define LIBCFILE_CODEPAGE_WINDOWS_VIETNAMESE		LIBCFILE_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif


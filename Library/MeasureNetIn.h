/* Copyright (C) 2001 Rainmeter Project Developers
 *
 * This Source Code Form is subject to the terms of the GNU General Public
 * License; either version 2 of the License, or (at your option) any later
 * version. If a copy of the GPL was not distributed with this file, You can
 * obtain one at <https://www.gnu.org/licenses/gpl-2.0.html>. */

#ifndef __MEASURENETIN_H__
#define __MEASURENETIN_H__

#include "MeasureNet.h"

class MeasureNetIn : public MeasureNet
{
public:
	MeasureNetIn(Skin* skin, const WCHAR* name);
	virtual ~MeasureNetIn();

	MeasureNetIn(const MeasureNetIn& other) = delete;
	MeasureNetIn& operator=(MeasureNetIn other) = delete;
};

#endif

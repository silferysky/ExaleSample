/* Start Header ************************************************************************/
/*!
\file           RotatableComponent.cpp
\project        Exale
\author         Lim Jia Hao, l.jiahao, 390006518 (100%)
\par            l.jiahao\@digipen.edu
\date           1 December,2019
\brief          This file contains the function definitions for RotatableComponent

All content (C) 2019 DigiPen (SINGAPORE) Corporation, all rights
reserved.

Reproduction or disclosure of this file or its contents
without the prior written consent of DigiPen Institute of
Technology is prohibited.
*/
/* End Header **************************************************************************/
#include "Precompiled.h"
#include "RotatableComponent.h"

namespace Rogue
{
	inline void RotatableComponent::computeMOI(float mass, float volume)
	{
		m_moInertia = mass * volume / 12;
	}
}
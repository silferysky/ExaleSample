/* Start Header ************************************************************************/
/*!
\file           BoxCollisionSystem.h
\project        Exale
\author         Lim Jia Hao, l.jiahao, 390006518 (100%)
\par            l.jiahao\@digipen.edu
\date           1 December,2019
\brief          This file contains the function definitions for BoxCollisionSystem

All content (C) 2019 DigiPen (SINGAPORE) Corporation, all rights
reserved.

Reproduction or disclosure of this file or its contents
without the prior written consent of DigiPen Institute of
Technology is prohibited.
*/
/* End Header **************************************************************************/
#pragma once
#include "REEngine.h"

namespace Rogue
{
	class BoxCollisionSystem :
		public System, public EventListener
	{
	public:
		bool m_eventSent = false;

		BoxCollisionSystem();

		void Init() override;
		void Update() override;
		void Shutdown() override;
		void Receive(Event& ev) override;
	};
}

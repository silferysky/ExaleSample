/* Start Header ************************************************************************/
/*!
\file           UIComponent.h
\project        Exale
\author         Chan Wai Kit Terence, c.terence, 440005918 (100%)
\par            c.terence\@digipen.edu
\date           1 December,2019
\brief          This file contains the function definitions for FontSystem

All content (C) 2019 DigiPen (SINGAPORE) Corporation, all rights
reserved.

Reproduction or disclosure of this file or its contents
without the prior written consent of DigiPen Institute of
Technology is prohibited.
*/
/* End Header **************************************************************************/
#pragma once
#include "BaseComponent.h"

namespace Rogue
{
	class UIComponent
		: public BaseComponent
	{
		bool m_isActive = false;
	public:
		UIComponent() = default;
		~UIComponent() = default;

		bool getIsActive() const;
		void setIsActive(const bool& isActive);
		void DisplayOnInspector();
		//Serialize
		std::string Serialize() override;
		void Deserialize(std::string_view toDeserialize) override;
	};
}
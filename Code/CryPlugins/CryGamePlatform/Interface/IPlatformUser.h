// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include "PlatformTypes.h"
#include "PlatformUserIdentifier.h"

namespace Cry
{
	namespace GamePlatform
	{
		//! Interface to access information for all of a user's accounts
		struct IUser
		{
			virtual ~IUser() {}

			//! Gets the public nickname of the user
			virtual const char* GetNickname() const = 0;
			//! Gets unique identifier of user
			virtual UserIdentifier GetIdentifier() const = 0;
			//! Sets the user's rich status
			virtual void SetStatus(const char* szStatus) = 0;
			//! Gets the user's rich status
			virtual const char* GetStatus() const = 0;
			//! Gets the user's avatar of the requested size as a texture
			virtual ITexture* GetAvatar(EAvatarSize size) const = 0;
			//! Gets the account associated with a specific service, if any
			virtual IAccount* GetAccount(const ServiceIdentifier& svcId) const = 0;
		};
	}
}
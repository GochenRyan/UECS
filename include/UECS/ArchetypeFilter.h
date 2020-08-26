#pragma once

#include "CmptType.h"

#include <UTemplate/TypeList.h>

#include <set>

namespace Ubpa::UECS {
	// filter Archetype with all, any and none
	struct ArchetypeFilter {
		CmptAccessTypeSet all;
		CmptAccessTypeSet any;
		std::set<CmptType> none;

		size_t HashCode() const noexcept;

		bool operator==(const ArchetypeFilter& rhs) const;
	};
}

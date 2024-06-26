#pragma once

#include<iostream>

#include "EntityFactory.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	创建实体.	</summary>
///
/// <remarks>	朱连超, 2024/05/02.	</remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

class CreateEntity
{
public:
	CreateEntity(std::shared_ptr<EntityFactoryBase> factory);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	通过多态，创建具体实体对象.	</summary>
	///
	/// <remarks>	朱连超, 2024/05/02.	</remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	std::shared_ptr<EntityBase> CreateEntityFactory();

private:
	std::shared_ptr<EntityFactoryBase> Factory;
};


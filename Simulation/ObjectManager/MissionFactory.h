#pragma once
#include "ComponentFactory.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	侦察任务工厂.	</summary>
///
/// <remarks>	朱连超, 2024/05/03.	</remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

class ReconnaissanceMissionFactory :
	public MissionComponentFactory
{
public:
	virtual std::shared_ptr<ComponentBase> CreateComponent();
	virtual ~ReconnaissanceMissionFactory();
};

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	打击任务工厂.	</summary>
///
/// <remarks>	朱连超, 2024/05/03.	</remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

class AttackMissionFactory :
	public MissionComponentFactory
{
public:
	virtual std::shared_ptr<ComponentBase> CreateComponent();
	virtual ~AttackMissionFactory();
};

modded class MissionServer
{
    void MissionServer()
    {
		SFLConfig config;
		// Debug log to confirm MissionServer for SearchForLoot runs on startup
		SFLLogger.Log("MissionServer: Initializing SearchForLoot config load/upgrade");
               SearchForLootConfig.UpgradeConfig("SearchForLoot.json", config);
               SearchForLootConfig.LoadConfig("SearchForLoot.json", config);
		GetDayZGame().SetSearchForLootConfig(config);
		GetDayZGame().SetBuildingCategoryMap(config);
		/*
		SearchForLootManager.ClearInstance();
		SearchForLootManager.GetInstance();
		*/
    }
};

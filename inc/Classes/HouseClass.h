
#pragma pack(push, 1)
typedef struct HouseClass
{
  void * vt;
  int vtRTTI;
  char field_8;
  char field_9;
  char field_A;
  char field_B;
  char field_C;
  char field_D;
  char field_E;
  char field_F;
  char field_10;
  char field_11;
  char field_12;
  char field_13;
  int IHouse;
  int IPublicHouse;
  int IConnectionPointContainer;
  int ID;
  void *HousesType;
  DynamicVectorClass Tags;
  DynamicVectorClass ConstructionYards;
  int AIDifficulty;
  char field_5C;
  char field_5D;
  char field_5E;
  char field_5F;
  double FirepowerMultiplier;
  double GroundspeedMultiplier;
  double AirspeedMultiplier;
  double ArmorMultiplier;
  double ROFMultiplier;
  double CostMultiplier;
  double BuildTimeMultiplier;
  double RepairDelay;
  double BuildDelay;
  int IQLevel;
  int TechLevel;
  int AltAllies;
  int Credits;
  int StartingEdge;
  int field_BC;
  int Side;
  char IsHuman;
  char IsPlayer;
  char ProductionBegun;
  char field_C7;
  char TriggersAreActive;
  char AutoBaseBuilding;
  char Discovered;
  char Defeated;
  char ToDie;
  char ToWin;
  char ToLose;
  char CiviliansEvacuated;
  char FirestormActive;
  char HasThreatNode;
  char RecalcNeeded;
  char field_D3;
  int field_D4;
  int field_D8;
  char Resigned;
  char field_DD;
  char field_DE;
  char field_DF;
  int SelectedWayPntPathIndex;
  void *WaypointPaths[12];
  char Visionary;
  char field_115;
  char field_116;
  char field_117;
  char Repairing;
  char field_119;
  char LostConnection;
  char Kicked;
  char AllToHunting;
  char IsParanoid;
  char field_11E;
  char field_11F;
  int CurrentIQ;
  int field_124;
  DynamicVectorClass Supers;
  int LastBuiltStructType;
  int LastBuiltInfantryType;
  int LastBuiltVehicleType;
  int LastBuiltAircraftType;
  int AllowWinBlocks;
  FrameTimerClass RepairTimer;
  FrameTimerClass SomeTimer1;
  FrameTimerClass BorrowedTime;
  FrameTimerClass SomeTimer3;
  int OwnedUnits;
  int OwnedBuildings;
  int OwnedInfantry;
  int OwnedAircraft;
  StorageClass Tiberiums;
  int Balance;
  int TotalStorage;
  StorageClass Weeds;
  int field_1BC;
  int AircraftTypeCount2;
  int InfantryTypeCount2;
  int UnitTypeCount2;
  int BuildingTypeCount3;
  int AircraftTypeCount;
  int InfantryTypeCount;
  int UnitTypeCount;
  int BuildingTypeCount2;
  int BuildingTypeCount;
  int CollectedPowerupCount;
  int InfantryFactoryCount;
  int BuildingFactoryCount;
  int UnitFactoryCount;
  int AircraftFactoryCount;
  int PowerBonus;
  int PowerDrain;
  void *PrimaryAircraftFactory;
  void *PrimaryInfantryFactory;
  void *PrimaryUnitFactory;
  void *PrimaryBuildingFactory;
  int FlagHolder;
  wCoordStruct HomeCell;
  int32_t PerHouseKills[8];
  int field_238;
  char field_23C;
  char field_23D;
  char field_23E;
  char field_23F;
  wCoordStruct field_240;
  char field_244;
  char field_245;
  char field_246;
  char field_247;
  char field_248;
  char field_249;
  char field_24A;
  char field_24B;
  char field_24C;
  char field_24D;
  char field_24E;
  char field_24F;
  char field_250;
  char field_251;
  char field_252;
  char field_253;
  char field_254;
  char field_255;
  char field_256;
  char field_257;
  char field_258;
  char field_259;
  char field_25A;
  char field_25B;
  char field_25C;
  char field_25D;
  char field_25E;
  char field_25F;
  char field_260;
  char field_261;
  char field_262;
  char field_263;
  char field_264;
  char field_265;
  char field_266;
  char field_267;
  int32_t UnitKills;
  char field_26C;
  char field_26D;
  char field_26E;
  char field_26F;
  char field_270;
  char field_271;
  char field_272;
  char field_273;
  char field_274;
  char field_275;
  char field_276;
  char field_277;
  char field_278;
  char field_279;
  char field_27A;
  char field_27B;
  char field_27C;
  char field_27D;
  char field_27E;
  char field_27F;
  char field_280;
  char field_281;
  char field_282;
  char field_283;
  char field_284;
  char field_285;
  char field_286;
  char field_287;
  char field_288;
  char field_289;
  char field_28A;
  char field_28B;
  char field_28C;
  char field_28D;
  char field_28E;
  char field_28F;
  char field_290;
  char field_291;
  char field_292;
  char field_293;
  char field_294;
  char field_295;
  char field_296;
  char field_297;
  char field_298;
  char field_299;
  char field_29A;
  char field_29B;
  char field_29C;
  char field_29D;
  char field_29E;
  char field_29F;
  char field_2A0;
  char field_2A1;
  char field_2A2;
  char field_2A3;
  char field_2A4;
  char field_2A5;
  char field_2A6;
  char field_2A7;
  char field_2A8;
  char field_2A9;
  char field_2AA;
  char field_2AB;
  char field_2AC;
  char field_2AD;
  char field_2AE;
  char field_2AF;
  char field_2B0;
  char field_2B1;
  char field_2B2;
  char field_2B3;
  char field_2B4;
  char field_2B5;
  char field_2B6;
  char field_2B7;
  char field_2B8;
  char field_2B9;
  char field_2BA;
  char field_2BB;
  char field_2BC;
  char field_2BD;
  char field_2BE;
  char field_2BF;
  char HouseIDofLastKill;
  char field_2C1;
  char field_2C2;
  char field_2C3;
  CoordStruct PositionOnMap;
  int field_2D0;
  char field_2D4;
  char field_2D5;
  char field_2D6;
  char field_2D7;
  char field_2D8;
  char field_2D9;
  char field_2DA;
  char field_2DB;
  char field_2DC;
  char field_2DD;
  char field_2DE;
  char field_2DF;
  char field_2E0;
  char field_2E1;
  char field_2E2;
  char field_2E3;
  char field_2E4;
  char field_2E5;
  char field_2E6;
  char field_2E7;
  char field_2E8;
  char field_2E9;
  char field_2EA;
  char field_2EB;
  char field_2EC;
  char field_2ED;
  char field_2EE;
  char field_2EF;
  char field_2F0;
  char field_2F1;
  char field_2F2;
  char field_2F3;
  char field_2F4;
  char field_2F5;
  char field_2F6;
  char field_2F7;
  char field_2F8;
  char field_2F9;
  char field_2FA;
  char field_2FB;
  char field_2FC;
  char field_2FD;
  char field_2FE;
  char field_2FF;
  char field_300;
  char field_301;
  char field_302;
  char field_303;
  char field_304;
  char field_305;
  char field_306;
  char field_307;
  char field_308;
  char field_309;
  char field_30A;
  char field_30B;
  char field_30C;
  char field_30D;
  char field_30E;
  char field_30F;
  int field_310;
  char field_314;
  char field_315;
  char field_316;
  char field_317;
  char field_318;
  char field_319;
  char field_31A;
  char field_31B;
  int HasRadar;
  int32_t PointsScoredMaybe;
  char field_324;
  char field_325;
  char field_326;
  char field_327;
  CounterClass TotalOwned_Buildings;
  CounterClass TotalOwned_Units;
  CounterClass TotalOwned_Infantry;
  CounterClass TotalOwned_Aircraft;
  CounterClass CurrentOwned_Building;
  CounterClass CurrentOwned_Unit;
  CounterClass CurrentOwned_Infantry;
  CounterClass CurrentOwned_Aircraft;
  CounterClass FactoryProduced_Buildings;
  CounterClass FactoryProduced_Units;
  CounterClass FactoryProduced_Infantry;
  CounterClass FactoryProduced_Aircraft;
  int CreationFrame;
  int field_3EC;
  int AttackDelayA;
  int AttackDelayB;
  int CurrentEnemyIndex;
  DynamicVectorClass AngerNodes;
  DynamicVectorClass ScoutNodes;
  FrameTimerClass ExpertTimer;
  FrameTimerClass AttackTimer;
  int SuggestedBuildingTypeToProduce;
  int SuggestedUnitTypeToProduce;
  int SuggestedInfantryTypeToProduce;
  int SuggestedAircraftTypeToProduce;
  int RatioAITriggerTeam;
  int RatioTeamAircraft;
  int RatioTeamInfantry;
  int RatioTeamBuildings;
  int BaseDefenseTeamCount;
  DropshipLoadoutClass DropshipClass;
  char gap_494[88];
  int field_4EC;
  char HasCloakGenerator;
  RGB RGBColor;
  char BaseNodes[0x78];
  char RecheckItems;
  char RadarOutage;
  wCoordStruct EMPTarget;
  wCoordStruct NukeTarget;
  char field_576;
  char field_577;
  int AlliesBitfield;
  FrameTimerClass field_57C;
  FrameTimerClass field_588;
  FrameTimerClass field_594;
  FrameTimerClass field_5A0;
  FrameTimerClass field_5AC;
  FrameTimerClass field_5B8;
  FrameTimerClass field_5C4;
  int AI_CLSID;
  char ThreatStuff[16900];
  char field_47D8[50700];
  char Name[5];
  char gap_10DE9[4];
  char field_10DED;
  char field_10DEE;
  char field_10DEF;
  char field_10DF0;
  char field_10DF1;
  char field_10DF2;
  char field_10DF3;
  char field_10DF4;
  char field_10DF5;
  char field_10DF6;
  char field_10DF7;
  char field_10DF8;
  char field_10DF9;
  char field_10DFA;
  char field_10DFB;
  int ColorSchemeType;
  int field_10E00;
  DynamicVectorClass ConnectionPointArray;
  int ConnectionPoint;
  int field_10E20;
  char field_10E24;
  char field_10E25;
  char field_10E26;
  char field_10E27;
  int field_10E28;
  int field_10E2C;
  int field_10E30;
  int field_10E34;
  char field_10E38;
  char field_10E39;
  char field_10E3A;
  char field_10E3B;
  int field_10E3C;
  int field_10E40;
  int field_10E44;
  int field_10E48;
  char field_10E4C;
  char field_10E4D;
  char field_10E4E;
  char field_10E4F;
} HouseClass;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct DynamicVectorClass_Houses
{
  void *vftble;
  HouseClass **Vector;
  int VectorMax;
  char IsValid;
  char IsAllocated;
  char VectorClassPad[2];
  int ActiveCount;
  int GrowthStep;
} DynamicVectorClass_Houses;
#pragma pack(pop)

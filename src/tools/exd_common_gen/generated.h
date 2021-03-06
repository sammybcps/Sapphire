[14:21:11][info] Setting up EXD data
[14:21:12][info] /* This file has been automatically generated.
   Changes will be lost upon regeneration.
   To change the content edit tools/exd_common_gen */
namespace Core {
namespace Common {

   ///////////////////////////////////////////////////////////
   //ActionCategory.exd
   enum ActionCategory : uint8_t
   {
      Autoattack = 1,
      Spell = 2,
      Weaponskill = 3,
      Ability = 4,
      Item = 5,
      DoLAbility = 6,
      DoHAbility = 7,
      Event = 8,
      LimitBreak = 9,
      System = 10,
      Artillery = 11,
      Mount = 12,
      Glamour = 13,
      ItemManipulation = 14,
      AdrenalineRush = 15,
   };

   ///////////////////////////////////////////////////////////
   //BeastReputationRank.exd
   enum BeastReputationRank : uint8_t
   {
      None = 0,
      Neutral = 1,
      Recognized = 2,
      Friendly = 3,
      Trusted = 4,
      Respected = 5,
      Honored = 6,
      Sworn = 7,
      Allied = 8,
   };

   ///////////////////////////////////////////////////////////
   //BeastTribe.exd
   enum BeastTribe : uint8_t
   {
      Amaljaa = 1,
      Sylphs = 2,
      Kobolds = 3,
      Sahagin = 4,
      Ixal = 5,
      VanuVanu = 6,
      Vath = 7,
      Moogles = 8,
   };

   ///////////////////////////////////////////////////////////
   //ClassJob.exd
   enum ClassJob : uint8_t
   {
      Adventurer = 0,
      Gladiator = 1,
      Pugilist = 2,
      Marauder = 3,
      Lancer = 4,
      Archer = 5,
      Conjurer = 6,
      Thaumaturge = 7,
      Carpenter = 8,
      Blacksmith = 9,
      Armorer = 10,
      Goldsmith = 11,
      Leatherworker = 12,
      Weaver = 13,
      Alchemist = 14,
      Culinarian = 15,
      Miner = 16,
      Botanist = 17,
      Fisher = 18,
      Paladin = 19,
      Monk = 20,
      Warrior = 21,
      Dragoon = 22,
      Bard = 23,
      Whitemage = 24,
      Blackmage = 25,
      Arcanist = 26,
      Summoner = 27,
      Scholar = 28,
      Rogue = 29,
      Ninja = 30,
      Machinist = 31,
      Darkknight = 32,
      Astrologian = 33,
      Samurai = 34,
      Redmage = 35,
   };

   ///////////////////////////////////////////////////////////
   //ContentType.exd
   enum ContentType : uint8_t
   {
      DutyRoulette = 1,
      Dungeons = 2,
      Guildhests = 3,
      Trials = 4,
      Raids = 5,
      PvP = 6,
      QuestBattles = 7,
      FATEs = 8,
      TreasureHunt = 9,
      Levequests = 10,
      GrandCompany = 11,
      Companions = 12,
      BeastTribeQuests = 13,
      OverallCompletion = 14,
      PlayerCommendation = 15,
      DisciplesoftheLand = 16,
      DisciplesoftheHand = 17,
      RetainerVentures = 18,
      GoldSaucer = 19,
      DeepDungeons = 21,
      WondrousTails = 24,
   };

   ///////////////////////////////////////////////////////////
   //EmoteCategory.exd
   enum EmoteCategory : uint8_t
   {
      General = 1,
      Persistent = 2,
      Expressions = 3,
   };

   ///////////////////////////////////////////////////////////
   //ExVersion.exd
   enum ExVersion : uint8_t
   {
      ARealmReborn = 0,
      Heavensward = 1,
      Stormblood = 2,
   };

   ///////////////////////////////////////////////////////////
   //GrandCompany.exd
   enum GrandCompany : uint8_t
   {
      None = 0,
      Maelstrom = 1,
      OrderoftheTwinAdder = 2,
      ImmortalFlames = 3,
   };

   ///////////////////////////////////////////////////////////
   //GuardianDeity.exd
   enum GuardianDeity : uint8_t
   {
      HalonetheFury = 1,
      MenphinatheLover = 2,
      ThaliaktheScholar = 3,
      NymeiatheSpinner = 4,
      LlymlaentheNavigator = 5,
      OschontheWanderer = 6,
      ByregottheBuilder = 7,
      RhalgrtheDestroyer = 8,
      AzeymatheWarden = 9,
      NaldthaltheTraders = 10,
      NophicatheMatron = 11,
      AlthyktheKeeper = 12,
   };

   ///////////////////////////////////////////////////////////
   //ItemUICategory.exd
   enum ItemUICategory : uint8_t
   {
      PugilistsArm = 1,
      GladiatorsArm = 2,
      MaraudersArm = 3,
      ArchersArm = 4,
      LancersArm = 5,
      OnehandedThaumaturgesArm = 6,
      TwohandedThaumaturgesArm = 7,
      OnehandedConjurersArm = 8,
      TwohandedConjurersArm = 9,
      ArcanistsGrimoire = 10,
      Shield = 11,
      CarpentersPrimaryTool = 12,
      CarpentersSecondaryTool = 13,
      BlacksmithsPrimaryTool = 14,
      BlacksmithsSecondaryTool = 15,
      ArmorersPrimaryTool = 16,
      ArmorersSecondaryTool = 17,
      GoldsmithsPrimaryTool = 18,
      GoldsmithsSecondaryTool = 19,
      LeatherworkersPrimaryTool = 20,
      LeatherworkersSecondaryTool = 21,
      WeaversPrimaryTool = 22,
      WeaversSecondaryTool = 23,
      AlchemistsPrimaryTool = 24,
      AlchemistsSecondaryTool = 25,
      CulinariansPrimaryTool = 26,
      CulinariansSecondaryTool = 27,
      MinersPrimaryTool = 28,
      MinersSecondaryTool = 29,
      BotanistsPrimaryTool = 30,
      BotanistsSecondaryTool = 31,
      FishersPrimaryTool = 32,
      FishingTackle = 33,
      Head = 34,
      Body = 35,
      Legs = 36,
      Hands = 37,
      Feet = 38,
      Waist = 39,
      Necklace = 40,
      Earrings = 41,
      Bracelets = 42,
      Ring = 43,
      Medicine = 44,
      Ingredient = 45,
      Meal = 46,
      Seafood = 47,
      Stone = 48,
      Metal = 49,
      Lumber = 50,
      Cloth = 51,
      Leather = 52,
      Bone = 53,
      Reagent = 54,
      Dye = 55,
      Part = 56,
      Furnishing = 57,
      Materia = 58,
      Crystal = 59,
      Catalyst = 60,
      Miscellany = 61,
      SoulCrystal = 62,
      Other = 63,
      ConstructionPermit = 64,
      Roof = 65,
      ExteriorWall = 66,
      Window = 67,
      Door = 68,
      RoofDecoration = 69,
      ExteriorWallDecoration = 70,
      Placard = 71,
      Fence = 72,
      InteriorWall = 73,
      Flooring = 74,
      CeilingLight = 75,
      OutdoorFurnishing = 76,
      Table = 77,
      Tabletop = 78,
      Wallmounted = 79,
      Rug = 80,
      Minion = 81,
      Gardening = 82,
      Demimateria = 83,
      RoguesArm = 84,
      SeasonalMiscellany = 85,
      TripleTriadCard = 86,
      DarkKnightsArm = 87,
      MachinistsArm = 88,
      AstrologiansArm = 89,
      AirshipHull = 90,
      AirshipRigging = 91,
      AirshipAftcastle = 92,
      AirshipForecastle = 93,
      OrchestrionRoll = 94,
      Painting = 95,
      SamuraisArm = 96,
      RedMagesArm = 97,
      ScholarsArm = 98,
      FishersSecondaryTool = 99,
   };

   ///////////////////////////////////////////////////////////
   //ItemSearchCategory.exd
   enum ItemSearchCategory : uint8_t
   {
      PrimaryArms = 1,
      PrimaryTools = 2,
      PrimaryTools1 = 3,
      Armor = 4,
      Accessories = 5,
      Medicines = 6,
      Materials = 7,
      Other = 8,
      PugilistsArms = 9,
      GladiatorsArms = 10,
      MaraudersArms = 11,
      ArchersArms = 12,
      LancersArms = 13,
      ThaumaturgesArms = 14,
      ConjurersArms = 15,
      ArcanistsArms = 16,
      Shields = 17,
      ThrowingWeapons = 18,
      CarpentersTools = 19,
      BlacksmithsTools = 20,
      ArmorersTools = 21,
      GoldsmithsTools = 22,
      LeatherworkersTools = 23,
      WeaversTools = 24,
      AlchemistsTools = 25,
      CulinariansTools = 26,
      MinersTools = 27,
      BotanistsTools = 28,
      FishersTools = 29,
      FishingTackle = 30,
      Head = 31,
      Undershirts = 32,
      Body = 33,
      Undergarments = 34,
      Legs = 35,
      Hands = 36,
      Feet = 37,
      Waist = 38,
      Necklaces = 39,
      Earrings = 40,
      Bracelets = 41,
      Rings = 42,
      Medicine = 43,
      Ingredients = 44,
      Meals = 45,
      Seafood = 46,
      Stone = 47,
      Metal = 48,
      Lumber = 49,
      Cloth = 50,
      Leather = 51,
      Bone = 52,
      Reagents = 53,
      Dyes = 54,
      WeaponParts = 55,
      Furnishings = 56,
      Materia = 57,
      Crystals = 58,
      Catalysts = 59,
      Miscellany = 60,
      SoulCrystals = 61,
      Arrows = 62,
      QuestItems = 63,
      Other1 = 64,
      ExteriorFixtures = 65,
      InteriorFixtures = 66,
      OutdoorFurnishings = 67,
      ChairsandBeds = 68,
      Tables = 69,
      Tabletop = 70,
      Wallmounted = 71,
      Rugs = 72,
      RoguesArms = 73,
      SeasonalMiscellany = 74,
      Minions = 75,
      DarkKnightsArms = 76,
      MachinistsArms = 77,
      AstrologiansArms = 78,
      AirshipComponents = 79,
      OrchestrionComponents = 80,
      GardeningItems = 81,
      Paintings = 82,
      SamuraisArms = 83,
      RedMagesArms = 84,
      ScholarsArms = 85,
   };

   ///////////////////////////////////////////////////////////
   //OnlineStatus.exd
   enum OnlineStatus : uint8_t
   {
      Producer = 1,
      GameMaster = 2,
      GameMaster1 = 3,
      GameMaster2 = 4,
      Disconnected = 5,
      WaitingforFriendListApproval = 6,
      WaitingforLinkshellApproval = 7,
      WaitingforFreeCompanyApproval = 8,
      NotFound = 9,
      Offline = 10,
      Mentor = 11,
      Busy = 12,
      PvP = 13,
      PlayingTripleTriad = 14,
      ViewingCutscene = 15,
      UsingaChocoboPorter = 16,
      AwayfromKeyboard = 17,
      CameraMode = 18,
      LookingforRepairs = 19,
      LookingtoRepair = 20,
      LookingtoMeldMateria = 21,
      Roleplaying = 22,
      LookingforParty = 23,
      SwordforHire = 24,
      WaitingforDutyFinder = 25,
      RecruitingPartyMembers = 26,
      Mentor1 = 27,
      PvEMentor = 28,
      TradeMentor = 29,
      PvPMentor = 30,
      Returner = 31,
      NewAdventurer = 32,
      AllianceLeader = 33,
      AlliancePartyLeader = 34,
      AlliancePartyMember = 35,
      PartyLeader = 36,
      PartyMember = 37,
      PartyLeaderCrossworld = 38,
      PartyMemberCrossworld = 39,
      AnotherWorld = 40,
      SharingDuty = 41,
      SimilarDuty = 42,
      InDuty = 43,
      TrialAdventurer = 44,
      FreeCompany = 45,
      GrandCompany = 46,
      Online = 47,
   };

   ///////////////////////////////////////////////////////////
   //Race.exd
   enum Race : uint8_t
   {
      Hyur = 1,
      Elezen = 2,
      Lalafell = 3,
      Miqote = 4,
      Roegadyn = 5,
      AuRa = 6,
   };

   ///////////////////////////////////////////////////////////
   //Tribe.exd
   enum Tribe : uint8_t
   {
      Midlander = 1,
      Highlander = 2,
      Wildwood = 3,
      Duskwight = 4,
      Plainsfolk = 5,
      Dunesfolk = 6,
      SeekeroftheSun = 7,
      KeeperoftheMoon = 8,
      SeaWolf = 9,
      Hellsguard = 10,
      Raen = 11,
      Xaela = 12,
   };

   ///////////////////////////////////////////////////////////
   //Town.exd
   enum Town : uint8_t
   {
      Nowheresville = 0,
      LimsaLominsa = 1,
      Gridania = 2,
      Uldah = 3,
      Ishgard = 4,
      Kugane = 7,
   };

   ///////////////////////////////////////////////////////////
   //Weather.exd
   enum Weather : uint8_t
   {
      ClearSkies = 1,
      FairSkies = 2,
      Clouds = 3,
      Fog = 4,
      Wind = 5,
      Gales = 6,
      Rain = 7,
      Showers = 8,
      Thunder = 9,
      Thunderstorms = 10,
      DustStorms = 11,
      Sandstorms = 12,
      HotSpells = 13,
      HeatWaves = 14,
      Snow = 15,
      Blizzards = 16,
      Gloom = 17,
      Auroras = 18,
      Darkness = 19,
      Tension = 20,
      Clouds1 = 21,
      StormClouds = 22,
      RoughSeas = 23,
      RoughSeas1 = 24,
      Louring = 25,
      HeatWaves1 = 26,
      Gloom1 = 27,
      Gales1 = 28,
      Eruptions = 29,
      FairSkies1 = 30,
      FairSkies2 = 31,
      FairSkies3 = 32,
      FairSkies4 = 33,
      FairSkies5 = 34,
      Irradiance = 35,
      CoreRadiation = 36,
      CoreRadiation1 = 37,
      CoreRadiation2 = 38,
      CoreRadiation3 = 39,
      ShelfClouds = 40,
      ShelfClouds1 = 41,
      ShelfClouds2 = 42,
      ShelfClouds3 = 43,
      Oppression = 44,
      Oppression1 = 45,
      Oppression2 = 46,
      Oppression3 = 47,
      Oppression4 = 48,
      UmbralWind = 49,
      UmbralStatic = 50,
      Smoke = 51,
      FairSkies6 = 52,
      RoyalLevin = 53,
      Hyperelectricity = 54,
      RoyalLevin1 = 55,
      Oppression5 = 56,
      Thunder1 = 57,
      Thunder2 = 58,
      CutScene = 59,
      Multiplicity = 60,
      Multiplicity1 = 61,
      Rain1 = 62,
      FairSkies7 = 63,
      Rain2 = 64,
      FairSkies8 = 65,
      Dragonstorm = 66,
      Dragonstorm1 = 67,
      Subterrain = 68,
      Concordance = 69,
      Concordance1 = 70,
      BeyondTime = 71,
      BeyondTime1 = 72,
      BeyondTime2 = 73,
      DemonicInfinity = 74,
      DemonicInfinity1 = 75,
      DemonicInfinity2 = 76,
      DimensionalDisruption = 77,
      DimensionalDisruption1 = 78,
      DimensionalDisruption2 = 79,
      Revelstorm = 80,
      Revelstorm1 = 81,
      EternalBliss = 82,
      EternalBliss1 = 83,
      Wyrmstorm = 84,
      Wyrmstorm1 = 85,
      Revelstorm2 = 86,
      Quicklevin = 87,
      Thunder3 = 88,
      DimensionalDisruption3 = 89,
   };
}
}


#pragma once

#include <array>

#include "cpu/x86_ops.h"
#include "templates.h"

using undefined = uint8_t;

using BOOL = x86_u32u;

using AssetName = std::array<char, 0x80>;

using avatarFxEmitter = std::array<uint8_t, 0x12>;
static_assert(sizeof(avatarFxEmitter) == 0x12);

using entityStatePickup = x86_u32u;

using AvatarMatrix = x86_u32u;

using CollisionMask = x86_u32u;

using ndMtxArray = x86_u32u;

using AvatarPhysicsContext = x86_u32u;
using CalloutDescriptor = x86_u32u;

using avatarModel0x9 = uint8_t[0xb8];

using Model = uint8_t[0x2b8];

using AffineTransform = float[12];

using astruct_23 = x86_u32u;

struct Vec3 {
    x86_f32u x;
    x86_f32u y;
    x86_f32u z;
};

struct Quat {
    x86_f32u x;
    x86_f32u y;
    x86_f32u z;
    x86_f32u w;
};

struct Colour {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

enum class objTag : x86_u16u {
    Null = 0,
    Actor = 1,
    Actor_Baron = 2,
    Actor_BaronPlane = 3,
    Actor_Boy = 4,
    Actor_Butler = 5,
    Actor_Cameron = 6,
    Actor_Chicken = 7,
    Actor_Cook = 8,
    Actor_CookPlayable = 9,
    Actor_Doll = 10,
    Actor_Fiddler = 11,
    Actor_GhoulieGirl = 12,
    Actor_GiantHand = 13,
    Actor_Girl = 14,
    Actor_GrimReaper = 15,
    Actor_HauntedChair = 16,
    Actor_HauntedCoat = 17,
    Actor_HauntedDoor = 18,
    Actor_HauntedDoorRound = 19,
    Actor_HauntedPicture = 20,
    Actor_HauntedTV = 21,
    Actor_Hunchback = 22,
    Actor_Imp = 23,
    Actor_ImpChallenge = 24,
    Actor_ImpFire = 25,
    Actor_ImpFlying = 26,
    Actor_ImpNinja = 27,
    Actor_ImpNinjaBig = 28,
    Actor_ImpRoger = 29,
    Actor_JessieClyde = 30,
    Actor_Medusa = 31,
    Actor_MiniCooper = 32,
    Actor_MrsMop = 33,
    Actor_Mummy = 34,
    Actor_MummyCursed = 35,
    Actor_Pirate = 36,
    Actor_PirateLeader = 37,
    Actor_PrisonerChestChap = 38,
    Actor_PrisonerDoggyGirl = 39,
    Actor_PrisonerFilmReel = 40,
    Actor_PrisonerFridgeLady = 41,
    Actor_PrisonerFridgeLadyFat = 42,
    Actor_PrisonerLaundryLad = 43,
    Actor_PrisonerPlatterLad = 44,
    Actor_PrisonerSarco = 45,
    Actor_PrisonerSaunaGirl = 46,
    Actor_PrisonerSerpentYouth = 47,
    Actor_PrisonerThornGirl = 48,
    Actor_Ribs = 49,
    Actor_RibsFNPC = 50,
    Actor_RibsKey = 51,
    Actor_Skeleton = 52,
    Actor_SkeletonMaid = 53,
    Actor_Spider = 54,
    Actor_UglyGirl = 55,
    Actor_Vampire = 56,
    Actor_VampireChicken = 57,
    Actor_Warlock = 58,
    Actor_Worm = 59,
    Actor_Zombie = 60,
    Actor_zzz = 61,
    Avatar = 62,
    Avatar_DizzyBat = 63,
    Avatar_Fx_AnimEmitter = 64,
    Avatar_Fx_BurnUp = 65,
    Avatar_Fx_Explode = 66,
    Avatar_Fx_MotionBlur = 67,
    Avatar_HatstandBase = 68,
    Avatar_StandardLampBase = 69,
    Background = 70,
    BgBreakKey = 71,
    Body = 72,
    Body_Camera = 73,
    Body_Human = 74,
    Body_JessieClyde = 75,
    Body_Player = 76,
    Body_Vampire = 77,
    Body_Zombie = 78,
    Camera = 79,
    FxCustom_DustUp = 80,
    FxCustom_Electric = 81,
    FxCustom_FadeOut = 82,
    FxCustom_FadeToGrey = 83,
    FxCustom_Fire = 84,
    FxCustom_MutateHalo = 85,
    FxCustom_SolidFadeIn = 86,
    Mind = 87,
    Mind_Cameraman = 88,
    Mind_Cinema = 89,
    Mind_Human = 90,
    Mind_Player = 91,
    Misc_AnimDelete = 92,
    Misc_AnimatedLight = 93,
    Misc_ButtonBat = 94,
    Misc_ChickenEgg = 95,
    Misc_Furnace = 96,
    Misc_GhoulyKey = 97,
    Misc_KnockDownSphere = 98,
    Misc_MummyCursedSlabTop = 99,
    Misc_Prop = 100,
    Misc_SSSDoor = 101,
    Misc_SSSDropper = 102,
    Misc_Scare = 103,
    Misc_ScareFigure = 104,
    Misc_SpiderWeb = 105,
    Misc_SuperScaryShock = 106,
    Move = 107,
    Powerup = 108,
    SceneControl = 109,
    Spawn = 110,
    State = 111,
    Strategy = 112,
    Strategy_Director = 113,
    Strategy_HauntedCoat = 114,
    Strategy_HauntedDoor = 115,
    Strategy_Human = 116,
    Strategy_Player = 117,
    Weapon = 118,
    Weapon_Anchor = 119,
    Weapon_Ankh = 120,
    Weapon_Anvil = 121,
    Weapon_Bandage = 122,
    Weapon_BaronCane = 123,
    Weapon_Barrel = 124,
    Weapon_Bathtub = 125,
    Weapon_Bellows = 126,
    Weapon_Blunderbuss = 127,
    Weapon_Book = 128,
    Weapon_Bottle = 129,
    Weapon_BottleContainer = 130,
    Weapon_Broom = 131,
    Weapon_Burger = 132,
    Weapon_BurgerContainer = 133,
    Weapon_Cake = 134,
    Weapon_Candle = 135,
    Weapon_Candlestick = 136,
    Weapon_Chair = 137,
    Weapon_ChessBoard = 138,
    Weapon_ChestOfDrawers = 139,
    Weapon_ChristmasPudding = 140,
    Weapon_CoalScuttle = 141,
    Weapon_CookingPot = 142,
    Weapon_Crate = 143,
    Weapon_Crate2 = 144,
    Weapon_Crutches = 145,
    Weapon_Cue = 146,
    Weapon_Cymbal = 147,
    Weapon_Drum = 148,
    Weapon_Dustbin = 149,
    Weapon_Dustpan = 150,
    Weapon_Egg = 151,
    Weapon_EggContainer = 152,
    Weapon_FeatherDuster = 153,
    Weapon_FeedingTrough = 154,
    Weapon_Figurine = 155,
    Weapon_FilmReel = 156,
    Weapon_FireBall = 157,
    Weapon_FireExtinguisher = 158,
    Weapon_FishingRod = 159,
    Weapon_FlourBag = 160,
    Weapon_FrenchStick = 161,
    Weapon_FruitBowl = 162,
    Weapon_FryingPan = 163,
    Weapon_Garlic = 164,
    Weapon_GiantScissors = 165,
    Weapon_GlassPane = 166,
    Weapon_Gnome = 167,
    Weapon_Gramophone = 168,
    Weapon_Guitar = 169,
    Weapon_HandSaw = 170,
    Weapon_HatStand = 171,
    Weapon_IroningBoard = 172,
    Weapon_JointOfMeat = 173,
    Weapon_LaboratoryBed = 174,
    Weapon_Ladder = 175,
    Weapon_LargePlate = 176,
    Weapon_LaundryBasket = 177,
    Weapon_Mailbox = 178,
    Weapon_Mirror = 179,
    Weapon_MummyCurse = 180,
    Weapon_Oar = 181,
    Weapon_OilDrum = 182,
    Weapon_PaintBall = 183,
    Weapon_PaintCan = 184,
    Weapon_PaintCanContainer = 185,
    Weapon_Painting = 186,
    Weapon_PicnicTable = 187,
    Weapon_PirateChest = 188,
    Weapon_PirateRum = 189,
    Weapon_PirateSword = 190,
    Weapon_Pitchfork = 191,
    Weapon_Plank = 192,
    Weapon_PlantPot = 193,
    Weapon_PopCan = 194,
    Weapon_PopCanGun = 195,
    Weapon_Pot = 196,
    Weapon_PotContainer = 197,
    Weapon_Pumpkin = 198,
    Weapon_Rake = 199,
    Weapon_RollingPin = 200,
    Weapon_SilverServiceTray = 201,
    Weapon_Skip = 202,
    Weapon_SmallTree = 203,
    Weapon_SnookerTable = 204,
    Weapon_Sofa = 205,
    Weapon_SofaButler = 206,
    Weapon_Spade = 207,
    Weapon_Speaker = 208,
    Weapon_SpecialPot = 209,
    Weapon_SpiderSpitBall = 210,
    Weapon_StandardLamp = 211,
    Weapon_Stool = 212,
    Weapon_SwordFish = 213,
    Weapon_Syringe = 214,
    Weapon_SyringeContainer = 215,
    Weapon_Table = 216,
    Weapon_TableLamp = 217,
    Weapon_Television = 218,
    Weapon_ToiletBrush = 219,
    Weapon_ToiletRoll = 220,
    Weapon_ToiletRollContainer = 221,
    Weapon_ToyBox = 222,
    Weapon_TreeStump = 223,
    Weapon_Trophy = 224,
    Weapon_Trunk = 225,
    Weapon_Umbrella = 226,
    Weapon_Vase = 227,
    Weapon_WarlockBolt = 228,
    Weapon_WashingPowder = 229,
    Weapon_WaterPistol = 230,
    Weapon_Welly = 231,
    Weapon_Wheelbarrow = 232,
    Weapon_ZombieArm = 233
};

enum class actorDroneTriggerId {
    Null = 0,
    Argue = 1,
    NotListening = 2,
    Eat = 3,
    Cook = 4,
    Dance = 5,
    Cheer = 6,
    CardPlaying1 = 7,
    CardPlaying2 = 8,
    DanceMove = 9,
    Waiter1 = 10,
    Waiter2 = 11,
    DJ = 12,
    Nothing = 13,
    Drink = 14,
    Dig1 = 15,
    Dig2 = 16,
    Dig3 = 17,
    Overseer = 18,
    Cleaning1 = 19,
    Cleaning2 = 20,
    Perv = 21
};

typedef enum ActorType { Ghoulie_old = 1, Human = 2, NPC = 5 } ActorType;

enum class NdType : x86_u32u {
    ndGroup = 1,
    ndSkeleton = 2,
    ndRigidIdx = 11,
    ndMtxArray = 12,
    ndShader2 = 17,
    ndShaderParam2 = 18,
    ndVertexBuffer = 19,
    ndPushBuffer = 20,
    ndVertexShader = 21,
    ndBGPushBuffer = 22,
    ndBlendShape = 23
};

enum class animEventId : x86_u16u {
    Null = 0,
    AtomicSection1 = 1,
    AttackVolume1 = 2,
    DebugPrint = 3,
    DisableVolume = 4,
    FadeOutStream = 5,
    FootDown = 6,
    Invulnerability = 7,
    LookAtDisable = 8,
    VelocityBoost = 9,
    VelocityBoostToYaw = 10,
    WeaponAttackVolume1 = 11,
    FxNextGen_CreateEmitter = 12,
    SetActorFlag = 13,
    BodyImpactFloor = 14,
    BodyImpactWall = 15,
    CreateAndAttachProjectile = 16,
    FxNextGen_CreateEmitterLocatorId = 17,
    Breath = 18,
    InsertScare = 19,
    DeleteWeapon = 20,
    CreateAndAttachWeapon = 21,
    InsertCameraShake = 22,
    WeaponSwing = 23,
    InsertFright = 24,
    ActorLimbChange = 25,
    ActorProjectileThrow = 26,
    ActorWeaponPlace = 27,
    PlayCue_Impact = 28,
    PlayCue_Looping = 29,
    PlayCue_Vocal = 30,
    KillCue_Looping = 31,
    PlayCue_Vocal2 = 32,
    PlayCue_FootStep = 33,
    PinataTime_SetFlag = 34,
    PinataTime_SetFlagDuration = 35,
    ExecAsset = 36,
    InsertMotionBlur = 37,
    FxNextGen_CreateEmitterVolumeMask = 38,
    FxNextGen_CreateEmitterJointId = 39,
    KickedUp = 40,
    InsertRumble = 41,
    InsertFxCustom = 42,
    TriggerWeaponCallout = 43,
    TriggerProjectileCallout = 44,
    CreateAndAttachProjectileToLocator = 45,
    DisableInput = 46,
    PlayCue_VocalIfNotActive = 47,
    PlayCue_MultiChannel = 48,
    SetSwitch = 49,
    Pinata_AvatarShake = 50,
    Pinata_Soil = 51,
    Pinata_SetTargetYOffset = 52,
    Pinata_SetSwitch = 53,
    Pinata_SetScale = 54,
    Pinata_TriggerProduce = 55,
    Pinata_Blink = 56,
    Pinata_Mood = 57,
    SetActorFlagNotFlushed = 58,
    PinataTime_SetResidencyCheck = 59
};

/*
typedef enum actorStrategyOffsetId {
    Null = 1000,
    ActionEnabledDelay = 1001,
    Aloof = 1002,
    Angry = 1003,
    Approach = 1004,
    Attack_KnockBack = 1005,
    Attack_KnockDown = 1006,
    Attack_Special = 1007,
    Attack_Special_End = 1008,
    ButlersBrew = 1009,
    Celebrate = 1010,
    CelebrateLoop = 1011,
    Coward = 1012,
    Crowd = 1013,
    Director_FollowAvatar = 1014,
    Director_FollowPlayer = 1015,
    Dizzy = 1016,
    Dodge = 1017,
    Drink = 1018,
    DroneAction = 1019,
    Dying = 1020,
    Emerge = 1021,
    Evade = 1022,
    ExitExclusionRegion = 1023,
    Explode = 1024,
    Far = 1025,
    FetchWeapon = 1026,
    ForceAngry = 1027,
    GetHelp = 1028,
    GetWeapon = 1029,
    HitWall = 1030,
    Idle = 1031,
    Interactive = 1032,
    KnockedDown = 1033,
    KnockedDown_Wait = 1034,
    Mutated = 1035,
    Near = 1036,
    Observe = 1037,
    PostKnockDownCelebrate = 1038,
    PreIntro = 1039,
    ReturnToSetupPosition = 1040,
    Scared = 1041,
    Sit = 1042,
    Sleep = 1043,
    Spin = 1044,
    Stall = 1045,
    Wait = 1046,
    Wake = 1047,
    Worried = 1048
} actorStrategyOffsetId;



typedef enum actorBodyStateId {
    Null = 0,
    Angry = 1,
    AngryStand = 2,
    AngryWalk = 3,
    ArcAttack = 4,
    AttackPrepare = 5,
    AttackStand = 6,
    AttackStand2Walk = 7,
    AttackWalk = 8,
    Awaken = 9,
    BackfistHighLeft = 10,
    BackfistHighRight = 11,
    BackfistLeft = 12,
    BackfistRight = 13,
    BackhealKickLeft = 14,
    BackhealKickRight = 15,
    Bandaged = 16,
    BloodSuck = 17,
    BurstFromCeiling = 18,
    BurstFromCrate = 19,
    BurstFromFloor = 20,
    BurstFromWall = 21,
    BurstFromWallHoldingLargeProjectile = 22,
    BurstFromWallWieldingLargeTwoHandedWeapon = 23,
    BurstFromWallWieldingTwoHandedWeapon = 24,
    CameraCrane = 25,
    CameraCut = 26,
    CameraMove = 27,
    Cheer = 28,
    CheerHoldingContainer = 29,
    CheerHoldingGun = 30,
    CheerHoldingLargeProjectile = 31,
    CheerStand = 32,
    CheerWieldingLargeTwoHandedWeapon = 33,
    CheerWieldingOneHandedWeapon = 34,
    CheerWieldingTwoHandedWeapon = 35,
    CoffinClose = 36,
    CoffinDizzy = 37,
    CoffinOpen = 38,
    CoffinOpenClose = 39,
    CoffinRun = 40,
    CoffinStand = 41,
    CoffinStunned = 42,
    Cough = 43,
    Cower = 44,
    Cringe = 45,
    CringeHoldingContainer = 46,
    CringeHoldingGun = 47,
    CringeWieldingLargeTwoHandedWeapon = 48,
    CringeWieldingOneHandedWeapon = 49,
    CringeWieldingTwoHandedWeapon = 50,
    Dizzy = 51,
    DizzyHoldingContainer = 52,
    DizzyHoldingGun = 53,
    DizzyHoldingLargeProjectile = 54,
    DizzyWieldingLargeTwoHandedWeapon = 55,
    DizzyWieldingOneHandedWeapon = 56,
    DizzyWieldingTwoHandedWeapon = 57,
    DoubleUppercut = 58,
    Drink = 59,
    DroneAppearIn = 60,
    DroneAppearOut = 61,
    DroneArgue = 62,
    DroneCardPlaying1 = 63,
    DroneCardPlaying2 = 64,
    DroneCheer = 65,
    DroneCheerHoldingContainer = 66,
    DroneCheerHoldingGun = 67,
    DroneCheerHoldingLargeProjectile = 68,
    DroneCheerWieldingLargeTwoHandedWeapon = 69,
    DroneCheerWieldingOneHandedWeapon = 70,
    DroneCheerWieldingTwoHandedWeapon = 71,
    DroneCleaning1 = 72,
    DroneCleaning2 = 73,
    DroneCook = 74,
    DroneDJ = 75,
    DroneDance = 76,
    DroneDanceMove = 77,
    DroneDig1 = 78,
    DroneDig2 = 79,
    DroneDig3 = 80,
    DroneDrink = 81,
    DroneEat = 82,
    DroneNotListening = 83,
    DroneOverseer = 84,
    DronePerv = 85,
    DroneWait = 86,
    DroneWaitHoldingContainer = 87,
    DroneWaitHoldingGun = 88,
    DroneWaitHoldingLargeProjectile = 89,
    DroneWaitWieldingLargeTwoHandedWeapon = 90,
    DroneWaitWieldingOneHandedWeapon = 91,
    DroneWaitWieldingTwoHandedWeapon = 92,
    DroneWaiter1 = 93,
    DroneWaiter2 = 94,
    ElbowChargeLeft = 95,
    ElbowChargeRight = 96,
    ElbowDropBack = 97,
    ElbowDropLeft = 98,
    ElbowMidLeft = 99,
    ElbowMidRight = 100,
    Electrify = 101,
    Emerge = 102,
    Explode = 103,
    FaintFromFloor = 104,
    FaintFromSlump = 105,
    FaintFromStanding = 106,
    FaintReaper = 107,
    FlameThrower = 108,
    FlameThrowerPrepare = 109,
    Flip = 110,
    Fly = 111,
    Fright = 112,
    FrightHoldingContainer = 113,
    FrightHoldingGun = 114,
    FrightHoldingLargeProjectile = 115,
    FrightWieldingLargeTwoHandedWeapon = 116,
    FrightWieldingOneHandedWeapon = 117,
    FrightWieldingTwoHandedWeapon = 118,
    GenerateGhouly = 119,
    GetOutWeapon = 120,
    GetUp = 121,
    GrabAndThrow = 122,
    Grabbed = 123,
    Headbutt = 124,
    Hide = 125,
    Hit = 126,
    HitDefensive = 127,
    HitFurnace = 128,
    HitStream = 129,
    HitStreamDie = 130,
    Hop = 131,
    IntoBlock = 132,
    JabKickLowLeft = 133,
    JabKickLowRight = 134,
    JabLeft = 135,
    JabRight = 136,
    Jump = 137,
    JumpArcKickRight = 138,
    JumpIntoFrame = 139,
    JumpKickBack = 140,
    JumpKickLeft = 141,
    JumpKickRight = 142,
    JumpKickSideLeft = 143,
    JumpKickSideRight = 144,
    JumpOnOff = 145,
    JumpOutOfFrame = 146,
    JumpSpinKickLeft = 147,
    JumpSpinKickRight = 148,
    JumpUppercutLeft = 149,
    JumpUppercutRight = 150,
    KickBackDownLeft = 151,
    KickBackDownRight = 152,
    KickBackLeft = 153,
    KickBackRight = 154,
    KickDownLeft = 155,
    KickDownRight = 156,
    KickHighLeft = 157,
    KickLeft = 158,
    KickPuntLeft = 159,
    KickPuntRight = 160,
    KickRight = 161,
    KickSideLeft = 162,
    KickSideLowLeft = 163,
    KickSideLowRight = 164,
    KickSideRight = 165,
    KneeLeft = 166,
    KneeRight = 167,
    KneelingDown = 168,
    KnockDown = 169,
    KnockDownAlternate = 170,
    KnockDownBig = 171,
    KnockDownBounceOffWallGetUp = 172,
    KnockDownSlumpGetUp = 173,
    LookAround = 174,
    LookForWeapon = 175,
    LungeFront = 176,
    LungeFrontConfused = 177,
    Mimic = 178,
    MutateExit = 179,
    MutateInto = 180,
    MutateLoop = 181,
    NervousStand = 182,
    NervousStandAlert = 183,
    NervousStandHoldingContainer = 184,
    NervousStandHoldingGun = 185,
    NervousStandHoldingLargeProjectile = 186,
    NervousStandWieldingLargeTwoHandedWeapon = 187,
    NervousStandWieldingOneHandedWeapon = 188,
    NervousStandWieldingTwoHandedWeapon = 189,
    NervousWalk = 190,
    NervousWalkHoldingGun = 191,
    NervousWalkWieldingOneHandedWeapon = 192,
    Panic = 193,
    PickupConfused = 194,
    PickupContainer = 195,
    PickupContainerHigh = 196,
    PickupHugeWeapon = 197,
    PickupLargeTwoHandedWeapon = 198,
    PickupLargeTwoHandedWeaponHigh = 199,
    PickupOneHandedWeapon = 200,
    PickupTwoHandedWeapon = 201,
    PunchDownFinish = 202,
    PunchDownLeft = 203,
    PunchDownLowLeft = 204,
    PunchDownLowRight = 205,
    PunchDownRight = 206,
    PunchLeft = 207,
    PunchMidLeft = 208,
    PunchMidRight = 209,
    PunchRight = 210,
    PunchSpinFinish = 211,
    PutDownWeapon = 212,
    Scale = 213,
    Scare = 214,
    ScareHoldingGun = 215,
    ScareStagger = 216,
    ScareStand = 217,
    ScareWieldingOneHandedWeapon = 218,
    ScoopAndWhack = 219,
    ScoopLargeProjectile = 220,
    Scrabble = 221,
    Shocked = 222,
    ShootGunBack = 223,
    ShootGunFront = 224,
    ShootGunLeft = 225,
    ShootGunRight = 226,
    Shout = 227,
    Shuffle = 228,
    ShuffleHoldingContainer = 229,
    ShuffleHoldingGun = 230,
    ShuffleHoldingLargeProjectile = 231,
    ShuffleWieldingLargeTwoHandedWeapon = 232,
    ShuffleWieldingOneHandedWeapon = 233,
    ShuffleWieldingTwoHandedWeapon = 234,
    SitOnFloor = 235,
    SitOnFloorGetUp = 236,
    SitOnFloorSitDown = 237,
    SitOnFloorSlump = 238,
    SlabWhack = 239,
    SlamShut = 240,
    SlamSmash = 241,
    Sleep = 242,
    SleepWall = 243,
    Slide = 244,
    SmashDownLeft = 245,
    SmashDownRight = 246,
    Sob = 247,
    SpecialAttack = 248,
    SpecialAttackFinish = 249,
    SpecialAttackPrepare = 250,
    SpecialAttackStand = 251,
    SpecialAttackWalk = 252,
    SpinAttack = 253,
    SpinAttackDizzy = 254,
    SpinAttackPrepare = 255,
    Spit = 256,
    SpitPrepare = 257,
    Stand = 258,
    StandAlert = 259,
    StandAlertFar = 260,
    StandAlertHoldingContainer = 261,
    StandAlertHoldingGun = 262,
    StandAlertHoldingLargeProjectile = 263,
    StandAlertWieldingLargeTwoHandedWeapon = 264,
    StandAlertWieldingOneHandedWeapon = 265,
    StandAlertWieldingTwoHandedWeapon = 266,
    StandAloof = 267,
    StandBig = 268,
    StandFar = 269,
    StandGhoulyIntro = 270,
    StandHoldingContainer = 271,
    StandHoldingGun = 272,
    StandHoldingLargeProjectile = 273,
    StandIdle = 274,
    StandWieldingLargeTwoHandedWeapon = 275,
    StandWieldingOneHandedWeapon = 276,
    StandWieldingTwoHandedWeapon = 277,
    StandWithoutLimb = 278,
    Struggle = 279,
    Stunned = 280,
    StunnedHoldingContainer = 281,
    StunnedHoldingGun = 282,
    StunnedHoldingLargeProjectile = 283,
    StunnedWieldingLargeTwoHandedWeapon = 284,
    StunnedWieldingOneHandedWeapon = 285,
    StunnedWieldingTwoHandedWeapon = 286,
    SwingGunBack = 287,
    SwingGunBackLow = 288,
    SwingGunFrontLeft = 289,
    SwingGunFrontLeftLow = 290,
    SwingGunFrontRight = 291,
    SwingGunFrontRightLow = 292,
    SwingGunLeft = 293,
    SwingGunLeftLow = 294,
    SwingGunRight = 295,
    SwingGunRightLow = 296,
    SwingKick = 297,
    SwingWieldingLargeTwoHandedWeaponBack = 298,
    SwingWieldingLargeTwoHandedWeaponBackLow = 299,
    SwingWieldingLargeTwoHandedWeaponFrontHigh = 300,
    SwingWieldingLargeTwoHandedWeaponFrontLeft = 301,
    SwingWieldingLargeTwoHandedWeaponFrontLeftLow = 302,
    SwingWieldingLargeTwoHandedWeaponFrontRight = 303,
    SwingWieldingLargeTwoHandedWeaponFrontRightLow = 304,
    SwingWieldingLargeTwoHandedWeaponLeft = 305,
    SwingWieldingLargeTwoHandedWeaponLeftLow = 306,
    SwingWieldingLargeTwoHandedWeaponRight = 307,
    SwingWieldingLargeTwoHandedWeaponRightLow = 308,
    SwingWieldingOneHandedWeaponBack = 309,
    SwingWieldingOneHandedWeaponBackLow = 310,
    SwingWieldingOneHandedWeaponFrontLeft = 311,
    SwingWieldingOneHandedWeaponFrontLeftLow = 312,
    SwingWieldingOneHandedWeaponFrontRight = 313,
    SwingWieldingOneHandedWeaponFrontRightLow = 314,
    SwingWieldingOneHandedWeaponLeft = 315,
    SwingWieldingOneHandedWeaponLeftLow = 316,
    SwingWieldingOneHandedWeaponRight = 317,
    SwingWieldingOneHandedWeaponRightLow = 318,
    SwingWieldingTwoHandedWeaponBack = 319,
    SwingWieldingTwoHandedWeaponBackLow = 320,
    SwingWieldingTwoHandedWeaponFrontLeft = 321,
    SwingWieldingTwoHandedWeaponFrontLeftLow = 322,
    SwingWieldingTwoHandedWeaponFrontRight = 323,
    SwingWieldingTwoHandedWeaponFrontRightLow = 324,
    SwingWieldingTwoHandedWeaponLeft = 325,
    SwingWieldingTwoHandedWeaponLeftLow = 326,
    SwingWieldingTwoHandedWeaponRight = 327,
    SwingWieldingTwoHandedWeaponRightLow = 328,
    Taunt = 329,
    ThrowBandage = 330,
    ThrowHoldingContainerBack = 331,
    ThrowHoldingContainerFront = 332,
    ThrowHoldingContainerLeft = 333,
    ThrowHoldingContainerRight = 334,
    ThrowHoldingLargeProjectileBack = 335,
    ThrowHoldingLargeProjectileFront = 336,
    ThrowHoldingLargeProjectileFrontRepeat = 337,
    ThrowHoldingLargeProjectileLeft = 338,
    ThrowHoldingLargeProjectileRight = 339,
    Transform = 340,
    Turn = 341,
    UppercutLeft = 342,
    UppercutRight = 343,
    UppercutSideLeft = 344,
    UppercutSideRight = 345,
    Wake = 346,
    WakeWall = 347,
    Walk = 348,
    WalkAlert = 349,
    WalkAlertHoldingContainer = 350,
    WalkAlertHoldingGun = 351,
    WalkAlertHoldingLargeProjectile = 352,
    WalkAlertWieldingLargeTwoHandedWeapon = 353,
    WalkAlertWieldingOneHandedWeapon = 354,
    WalkAlertWieldingTwoHandedWeapon = 355,
    WalkAloof = 356,
    WalkBig = 357,
    WalkFar = 358,
    WalkHoldingContainer = 359,
    WalkHoldingGun = 360,
    WalkHoldingLargeProjectile = 361,
    WalkWieldingLargeTwoHandedWeapon = 362,
    WalkWieldingOneHandedWeapon = 363,
    WalkWieldingTwoHandedWeapon = 364,
    WalkWithoutLimb = 365,
    WarmUp = 366,
    WarningShout = 367,
    WindmillBegin = 368,
    WindmillStand = 369,
    WindmillUppercut = 370,
    WindmillWalk = 371,
    YoYoSpin = 372
} actorBodyStateId;
*/

struct avatar {
    Ptr<x86_u32u> vtable;
    undefined field1_0x4;
    undefined field2_0x5;
    enum objTag tag;
    Vec3 pos;
    Vec3 rotEuler;
    struct Quat rotQuat;
    Vec3 scale;
    Vec3 physicsPos;
    Ptr<x86_u32u> animTable;   /* Created by retype action */
    x86_u32u animTableHandled; /* Created by retype action */
    Ptr<x86_u32u> keyframeContext;
    Ptr<x86_u32u> boneList;
    undefined field13_0x58;
    undefined field14_0x59;
    undefined field15_0x5a;
    undefined field16_0x5b;
    Ptr<x86_u32u> boneList2;
    undefined field18_0x60;
    undefined field19_0x61;
    undefined field20_0x62;
    undefined field21_0x63;
    x86_u16u boneToRemove;
    undefined field23_0x66;
    undefined field24_0x67;
    undefined field25_0x68;
    undefined field26_0x69;
    undefined field27_0x6a;
    undefined field28_0x6b;
    undefined field29_0x6c;
    undefined field30_0x6d;
    undefined field31_0x6e;
    undefined field32_0x6f;
    undefined field33_0x70;
    undefined field34_0x71;
    undefined field35_0x72;
    undefined field36_0x73;
    undefined field37_0x74;
    undefined field38_0x75;
    undefined field39_0x76;
    undefined field40_0x77;
    undefined field41_0x78;
    undefined field42_0x79;
    undefined field43_0x7a;
    undefined field44_0x7b;
    undefined field45_0x7c;
    undefined field46_0x7d;
    undefined field47_0x7e;
    undefined field48_0x7f;
    undefined field49_0x80;
    undefined field50_0x81;
    undefined field51_0x82;
    undefined field52_0x83;
    BOOL needsAnimMapping;
    Ptr<AvatarPhysicsContext> physicsCtx;
    Ptr<CalloutDescriptor> callout; /* Created by retype action */
    AssetName calloutAID;
    EmbeddedNode<avatar, 0x110> node0x110;
    BOOL has0x4CollisionFlag;
    undefined field59_0x11c;
    undefined field60_0x11d;
    undefined field61_0x11e;
    undefined field62_0x11f;
    bool damageFlag;
    undefined field64_0x121;
    undefined field65_0x122;
    undefined field66_0x123;
    undefined field67_0x124;
    undefined field68_0x125;
    undefined field69_0x126;
    undefined field70_0x127;
    undefined field71_0x128;
    undefined field72_0x129;
    undefined field73_0x12a;
    undefined field74_0x12b;
    undefined field75_0x12c;
    undefined field76_0x12d;
    undefined field77_0x12e;
    undefined field78_0x12f;
    undefined field79_0x130;
    undefined field80_0x131;
    undefined field81_0x132;
    undefined field82_0x133;
    undefined field83_0x134;
    undefined field84_0x135;
    undefined field85_0x136;
    undefined field86_0x137;
    undefined field87_0x138;
    undefined field88_0x139;
    undefined field89_0x13a;
    undefined field90_0x13b;
    undefined field91_0x13c;
    undefined field92_0x13d;
    undefined field93_0x13e;
    undefined field94_0x13f;
    undefined field95_0x140;
    undefined field96_0x141;
    undefined field97_0x142;
    undefined field98_0x143;
    undefined field99_0x144;
    undefined field100_0x145;
    undefined field101_0x146;
    undefined field102_0x147;
    undefined field103_0x148;
    undefined field104_0x149;
    undefined field105_0x14a;
    undefined field106_0x14b;
    undefined field107_0x14c;
    undefined field108_0x14d;
    undefined field109_0x14e;
    undefined field110_0x14f;
    undefined field111_0x150;
    undefined field112_0x151;
    undefined field113_0x152;
    undefined field114_0x153;
    undefined field115_0x154;
    undefined field116_0x155;
    undefined field117_0x156;
    undefined field118_0x157;
    undefined field119_0x158;
    undefined field120_0x159;
    undefined field121_0x15a;
    undefined field122_0x15b;
    undefined field123_0x15c;
    undefined field124_0x15d;
    undefined field125_0x15e;
    undefined field126_0x15f;
    undefined field127_0x160;
    undefined field128_0x161;
    undefined field129_0x162;
    undefined field130_0x163;
    undefined field131_0x164;
    undefined field132_0x165;
    undefined field133_0x166;
    undefined field134_0x167;
    undefined field135_0x168;
    undefined field136_0x169;
    undefined field137_0x16a;
    undefined field138_0x16b;
    undefined field139_0x16c;
    undefined field140_0x16d;
    undefined field141_0x16e;
    undefined field142_0x16f;
    undefined field143_0x170;
    undefined field144_0x171;
    undefined field145_0x172;
    undefined field146_0x173;
    undefined field147_0x174;
    undefined field148_0x175;
    undefined field149_0x176;
    undefined field150_0x177;
    undefined field151_0x178;
    undefined field152_0x179;
    undefined field153_0x17a;
    undefined field154_0x17b;
    undefined field155_0x17c;
    undefined field156_0x17d;
    undefined field157_0x17e;
    undefined field158_0x17f;
    undefined field159_0x180;
    undefined field160_0x181;
    undefined field161_0x182;
    undefined field162_0x183;
    undefined field163_0x184;
    undefined field164_0x185;
    undefined field165_0x186;
    undefined field166_0x187;
    undefined field167_0x188;
    undefined field168_0x189;
    undefined field169_0x18a;
    undefined field170_0x18b;
    undefined field171_0x18c;
    undefined field172_0x18d;
    undefined field173_0x18e;
    undefined field174_0x18f;
    undefined field175_0x190;
    undefined field176_0x191;
    undefined field177_0x192;
    undefined field178_0x193;
    uint16_t preventAnimChannelAdvancing;
    undefined field180_0x196;
    undefined field181_0x197;
    int32_t someInt32;
    Colour someColour;
    Ptr<x86_u32u> preDrawCallback; /* Created by retype action */
    Ptr<x86_u32u> textureCallback;
    Ptr<x86_u32u> preDrawData;
    avatarFxEmitter fxEmitterImpactFlash; /* Created by retype action */
    undefined field188_0x1be;
    undefined field189_0x1bf;
    float maxScaleFromBasis;
    float fromModelMatrix2;
    float fromModelMatrix1;
    float field193_0x1cc;
    float someMagnitude;
    undefined field195_0x1d4;
    undefined field196_0x1d5;
    undefined field197_0x1d6;
    undefined field198_0x1d7;
    undefined field199_0x1d8;
    undefined field200_0x1d9;
    undefined field201_0x1da;
    undefined field202_0x1db;
    undefined field203_0x1dc;
    undefined field204_0x1dd;
    undefined field205_0x1de;
    undefined field206_0x1df;
    EmbeddedNode<avatar, 0x1e0> avatarCollider;
    undefined field208_0x1e8;
    undefined field209_0x1e9;
    undefined field210_0x1ea;
    undefined field211_0x1eb;
    undefined field212_0x1ec;
    undefined field213_0x1ed;
    undefined field214_0x1ee;
    undefined field215_0x1ef;
    CollisionMask collisionMask; /* Created by retype action */
    EmbeddedNode<avatar, 0x1f4> infoList;
    x86_u16u field218_0x1fc;
    x86_u16u someUshort;
    float uniformScale;
    Ptr<Model> model;
    AssetName modelAID;
    Ptr<AvatarMatrix> transforms;
    int numTransforms;
    Ptr<ndMtxArray> ndMtxArray;
    undefined field226_0x294;
    undefined field227_0x295;
    undefined field228_0x296;
    undefined field229_0x297;
    bool hasActor; /* Created by retype action */
    undefined field231_0x299;
    undefined field232_0x29a;
    undefined field233_0x29b;
    x86_u32u field234_0x29c;
    x86_u32u field235_0x2a0;
    undefined field236_0x2a4;
    undefined field237_0x2a5;
    undefined field238_0x2a6;
    undefined field239_0x2a7;
    BOOL anglesCalculated; /* Created by retype action */
    AffineTransform drawAffine;
    AffineTransform baseTransform;
    x86_u32u hasShadow;
    Ptr<Model> shadowModel;
    undefined field245_0x314;
    undefined field246_0x315;
    undefined field247_0x316;
    undefined field248_0x317;
    Vec3 smoothedCurrentPos;
    Vec3 smoothedTargetPos;
    undefined field251_0x330;
    undefined field252_0x331;
    undefined field253_0x332;
    undefined field254_0x333;
    undefined field255_0x334;
    undefined field256_0x335;
    undefined field257_0x336;
    undefined field258_0x337;
    undefined field259_0x338;
    undefined field260_0x339;
    undefined field261_0x33a;
    undefined field262_0x33b;
    avatarModel0x9 model0x9s[7];
    undefined field264_0x844;
    undefined field265_0x845;
    undefined field266_0x846;
    undefined field267_0x847;
    undefined field268_0x848;
    undefined field269_0x849;
    undefined field270_0x84a;
    undefined field271_0x84b;
    undefined field272_0x84c;
    undefined field273_0x84d;
    undefined field274_0x84e;
    undefined field275_0x84f;
    undefined field276_0x850;
    undefined field277_0x851;
    undefined field278_0x852;
    undefined field279_0x853;
    undefined field280_0x854;
    undefined field281_0x855;
    undefined field282_0x856;
    undefined field283_0x857;
    undefined field284_0x858;
    undefined field285_0x859;
    undefined field286_0x85a;
    undefined field287_0x85b;
    undefined field288_0x85c;
    undefined field289_0x85d;
    undefined field290_0x85e;
    undefined field291_0x85f;
    undefined field292_0x860;
    undefined field293_0x861;
    undefined field294_0x862;
    undefined field295_0x863;
    undefined field296_0x864;
    undefined field297_0x865;
    undefined field298_0x866;
    undefined field299_0x867;
    undefined field300_0x868;
    undefined field301_0x869;
    undefined field302_0x86a;
    undefined field303_0x86b;
    undefined field304_0x86c;
    undefined field305_0x86d;
    undefined field306_0x86e;
    undefined field307_0x86f;
    undefined field308_0x870;
    undefined field309_0x871;
    undefined field310_0x872;
    undefined field311_0x873;
    undefined field312_0x874;
    undefined field313_0x875;
    undefined field314_0x876;
    undefined field315_0x877;
    undefined field316_0x878;
    undefined field317_0x879;
    undefined field318_0x87a;
    undefined field319_0x87b;
    undefined field320_0x87c;
    undefined field321_0x87d;
    undefined field322_0x87e;
    undefined field323_0x87f;
    undefined field324_0x880;
    undefined field325_0x881;
    undefined field326_0x882;
    undefined field327_0x883;
    undefined field328_0x884;
    undefined field329_0x885;
    undefined field330_0x886;
    undefined field331_0x887;
    undefined field332_0x888;
    undefined field333_0x889;
    undefined field334_0x88a;
    undefined field335_0x88b;
    undefined field336_0x88c;
    undefined field337_0x88d;
    undefined field338_0x88e;
    undefined field339_0x88f;
    undefined field340_0x890;
    undefined field341_0x891;
    undefined field342_0x892;
    undefined field343_0x893;
    undefined field344_0x894;
    undefined field345_0x895;
    undefined field346_0x896;
    undefined field347_0x897;
    undefined field348_0x898;
    undefined field349_0x899;
    undefined field350_0x89a;
    undefined field351_0x89b;
    undefined field352_0x89c;
    undefined field353_0x89d;
    undefined field354_0x89e;
    undefined field355_0x89f;
    undefined field356_0x8a0;
    undefined field357_0x8a1;
    undefined field358_0x8a2;
    undefined field359_0x8a3;
    undefined field360_0x8a4;
    undefined field361_0x8a5;
    undefined field362_0x8a6;
    undefined field363_0x8a7;
    undefined field364_0x8a8;
    undefined field365_0x8a9;
    undefined field366_0x8aa;
    undefined field367_0x8ab;
    undefined field368_0x8ac;
    undefined field369_0x8ad;
    undefined field370_0x8ae;
    undefined field371_0x8af;
    undefined field372_0x8b0;
    undefined field373_0x8b1;
    undefined field374_0x8b2;
    undefined field375_0x8b3;
    undefined field376_0x8b4;
    undefined field377_0x8b5;
    undefined field378_0x8b6;
    undefined field379_0x8b7;
    undefined field380_0x8b8;
    undefined field381_0x8b9;
    undefined field382_0x8ba;
    undefined field383_0x8bb;
    undefined field384_0x8bc;
    undefined field385_0x8bd;
    undefined field386_0x8be;
    undefined field387_0x8bf;
    undefined field388_0x8c0;
    undefined field389_0x8c1;
    undefined field390_0x8c2;
    undefined field391_0x8c3;
    undefined field392_0x8c4;
    undefined field393_0x8c5;
    undefined field394_0x8c6;
    undefined field395_0x8c7;
    undefined field396_0x8c8;
    undefined field397_0x8c9;
    undefined field398_0x8ca;
    undefined field399_0x8cb;
    undefined field400_0x8cc;
    undefined field401_0x8cd;
    undefined field402_0x8ce;
    undefined field403_0x8cf;
    undefined field404_0x8d0;
    undefined field405_0x8d1;
    undefined field406_0x8d2;
    undefined field407_0x8d3;
    undefined field408_0x8d4;
    undefined field409_0x8d5;
    undefined field410_0x8d6;
    undefined field411_0x8d7;
    undefined field412_0x8d8;
    undefined field413_0x8d9;
    undefined field414_0x8da;
    undefined field415_0x8db;
    undefined field416_0x8dc;
    undefined field417_0x8dd;
    undefined field418_0x8de;
    undefined field419_0x8df;
    undefined field420_0x8e0;
    undefined field421_0x8e1;
    undefined field422_0x8e2;
    undefined field423_0x8e3;
    undefined field424_0x8e4;
    undefined field425_0x8e5;
    undefined field426_0x8e6;
    undefined field427_0x8e7;
    undefined field428_0x8e8;
    undefined field429_0x8e9;
    undefined field430_0x8ea;
    undefined field431_0x8eb;
    undefined field432_0x8ec;
    undefined field433_0x8ed;
    undefined field434_0x8ee;
    undefined field435_0x8ef;
    undefined field436_0x8f0;
    undefined field437_0x8f1;
    undefined field438_0x8f2;
    undefined field439_0x8f3;
    undefined field440_0x8f4;
    undefined field441_0x8f5;
    undefined field442_0x8f6;
    undefined field443_0x8f7;
    Ptr<astruct_23> as23ptr;
    undefined field445_0x8fc;
    undefined field446_0x8fd;
    undefined field447_0x8fe;
    undefined field448_0x8ff;
    EmbeddedNode<avatar, 0x900> node0x900;
    x86_u32u skipUpdate;
    undefined field451_0x90c;
    undefined field452_0x90d;
    undefined field453_0x90e;
    undefined field454_0x90f;
    EmbeddedNode<avatar, 0x910> node0x910;
    EmbeddedNode<avatar, 0x918> node0x918;
    Ptr<entityStatePickup> statePickUp; /* Created by retype action */
    float timeAlive;
    x86_u32u timesUpdated;
    float actionSpeed;
    float movementFreezeTimer;
};

static_assert(offsetof(avatar, pos) == 8, "bad avatar pos offset");

static_assert(offsetof(avatar, field59_0x11c) == 0x11c,
              "bad avatar node offset");

static_assert(offsetof(avatar, field181_0x197) == 0x197,
              "bad avatar node offset");

static_assert(offsetof(avatar, preDrawData) == 0x1a8, "bad avatar node offset");

static_assert(offsetof(avatar, fxEmitterImpactFlash) == 0x1ac,
              "bad avatar node offset");

static_assert(offsetof(avatar, field188_0x1be) == 0x1be,
              "bad avatar node offset");

static_assert(offsetof(avatar, maxScaleFromBasis) == 0x1c0,
              "bad avatar node offset");

static_assert(offsetof(avatar, field215_0x1ef) == 0x1ef,
              "bad avatar node offset");

static_assert(offsetof(avatar, field251_0x330) == 0x330,
              "bad avatar node offset");

static_assert(offsetof(avatar, node0x918) == 0x918, "bad avatar node offset");
static_assert(sizeof(avatar) == 0x934, "bad avatar size");
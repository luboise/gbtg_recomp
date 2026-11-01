#include "types.h"

#include <ostream>

std::ostream& operator<<(std::ostream& os, objTag c) {
    switch (c) {
        case objTag::Null:
            os << "Null";
            break;
        case objTag::Actor:
            os << "Actor";
            break;
        case objTag::Actor_Baron:
            os << "Actor_Baron";
            break;
        case objTag::Actor_BaronPlane:
            os << "Actor_BaronPlane";
            break;
        case objTag::Actor_Boy:
            os << "Actor_Boy";
            break;
        case objTag::Actor_Butler:
            os << "Actor_Butler";
            break;
        case objTag::Actor_Cameron:
            os << "Actor_Cameron";
            break;
        case objTag::Actor_Chicken:
            os << "Actor_Chicken";
            break;
        case objTag::Actor_Cook:
            os << "Actor_Cook";
            break;
        case objTag::Actor_CookPlayable:
            os << "Actor_CookPlayable";
            break;
        case objTag::Actor_Doll:
            os << "Actor_Doll";
            break;
        case objTag::Actor_Fiddler:
            os << "Actor_Fiddler";
            break;
        case objTag::Actor_GhoulieGirl:
            os << "Actor_GhoulieGirl";
            break;
        case objTag::Actor_GiantHand:
            os << "Actor_GiantHand";
            break;
        case objTag::Actor_Girl:
            os << "Actor_Girl";
            break;
        case objTag::Actor_GrimReaper:
            os << "Actor_GrimReaper";
            break;
        case objTag::Actor_HauntedChair:
            os << "Actor_HauntedChair";
            break;
        case objTag::Actor_HauntedCoat:
            os << "Actor_HauntedCoat";
            break;
        case objTag::Actor_HauntedDoor:
            os << "Actor_HauntedDoor";
            break;
        case objTag::Actor_HauntedDoorRound:
            os << "Actor_HauntedDoorRound";
            break;
        case objTag::Actor_HauntedPicture:
            os << "Actor_HauntedPicture";
            break;
        case objTag::Actor_HauntedTV:
            os << "Actor_HauntedTV";
            break;
        case objTag::Actor_Hunchback:
            os << "Actor_Hunchback";
            break;
        case objTag::Actor_Imp:
            os << "Actor_Imp";
            break;
        case objTag::Actor_ImpChallenge:
            os << "Actor_ImpChallenge";
            break;
        case objTag::Actor_ImpFire:
            os << "Actor_ImpFire";
            break;
        case objTag::Actor_ImpFlying:
            os << "Actor_ImpFlying";
            break;
        case objTag::Actor_ImpNinja:
            os << "Actor_ImpNinja";
            break;
        case objTag::Actor_ImpNinjaBig:
            os << "Actor_ImpNinjaBig";
            break;
        case objTag::Actor_ImpRoger:
            os << "Actor_ImpRoger";
            break;
        case objTag::Actor_JessieClyde:
            os << "Actor_JessieClyde";
            break;
        case objTag::Actor_Medusa:
            os << "Actor_Medusa";
            break;
        case objTag::Actor_MiniCooper:
            os << "Actor_MiniCooper";
            break;
        case objTag::Actor_MrsMop:
            os << "Actor_MrsMop";
            break;
        case objTag::Actor_Mummy:
            os << "Actor_Mummy";
            break;
        case objTag::Actor_MummyCursed:
            os << "Actor_MummyCursed";
            break;
        case objTag::Actor_Pirate:
            os << "Actor_Pirate";
            break;
        case objTag::Actor_PirateLeader:
            os << "Actor_PirateLeader";
            break;
        case objTag::Actor_PrisonerChestChap:
            os << "Actor_PrisonerChestChap";
            break;
        case objTag::Actor_PrisonerDoggyGirl:
            os << "Actor_PrisonerDoggyGirl";
            break;
        case objTag::Actor_PrisonerFilmReel:
            os << "Actor_PrisonerFilmReel";
            break;
        case objTag::Actor_PrisonerFridgeLady:
            os << "Actor_PrisonerFridgeLady";
            break;
        case objTag::Actor_PrisonerFridgeLadyFat:
            os << "Actor_PrisonerFridgeLadyFat";
            break;
        case objTag::Actor_PrisonerLaundryLad:
            os << "Actor_PrisonerLaundryLad";
            break;
        case objTag::Actor_PrisonerPlatterLad:
            os << "Actor_PrisonerPlatterLad";
            break;
        case objTag::Actor_PrisonerSarco:
            os << "Actor_PrisonerSarco";
            break;
        case objTag::Actor_PrisonerSaunaGirl:
            os << "Actor_PrisonerSaunaGirl";
            break;
        case objTag::Actor_PrisonerSerpentYouth:
            os << "Actor_PrisonerSerpentYouth";
            break;
        case objTag::Actor_PrisonerThornGirl:
            os << "Actor_PrisonerThornGirl";
            break;
        case objTag::Actor_Ribs:
            os << "Actor_Ribs";
            break;
        case objTag::Actor_RibsFNPC:
            os << "Actor_RibsFNPC";
            break;
        case objTag::Actor_RibsKey:
            os << "Actor_RibsKey";
            break;
        case objTag::Actor_Skeleton:
            os << "Actor_Skeleton";
            break;
        case objTag::Actor_SkeletonMaid:
            os << "Actor_SkeletonMaid";
            break;
        case objTag::Actor_Spider:
            os << "Actor_Spider";
            break;
        case objTag::Actor_UglyGirl:
            os << "Actor_UglyGirl";
            break;
        case objTag::Actor_Vampire:
            os << "Actor_Vampire";
            break;
        case objTag::Actor_VampireChicken:
            os << "Actor_VampireChicken";
            break;
        case objTag::Actor_Warlock:
            os << "Actor_Warlock";
            break;
        case objTag::Actor_Worm:
            os << "Actor_Worm";
            break;
        case objTag::Actor_Zombie:
            os << "Actor_Zombie";
            break;
        case objTag::Actor_zzz:
            os << "Actor_zzz";
            break;
        case objTag::Avatar:
            os << "Avatar";
            break;
        case objTag::Avatar_DizzyBat:
            os << "Avatar_DizzyBat";
            break;
        case objTag::Avatar_Fx_AnimEmitter:
            os << "Avatar_Fx_AnimEmitter";
            break;
        case objTag::Avatar_Fx_BurnUp:
            os << "Avatar_Fx_BurnUp";
            break;
        case objTag::Avatar_Fx_Explode:
            os << "Avatar_Fx_Explode";
            break;
        case objTag::Avatar_Fx_MotionBlur:
            os << "Avatar_Fx_MotionBlur";
            break;
        case objTag::Avatar_HatstandBase:
            os << "Avatar_HatstandBase";
            break;
        case objTag::Avatar_StandardLampBase:
            os << "Avatar_StandardLampBase";
            break;
        case objTag::Background:
            os << "Background";
            break;
        case objTag::BgBreakKey:
            os << "BgBreakKey";
            break;
        case objTag::Body:
            os << "Body";
            break;
        case objTag::Body_Camera:
            os << "Body_Camera";
            break;
        case objTag::Body_Human:
            os << "Body_Human";
            break;
        case objTag::Body_JessieClyde:
            os << "Body_JessieClyde";
            break;
        case objTag::Body_Player:
            os << "Body_Player";
            break;
        case objTag::Body_Vampire:
            os << "Body_Vampire";
            break;
        case objTag::Body_Zombie:
            os << "Body_Zombie";
            break;
        case objTag::Camera:
            os << "Camera";
            break;
        case objTag::FxCustom_DustUp:
            os << "FxCustom_DustUp";
            break;
        case objTag::FxCustom_Electric:
            os << "FxCustom_Electric";
            break;
        case objTag::FxCustom_FadeOut:
            os << "FxCustom_FadeOut";
            break;
        case objTag::FxCustom_FadeToGrey:
            os << "FxCustom_FadeToGrey";
            break;
        case objTag::FxCustom_Fire:
            os << "FxCustom_Fire";
            break;
        case objTag::FxCustom_MutateHalo:
            os << "FxCustom_MutateHalo";
            break;
        case objTag::FxCustom_SolidFadeIn:
            os << "FxCustom_SolidFadeIn";
            break;
        case objTag::Mind:
            os << "Mind";
            break;
        case objTag::Mind_Cameraman:
            os << "Mind_Cameraman";
            break;
        case objTag::Mind_Cinema:
            os << "Mind_Cinema";
            break;
        case objTag::Mind_Human:
            os << "Mind_Human";
            break;
        case objTag::Mind_Player:
            os << "Mind_Player";
            break;
        case objTag::Misc_AnimDelete:
            os << "Misc_AnimDelete";
            break;
        case objTag::Misc_AnimatedLight:
            os << "Misc_AnimatedLight";
            break;
        case objTag::Misc_ButtonBat:
            os << "Misc_ButtonBat";
            break;
        case objTag::Misc_ChickenEgg:
            os << "Misc_ChickenEgg";
            break;
        case objTag::Misc_Furnace:
            os << "Misc_Furnace";
            break;
        case objTag::Misc_GhoulyKey:
            os << "Misc_GhoulyKey";
            break;
        case objTag::Misc_KnockDownSphere:
            os << "Misc_KnockDownSphere";
            break;
        case objTag::Misc_MummyCursedSlabTop:
            os << "Misc_MummyCursedSlabTop";
            break;
        case objTag::Misc_Prop:
            os << "Misc_Prop";
            break;
        case objTag::Misc_SSSDoor:
            os << "Misc_SSSDoor";
            break;
        case objTag::Misc_SSSDropper:
            os << "Misc_SSSDropper";
            break;
        case objTag::Misc_Scare:
            os << "Misc_Scare";
            break;
        case objTag::Misc_ScareFigure:
            os << "Misc_ScareFigure";
            break;
        case objTag::Misc_SpiderWeb:
            os << "Misc_SpiderWeb";
            break;
        case objTag::Misc_SuperScaryShock:
            os << "Misc_SuperScaryShock";
            break;
        case objTag::Move:
            os << "Move";
            break;
        case objTag::Powerup:
            os << "Powerup";
            break;
        case objTag::SceneControl:
            os << "SceneControl";
            break;
        case objTag::Spawn:
            os << "Spawn";
            break;
        case objTag::State:
            os << "State";
            break;
        case objTag::Strategy:
            os << "Strategy";
            break;
        case objTag::Strategy_Director:
            os << "Strategy_Director";
            break;
        case objTag::Strategy_HauntedCoat:
            os << "Strategy_HauntedCoat";
            break;
        case objTag::Strategy_HauntedDoor:
            os << "Strategy_HauntedDoor";
            break;
        case objTag::Strategy_Human:
            os << "Strategy_Human";
            break;
        case objTag::Strategy_Player:
            os << "Strategy_Player";
            break;
        case objTag::Weapon:
            os << "Weapon";
            break;
        case objTag::Weapon_Anchor:
            os << "Weapon_Anchor";
            break;
        case objTag::Weapon_Ankh:
            os << "Weapon_Ankh";
            break;
        case objTag::Weapon_Anvil:
            os << "Weapon_Anvil";
            break;
        case objTag::Weapon_Bandage:
            os << "Weapon_Bandage";
            break;
        case objTag::Weapon_BaronCane:
            os << "Weapon_BaronCane";
            break;
        case objTag::Weapon_Barrel:
            os << "Weapon_Barrel";
            break;
        case objTag::Weapon_Bathtub:
            os << "Weapon_Bathtub";
            break;
        case objTag::Weapon_Bellows:
            os << "Weapon_Bellows";
            break;
        case objTag::Weapon_Blunderbuss:
            os << "Weapon_Blunderbuss";
            break;
        case objTag::Weapon_Book:
            os << "Weapon_Book";
            break;
        case objTag::Weapon_Bottle:
            os << "Weapon_Bottle";
            break;
        case objTag::Weapon_BottleContainer:
            os << "Weapon_BottleContainer";
            break;
        case objTag::Weapon_Broom:
            os << "Weapon_Broom";
            break;
        case objTag::Weapon_Burger:
            os << "Weapon_Burger";
            break;
        case objTag::Weapon_BurgerContainer:
            os << "Weapon_BurgerContainer";
            break;
        case objTag::Weapon_Cake:
            os << "Weapon_Cake";
            break;
        case objTag::Weapon_Candle:
            os << "Weapon_Candle";
            break;
        case objTag::Weapon_Candlestick:
            os << "Weapon_Candlestick";
            break;
        case objTag::Weapon_Chair:
            os << "Weapon_Chair";
            break;
        case objTag::Weapon_ChessBoard:
            os << "Weapon_ChessBoard";
            break;
        case objTag::Weapon_ChestOfDrawers:
            os << "Weapon_ChestOfDrawers";
            break;
        case objTag::Weapon_ChristmasPudding:
            os << "Weapon_ChristmasPudding";
            break;
        case objTag::Weapon_CoalScuttle:
            os << "Weapon_CoalScuttle";
            break;
        case objTag::Weapon_CookingPot:
            os << "Weapon_CookingPot";
            break;
        case objTag::Weapon_Crate:
            os << "Weapon_Crate";
            break;
        case objTag::Weapon_Crate2:
            os << "Weapon_Crate2";
            break;
        case objTag::Weapon_Crutches:
            os << "Weapon_Crutches";
            break;
        case objTag::Weapon_Cue:
            os << "Weapon_Cue";
            break;
        case objTag::Weapon_Cymbal:
            os << "Weapon_Cymbal";
            break;
        case objTag::Weapon_Drum:
            os << "Weapon_Drum";
            break;
        case objTag::Weapon_Dustbin:
            os << "Weapon_Dustbin";
            break;
        case objTag::Weapon_Dustpan:
            os << "Weapon_Dustpan";
            break;
        case objTag::Weapon_Egg:
            os << "Weapon_Egg";
            break;
        case objTag::Weapon_EggContainer:
            os << "Weapon_EggContainer";
            break;
        case objTag::Weapon_FeatherDuster:
            os << "Weapon_FeatherDuster";
            break;
        case objTag::Weapon_FeedingTrough:
            os << "Weapon_FeedingTrough";
            break;
        case objTag::Weapon_Figurine:
            os << "Weapon_Figurine";
            break;
        case objTag::Weapon_FilmReel:
            os << "Weapon_FilmReel";
            break;
        case objTag::Weapon_FireBall:
            os << "Weapon_FireBall";
            break;
        case objTag::Weapon_FireExtinguisher:
            os << "Weapon_FireExtinguisher";
            break;
        case objTag::Weapon_FishingRod:
            os << "Weapon_FishingRod";
            break;
        case objTag::Weapon_FlourBag:
            os << "Weapon_FlourBag";
            break;
        case objTag::Weapon_FrenchStick:
            os << "Weapon_FrenchStick";
            break;
        case objTag::Weapon_FruitBowl:
            os << "Weapon_FruitBowl";
            break;
        case objTag::Weapon_FryingPan:
            os << "Weapon_FryingPan";
            break;
        case objTag::Weapon_Garlic:
            os << "Weapon_Garlic";
            break;
        case objTag::Weapon_GiantScissors:
            os << "Weapon_GiantScissors";
            break;
        case objTag::Weapon_GlassPane:
            os << "Weapon_GlassPane";
            break;
        case objTag::Weapon_Gnome:
            os << "Weapon_Gnome";
            break;
        case objTag::Weapon_Gramophone:
            os << "Weapon_Gramophone";
            break;
        case objTag::Weapon_Guitar:
            os << "Weapon_Guitar";
            break;
        case objTag::Weapon_HandSaw:
            os << "Weapon_HandSaw";
            break;
        case objTag::Weapon_HatStand:
            os << "Weapon_HatStand";
            break;
        case objTag::Weapon_IroningBoard:
            os << "Weapon_IroningBoard";
            break;
        case objTag::Weapon_JointOfMeat:
            os << "Weapon_JointOfMeat";
            break;
        case objTag::Weapon_LaboratoryBed:
            os << "Weapon_LaboratoryBed";
            break;
        case objTag::Weapon_Ladder:
            os << "Weapon_Ladder";
            break;
        case objTag::Weapon_LargePlate:
            os << "Weapon_LargePlate";
            break;
        case objTag::Weapon_LaundryBasket:
            os << "Weapon_LaundryBasket";
            break;
        case objTag::Weapon_Mailbox:
            os << "Weapon_Mailbox";
            break;
        case objTag::Weapon_Mirror:
            os << "Weapon_Mirror";
            break;
        case objTag::Weapon_MummyCurse:
            os << "Weapon_MummyCurse";
            break;
        case objTag::Weapon_Oar:
            os << "Weapon_Oar";
            break;
        case objTag::Weapon_OilDrum:
            os << "Weapon_OilDrum";
            break;
        case objTag::Weapon_PaintBall:
            os << "Weapon_PaintBall";
            break;
        case objTag::Weapon_PaintCan:
            os << "Weapon_PaintCan";
            break;
        case objTag::Weapon_PaintCanContainer:
            os << "Weapon_PaintCanContainer";
            break;
        case objTag::Weapon_Painting:
            os << "Weapon_Painting";
            break;
        case objTag::Weapon_PicnicTable:
            os << "Weapon_PicnicTable";
            break;
        case objTag::Weapon_PirateChest:
            os << "Weapon_PirateChest";
            break;
        case objTag::Weapon_PirateRum:
            os << "Weapon_PirateRum";
            break;
        case objTag::Weapon_PirateSword:
            os << "Weapon_PirateSword";
            break;
        case objTag::Weapon_Pitchfork:
            os << "Weapon_Pitchfork";
            break;
        case objTag::Weapon_Plank:
            os << "Weapon_Plank";
            break;
        case objTag::Weapon_PlantPot:
            os << "Weapon_PlantPot";
            break;
        case objTag::Weapon_PopCan:
            os << "Weapon_PopCan";
            break;
        case objTag::Weapon_PopCanGun:
            os << "Weapon_PopCanGun";
            break;
        case objTag::Weapon_Pot:
            os << "Weapon_Pot";
            break;
        case objTag::Weapon_PotContainer:
            os << "Weapon_PotContainer";
            break;
        case objTag::Weapon_Pumpkin:
            os << "Weapon_Pumpkin";
            break;
        case objTag::Weapon_Rake:
            os << "Weapon_Rake";
            break;
        case objTag::Weapon_RollingPin:
            os << "Weapon_RollingPin";
            break;
        case objTag::Weapon_SilverServiceTray:
            os << "Weapon_SilverServiceTray";
            break;
        case objTag::Weapon_Skip:
            os << "Weapon_Skip";
            break;
        case objTag::Weapon_SmallTree:
            os << "Weapon_SmallTree";
            break;
        case objTag::Weapon_SnookerTable:
            os << "Weapon_SnookerTable";
            break;
        case objTag::Weapon_Sofa:
            os << "Weapon_Sofa";
            break;
        case objTag::Weapon_SofaButler:
            os << "Weapon_SofaButler";
            break;
        case objTag::Weapon_Spade:
            os << "Weapon_Spade";
            break;
        case objTag::Weapon_Speaker:
            os << "Weapon_Speaker";
            break;
        case objTag::Weapon_SpecialPot:
            os << "Weapon_SpecialPot";
            break;
        case objTag::Weapon_SpiderSpitBall:
            os << "Weapon_SpiderSpitBall";
            break;
        case objTag::Weapon_StandardLamp:
            os << "Weapon_StandardLamp";
            break;
        case objTag::Weapon_Stool:
            os << "Weapon_Stool";
            break;
        case objTag::Weapon_SwordFish:
            os << "Weapon_SwordFish";
            break;
        case objTag::Weapon_Syringe:
            os << "Weapon_Syringe";
            break;
        case objTag::Weapon_SyringeContainer:
            os << "Weapon_SyringeContainer";
            break;
        case objTag::Weapon_Table:
            os << "Weapon_Table";
            break;
        case objTag::Weapon_TableLamp:
            os << "Weapon_TableLamp";
            break;
        case objTag::Weapon_Television:
            os << "Weapon_Television";
            break;
        case objTag::Weapon_ToiletBrush:
            os << "Weapon_ToiletBrush";
            break;
        case objTag::Weapon_ToiletRoll:
            os << "Weapon_ToiletRoll";
            break;
        case objTag::Weapon_ToiletRollContainer:
            os << "Weapon_ToiletRollContainer";
            break;
        case objTag::Weapon_ToyBox:
            os << "Weapon_ToyBox";
            break;
        case objTag::Weapon_TreeStump:
            os << "Weapon_TreeStump";
            break;
        case objTag::Weapon_Trophy:
            os << "Weapon_Trophy";
            break;
        case objTag::Weapon_Trunk:
            os << "Weapon_Trunk";
            break;
        case objTag::Weapon_Umbrella:
            os << "Weapon_Umbrella";
            break;
        case objTag::Weapon_Vase:
            os << "Weapon_Vase";
            break;
        case objTag::Weapon_WarlockBolt:
            os << "Weapon_WarlockBolt";
            break;
        case objTag::Weapon_WashingPowder:
            os << "Weapon_WashingPowder";
            break;
        case objTag::Weapon_WaterPistol:
            os << "Weapon_WaterPistol";
            break;
        case objTag::Weapon_Welly:
            os << "Weapon_Welly";
            break;
        case objTag::Weapon_Wheelbarrow:
            os << "Weapon_Wheelbarrow";
            break;
        case objTag::Weapon_ZombieArm:
            os << "Weapon_ZombieArm";
            break;
    }

    return os;
}

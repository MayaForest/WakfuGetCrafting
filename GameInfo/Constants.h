#pragma once

#include <iostream>
#include <string>
#include <map>

namespace Wakfu {
    using namespace std;

    static constexpr int MAX_LVL = 140;
    static constexpr int NBR_OF_RANGES = 14;
    static constexpr int RANGE_VALUE = 10;

    static constexpr int ARMORER = 0;
    static constexpr int BAKER = 1;
    static constexpr int CHEF = 2;
    static constexpr int HANDYMAN = 3;
    static constexpr int JEWELER = 4;
    static constexpr int LEATHER_DEALER = 5;
    static constexpr int TAILOR = 6;
    static constexpr int WEAPON_MASTER = 7;

    static constexpr int NBR_OF_JOBS = 8;
    static const char* JOBS[NBR_OF_JOBS] = {
        "Armorer",
        "Baker",
        "Chef",
        "Handyman",
        "Jeweler",
        "Leather Dealer",
        "Tailor",
        "Weapon Master"
    };

    static constexpr int NBR_OF_HARVEST_JOBS = 6;
    static const char* FIRST_RESSOURCES[NBR_OF_HARVEST_JOBS][NBR_OF_RANGES] = {
        {
            "Finest Sea Salt",
            "Copper Ore",
            "Bronze Nugget",
            "Shard of Flint",
            "Wholesome Zinc"
            "Blood Red Amethyst",
            "Taroudium Ore",
            "Sandy Ore",
            "Mythwil Ore",
            "Sovereign Titanium",
            "Dark Carbon",
            "Mercury",
            "Obsidian Ore",
            "Frozen Garnet"
        },
        {
            "Ash Wood",
            "Apiwood",
            "Boabob Wood",
            "Weeping Willow Wood",
            "Pooplar Wood",
            "Tadbole Wood",
            "Climbing Tree",
            "Yew Wood",
            "Mosscandel Wood",
            "Sylvan Wood",
            "Cherry Tree Wood",
            "Kokonut Wood",
            "Bramble Wood",
            "Carya Wood"
        },
        {
            "Iriss Flower",
            "Mint Leaf",
            "Orchid Flower",
            "Nostril Algae",
            "Reed Stem",
            "Funkus",
            "Edelweiss",
            "Aloe Vera Leaf",
            "Venutian Trap",
            "Volcanic Plant",
            "Death Cap",
            "Day Lily",
            "Nettle Leaf",
            "Delphes Inium"
        },
        {
            "Beow Meow Fish",
            "Crabby Anchovy",
            "Loot",
            "Salamon",
            "Perch",
            "Maskerel",
            "Chehorse",
            "Scincus",
            "Piri Pirhiana",
            "Hammer Shark",
            "Sea Boowolf",
            "Dwarf Caiman",
            "Fish Bone",
            "Schrymp"
        },
        {
            "Artichoke",
            "Barley Straw",
            "Babbage",
            "Melon",
            "Mottled Mushroom",
            "Golden Makafe",
            "Corn",
            "Desert Truffle",
            "Black Cawwot",
            "Sunflower",
            "Pumpkin",
            "Palm",
            "Twisted Rump Chilli",
            "Iced Cranberry"
        },
        {
            "Larva Skin",
            "Branchileg",
            "Bell OR Crackler's Gold Tooth OR Pirate Fabric",
            "Kokoko Leaf OR Selachii Skin OR Stubyob Leather",
            "Arachnee Leg OR Crobak Beak OR Blibli Skin",
            "Trool Hair OR Gone-Off Blood OR Scara Horn OR Schnek Earth",
            "Brrrbli Leather OR Opal Fabric OR Stoneguard (OR half blue and red jellies)",
            "Castuc Cloth OR Krak Ertz OR Fins",
            "Drheller Leather OR Black Wabbit Fuw OR Wabbit Fuw",
            "Red Fabric OR Dimensional Bone OR Owange Fabwic",
            "Stalagmite OR Bandit Breath OR Antique Fragment (OR Coagulated Blood, twice)",
            "Crocodyl Leather OR Kannivore Root",
            "Rough Vapor OR Pandala Ghostoplasm OR Magmatic Embers (OR Bubourg Claw, twice)",
            "Sunsloth Epicuticle OR Sirius Pincer OR Scramshell Leather OR Small Orange Snapper"
        }   
    };

    static const char* SECOND_RESSOURCES[NBR_OF_HARVEST_JOBS][NBR_OF_RANGES] = {
        {
            "Iron Ore",
            "Classic Carbon",
            "Shadowy Cobalt",
            "Rugged Quartz",
            "Grievous Kroomium",
            "Royal Bauxite",
            "Koral",
            "Hazy Lead Ore",
            "Black Gold Ore",
            "Double Carat Sapphire Stone",
            "Sryanide Ore",
            "Amber",
            "Silver Ore",
            "Zircon"
        },
        {
            "Hazel Wood",
            "Chestnut Wood",
            "Birch Wood",
            "Citronana Wood",
            "Baby Redwood Wood",
            "Hornbeam Wood",
            "Frozen Wood",
            "Prickly Wood",
            "Marmalot Wood",
            "Elderberry Wood",
            "Dry Wood",
            "Divi Divi Wood",
            "Mahogany Wood",
            "Twisted Seaweed Wood"
        },
        {
            "Crowned Thistle",
            "Flax Flower",
            "Scented Clover",
            "Fuzzy Fern Leaf",
            "Gorsegoyle Berry",
            "Dendron Flower",
            "Cotton Flower",
            "Puffball",
            "Clobbver",
            "Kamamile Flower",
            "Eterny",
            "Tahitare Flower",
            "Momoss",
            "Flowerflake"
        },
        {
            "Breaded Fish",
            "Sturgeon",
            "Grawn",
            "Hairy Ray",
            "Moonfish",
            "Dragocarp",
            "Grawfish",
            "Eel",
            "Hydawhey",
            "Troutuna",
            "Vandame",
            "Knemo",
            "Salamander",
            "Oyster"
        },
        {
            "Wheat Straw",
            "Tuberbulb",
            "Cawwot",
            "Oat Straw",
            "Rye Fiber",
            "Vanilla Rice",
            "Watermelon",
            "Beans",
            "Mushray",
            "Jollyflower",
            "Strawberry",
            "Bitter Maniok",
            "Sweat Jute Fiber",
            "Hactus"
        },
        {
            "Gobball Skin",
            "Piwi Beak",
            "Earth Earth OR Country Scalp OR Deathburn Flesh",
            "Bwork Fabric OR Mother Pearl OR Wild Wool",
            "Boowolf Paw OR Raskaw Talons OR Rat Moustache",
            "Ice Zing OR Putribits OR Golden Sand OR Chafer Bone",
            "Riktus Cloth OR Beach Fabric OR Snow Hair Feathers (OR half yellow and green jellies)",
            "Whirligig Shell OR Frozen Bone OR Puddly Straw",
            "Lenald Ful OR Blackspore Strip OR Dark Root",
            "False Note OR Copper Gliding OR Infected Fuw",
            "James Bomb OR Dark Cloth OR Meshed Feather (OR Coagulated Blood)",
            "Tropikoko Bark OR Kanniball Staff",
            "Dreggon Shell OR Blightopard OR Badgerox Fang (OR Bubourg Claw)",
            "Tundrazor Leather OR Vandalophrenic Leather OR Plantiguard Tuft OR Ashen Earth Earth"
        }   
    };

    static const int HARVEST_INDEX_BY_JOB[NBR_OF_JOBS] = {0, 2, 3, 1, 0, 5, 4, 1};

    static const char* RECIPE_NAMES[NBR_OF_JOBS] = {
        "Plate",
        "Oil",
        "Spice",
        "Bracket",
        "Gem",
        "Leather",
        "Fiber",
        "Handle"
    };

    static const char* RECIPE_ADJECTIVES[NBR_OF_RANGES] = {
        "Coarse",
        "Basic",
        "Imperfect",
        "Fragile",
        "Rustic",
        "Raw",
        "Solid",
        "Durable",
        "Refined",
        "Precious",
        "Exquisite",
        "Mystical",
        "Eternal",
        "Divine"
    };

    static const int NBR_CROPS_PER_RECIPE[NBR_OF_JOBS] = { 5, 5, 5, 5, 5, 4, 5, 5};
}
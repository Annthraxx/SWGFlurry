janta_loreweaver = Creature:new {
	objectName = "@mob/creature_names:janta_loreweaver",
	randomNameType = NAME_GENERIC,
	socialGroup = "janta_tribe",
	faction = "janta_tribe",
	level = 100,
	chanceHit = 0.60,
	damageMin = 45,
	damageMax = 50,
	baseXp = 0,
	baseHAM = 15000,
	baseHAMmax = 18000,
	armor = 0,
	resists = {-1,15,-1,0,0,15,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dantari_male.iff",
		"object/mobile/dantari_female.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 8000000},
				{group = "armor_attachments", chance = 1000000},
				{group = "clothing_attachments", chance = 1000000}
			},
			lootChance = 10000000
		},
		{
			groups = {
				{group = "wearables_all", chance = 5000000},
				{group = "loot_kit_parts", chance = 4000000},
				{group = "janta_rare", chance = 1000000}
			},
			lootChance = 10000000
		},
		{
			groups = {
				{group = "janta_common", chance = 10000000},
			},
			lootChance = 7500000
		},
		},
	weapons = {"primitive_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster)
}

CreatureTemplates:addCreatureTemplate(janta_loreweaver, "janta_loreweaver")

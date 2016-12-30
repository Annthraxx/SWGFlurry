ep3_slavemaster_klesk = Creature:new {
	customName = "Slavemaster Klesk",
	--randomNameType = NAME_GENERIC_TAG,
	socialGroup = "trandoshan",
	faction = "",
	level = 115,
	chanceHit = 1.25,
	damageMin = 1380,
	damageMax = 1790,
	baseXp = 11509,
	baseHAM = 125000,
	baseHAMmax = 135500,
	armor = 3,
	resists = {80,80,80,60,35,55,75,20,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = NONE,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/ep3/ep3_slavemaster_klesk.iff"},
	lootGroups = {
		{
			groups = {
				{group = "clothing_attachments", chance = 2500000},
				{group = "g_knife_trando_skinner", chance = 500000},
				{group = "g_som_2h_sword_tulrus", chance = 500000},
				{group = "g_sword_acid", chance = 500000},
				{group = "g_sword_avatar_wke_spiritblade", chance = 500000},
				{group = "armor_attachments", chance = 2500000},
				{group = "g_sword_pvp_bf_01", chance = 500000},
				{group = "g_sword_wookiee", chance = 500000},
				{group = "g_two_handed_sword_avatar_wke_toothpick", chance = 500000},
				{group = "g_two_handed_sword_kashyyk", chance = 500000},
				{group = "g_two_handed_sword_pvp_bf", chance = 500000},
				{group = "g_pistol_alliance_disruptor_generic", chance = 500000}
			},
			lootChance = 10000000
		}
	},
	weapons = {"pirate_weapons_heavy"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/slang",
	attacks = merge(brawlermaster,marksmanmaster)
}

CreatureTemplates:addCreatureTemplate(ep3_slavemaster_klesk, "ep3_slavemaster_klesk")
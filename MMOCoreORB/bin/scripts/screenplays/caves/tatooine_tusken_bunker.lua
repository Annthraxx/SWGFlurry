TuskenBunkerScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "TuskenBunkerScreenPlay",

 	lootContainers = {
			5995601,
      5995605,
      5995608,
			5995609
	},

	lootLevel = 300,

	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 160000},
				{group = "junk", chance = 8240000},
				{group = "rifles", chance = 500000},
				{group = "pistols", chance = 500000},
				{group = "clothing_attachments", chance = 300000},
				{group = "armor_attachments", chance = 300000}
			},
			lootChance = 8000000
		}
	},

	lootContainerRespawn = 1800
}

registerScreenPlay("TuskenBunkerScreenPlay", true)

function TuskenBunkerScreenPlay:start()
	if (isZoneEnabled("tatooine")) then
		self:spawnMobiles()
		self:initializeLootContainers()
	end
end

function TuskenBunkerScreenPlay:spawnMobiles()
	spawnMobile("tatooine", "taiken_bunker_boss",600, 1.6,-20,30,173,4235606)
	spawnMobile("tatooine", "taiken_moff", 600, -1485, 41, -188, -63,0)

	spawnMobile("tatooine", "taiken_dark_apprentice",400,-2.8,-20,29,175,4235606)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, 5,-20,29,179,4235606)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, -10,-13,7,91,4235603)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, 4,0,-4,-90,4235599)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, 4,-20,13,2,4235606)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, -1,-20,13,0,4235606)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, -7,-17,-4,46,4235604)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, 4,-13,-6,-45,4235601)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, -4,-6,0,-1,4235601)
	spawnMobile("tatooine", "taiken_dark_apprentice",400, -0,0,2,0,4235598)

	spawnMobile("tatooine", "taiken_at_st", 600, -1475, 41, -206, -110,0)
	spawnMobile("tatooine", "taiken_at_st", 600, -1497, 40, -195, 154,0)
	spawnMobile("tatooine", "taiken_at_st", 600, -1473, 41, -194, -107,0)

	spawnMobile("tatooine", "taiken_nova", 300, -1480, 41, -202, -166,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1492, 41, -196, -151,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1473, 41, -190, -112,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1488, 41, -185, 122,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1489, 41, -188, 116,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1487, 41, -184, 121,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1478, 41, -186, -156,0)
	spawnMobile("tatooine", "taiken_nova", 300, -1481, 41, -185, -156,0)
	spawnMobile("tatooine", "taiken_nova", 300, 6, -13, 8, -91,4235603)
	spawnMobile("tatooine", "taiken_nova", 300, 6, -13, 7, -91,4235603)
	spawnMobile("tatooine", "taiken_nova", 300, 7, -13, 6, -91,4235603)
	spawnMobile("tatooine", "taiken_nova", 300, -9, -13, 4, 89,4235603)
	spawnMobile("tatooine", "taiken_nova", 300, -9, -13, 9, 91,4235603)
	spawnMobile("tatooine", "taiken_nova", 300, 3, -20, 1, 0,4235605)
	spawnMobile("tatooine", "taiken_nova", 300, -0, -20, 1, -1,4235605)
	spawnMobile("tatooine", "taiken_nova", 300, -3, -20, 4, 90,4235605)
	spawnMobile("tatooine", "taiken_nova", 300, -3, -20, 6, 89,4235605)
	spawnMobile("tatooine", "taiken_nova", 300, 6, -20, 6, -90,4235605)
	spawnMobile("tatooine", "taiken_nova", 300, 6, -20, 4, -90,4235605)


	spawnMobile("tatooine", "taiken_scout", 300, -1486, 41, -185, 111,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1487, 41, -186, 112,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1488, 41, -187, 110,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1488, 41, -188, 114,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1489, 41, -189, 120,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1488, 41, -185, 114,0)
	spawnMobile("tatooine", "taiken_scout", 300, -1489, 41, -187, 112,0)

end

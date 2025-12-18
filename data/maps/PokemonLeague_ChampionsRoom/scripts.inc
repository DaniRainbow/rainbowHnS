.set LOCALID_LEAGUE_LANCE, 1
.set LOCALID_LEAGUE_BLUE, 2
.set LOCALID_LEAGUE_MARY, 3
.set LOCALID_LEAGUE_OAK, 4

PokemonLeague_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
	.byte 0

PokemonLeague_ChampionsRoom_OnResume::
	setvar VAR_0x8004, 4
	special DoPokemonLeagueLightingEffect
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_ShowBlue
	clearflag FLAG_HIDE_CHAMPIONS_ROOM_LANCE
	setflag FLAG_HIDE_CHAMPIONS_ROOM_BLUE
	end

PokemonLeague_ChampionsRoom_ShowBlue::
	setflag FLAG_HIDE_CHAMPIONS_ROOM_LANCE
	clearflag FLAG_HIDE_CHAMPIONS_ROOM_BLUE
	end

ChampionRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, ChampionRoom_CloseDoor
	.2byte 0

ChampionRoom_CloseDoor::
	lock
	setflag FLAG_TEMP_2
	special DrawWholeMapView
	applymovement OBJ_EVENT_ID_PLAYER, ChamionRoom_Movement_Enter
	waitmovement 0
	setvar VAR_TEMP_0, 1
	release
	end

ChamionRoom_Movement_Enter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ChampionRoom_Trigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

PokemonLeague_WillsRoom_EventScript_Lance::
	lockall
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingEast
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingSouth
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingWest
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_WillsRoom_EventScript_LanceRematch
	msgbox PokemonLeague_ChampionsRoom_Text_BattleIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_LANCE_1, PokemonLeague_ChampionsRoom_Text_BattleWin
	goto PokemonLeague_WillsRoom_EventScript_LanceOnDefeatJohto

PokemonLeague_WillsRoom_EventScript_LanceRematch::
	msgbox PokemonLeague_ChampionsRoom_Text_RematchBattleIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_CHAMPIONBLUE_2, PokemonLeague_ChampionsRoom_Text_BattleWin
	goto PokemonLeague_WillsRoom_EventScript_LanceOnDefeatKanto

PokemonLeague_WillsRoom_EventScript_LanceOnDefeatJohto::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_ChampionsRoom_Text_BattleAfter, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x3F2, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	playse SE_PIN
	applymovement LOCALID_LEAGUE_LANCE, Common_Movement_ExclamationMark
	delay 40
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerMoveToCenter
	applymovement LOCALID_LEAGUE_LANCE, PokemonLeague_ChampionsRoom_Movement_LanceMoveOver
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement LOCALID_LEAGUE_LANCE
	addobject LOCALID_LEAGUE_MARY
	addobject LOCALID_LEAGUE_OAK
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryEnter
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_MaryOhNoOak, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
	delay 60
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryMoveOver
	waitmovement LOCALID_LEAGUE_MARY
	waitmovement LOCALID_LEAGUE_OAK
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations, MSGBOX_DEFAULT
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryInterview
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_MaryInterview, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_LANCE, PokemonLeague_ChampionsRoom_Movement_LanceAnxious
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_Noisy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_LANCE, PokemonLeague_ChampionsRoom_Movement_LanceLeave
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerLeave
	waitmovement LOCALID_LEAGUE_LANCE
	@setobjectxyperm LOCALID_LEAGUE_LANCE, 6, 14
	removeobject LOCALID_LEAGUE_LANCE
	playse SE_EXIT
	waitmovement OBJ_EVENT_ID_PLAYER
	special SpawnCameraObject
	removeobject OBJ_EVENT_ID_PLAYER
	playse SE_EXIT
	waitse
	delay 50
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LEAGUE_MARY, Common_Movement_ExclamationMark
	delay 60
	msgbox PokemonLeague_ChampionsRoom_Text_MaryNoInterview, MSGBOX_DEFAULT
	closemessage
	setvar VAR_LEAGUE_STATE, 6
	warpsilent MAP_POKEMON_LEAGUE_HALL_OF_FAME, 0
	releaseall
	end

PokemonLeague_WillsRoom_EventScript_LanceOnDefeatKanto::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_ChampionsRoom_Text_BlueBattleAfter, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x3F2, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	playse SE_PIN
	applymovement LOCALID_LEAGUE_BLUE, Common_Movement_ExclamationMark
	delay 40
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerMoveToCenter
	applymovement LOCALID_LEAGUE_BLUE, PokemonLeague_ChampionsRoom_Movement_LanceMoveOver
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement LOCALID_LEAGUE_BLUE
	addobject LOCALID_LEAGUE_MARY
	addobject LOCALID_LEAGUE_OAK
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryEnter
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_MaryOhNoOak, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
	delay 60
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryMoveOver
	waitmovement LOCALID_LEAGUE_MARY
	waitmovement LOCALID_LEAGUE_OAK
	msgbox PokemonLeague_ChampionsRoom_Text_RematchOakCongratulations, MSGBOX_DEFAULT
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryInterview
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_RematchMaryInterview, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_BLUE, PokemonLeague_ChampionsRoom_Movement_LanceAnxious
	waitmovement 0
	msgbox PokemonLeague_ChampionsRoom_Text_Noisy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LEAGUE_BLUE, PokemonLeague_ChampionsRoom_Movement_LanceLeave
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerLeave
	waitmovement LOCALID_LEAGUE_BLUE
	@setobjectxyperm LOCALID_LEAGUE_BLUE, 6, 14
	removeobject LOCALID_LEAGUE_BLUE
	playse SE_EXIT
	waitmovement OBJ_EVENT_ID_PLAYER
	special SpawnCameraObject
	removeobject OBJ_EVENT_ID_PLAYER
	playse SE_EXIT
	waitse
	delay 50
	applymovement LOCALID_LEAGUE_MARY, PokemonLeague_ChampionsRoom_Movement_MaryLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LEAGUE_MARY, Common_Movement_ExclamationMark
	delay 60
	msgbox PokemonLeague_ChampionsRoom_Text_RematchMaryNoInterview, MSGBOX_DEFAULT
	closemessage
	setvar VAR_LEAGUE_STATE, 6
	warpsilent MAP_POKEMON_LEAGUE_HALL_OF_FAME, 0
	releaseall
	end

PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingEast
	waitmovement 0
	return
PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingSouth
	waitmovement 0
	return
PokemonLeague_ChampionsRoom_EventScript_AdjustPlayerFacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingWest
	waitmovement 0
	return

PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingEast:
	walk_down
	walk_right
	face_up
	step_end
PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingSouth:
	walk_left
	walk_down
	walk_down
	walk_right
	face_up
	step_end
PokemonLeague_ChampionsRoom_Movement_AdjustPlayerFacingWest:
	walk_down
	walk_left
	face_up
	step_end

PokemonLeague_ChampionsRoom_Movement_PlayerMoveToCenter:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PokemonLeague_ChampionsRoom_Movement_LanceMoveOver:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

PokemonLeague_ChampionsRoom_Movement_MaryEnter:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_2
	walk_in_place_fast_down
	step_end

PokemonLeague_ChampionsRoom_Movement_MaryMoveOver:
	walk_left
	face_right
	step_end

PokemonLeague_ChampionsRoom_Movement_OakEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_ChampionsRoom_Movement_MaryInterview:
	walk_fast_up
	walk_in_place_fast_right
	step_end

PokemonLeague_ChampionsRoom_Movement_LanceAnxious:
	face_up
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	face_left
	step_end

PokemonLeague_ChampionsRoom_Movement_LanceLeave:
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_ChampionsRoom_Movement_PlayerLeave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_ChampionsRoom_Movement_MaryLeft:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PokemonLeague_ChampionsRoom_Text_RematchBattleIntro:
	.string "BLUE: {PLAYER}...\p"
	.string "You know, when you defeated me\n"
	.string "at the VIRIDIAN GYM, something inside\l"
	.string "me changed.\p"
	.string "That loss... it lit a fire in me\n"
	.string "that I thought had died out\l"
	.string "long ago.\p"
	.string "It made me remember what it felt\n"
	.string "like to strive for greatness again.\p"
	.string "So I gave up my GYM, took on the\n"
	.string "LEAGUE challenge once more,\n"
	.string "and reclaimed my rightful place here.\p"
	.string "Looking into your golden eyes now...\p"
	.string "You remind me of someone...\p"
	.string "A rival from long ago who once\n"
	.string "stood where you stand now.\p"
	.string "He defeated me too, back when\n"
	.string "I thought I was invincible.\p"
	.string "But I'm not the same trainer I was then.\n"
	.string "I am stronger, smarter, better.\p"
	.string "Thanks to you, I've found my\n"
	.string "passion again!\p"
	.string "Now, show me your strength!\p"
	.string "The strength that reignited my dreams!$"

PokemonLeague_ChampionsRoom_Text_BattleIntro:
	.string "LANCE: I've been waiting for you.\p"
	.string "{PLAYER}!\p"
	.string "I knew that you, with your skills,\n"
	.string "would eventually reach me here.\p"
    .string "There's no need for words now.\p"
    .string "We will battle to determine who is\n"
    .string "the stronger of the two of us.\p"
    .string "As the most powerful trainer and as\n"
    .string "the POKéMON LEAGUE CHAMPION…\p"
    .string "I, LANCE the dragon master, accept\n"
    .string "your challenge!$"

PokemonLeague_ChampionsRoom_Text_BattleWin:
    .string "…It's over.\p"
    .string "But it's an odd feeling.\p"
    .string "I'm not angry that I lost. In fact,\n"
    .string "I feel happy.\p"
    .string "Happy that I witnessed the rise\n"
    .string "of a great new CHAMPION!$"

PokemonLeague_ChampionsRoom_Text_BattleAfter:
    .string "…Whew.\p"
    .string "You have become truly powerful,\n"
    .string "{PLAYER}.\p"
    .string "Your POKéMON have responded to your\n"
    .string "strong and upstanding nature.\p"
    .string "As a trainer, you will continue to\n"
    .string "grow strong with your POKéMON.$"

PokemonLeague_ChampionsRoom_Text_BlueBattleAfter:
    .string "Hah... Not bad, {PLAYER}.\n"
    .string "Not bad at all.\p"
    .string "I have to admit, you've got\n"
    .string "some serious skill.\p"
    .string "You remind me why I love battling\n"
    .string "in the first place.\p"
    .string "Keep pushing forward, champ.\p"
    .string "The world's got a lot more challenges\n"
    .string "waiting for someone like you.$"

PokemonLeague_ChampionsRoom_Text_MaryOhNoOak:
    .string "MARY: Oh, no! It's all over!\p"
    .string "PROF.OAK, if you weren't so slow…$"

PokemonLeague_ChampionsRoom_Text_OakCongratulations:
    .string "PROF.OAK: Ah, {PLAYER}!\p"
    .string "It's been a long while.\p"
    .string "You certainly look more impressive.\p"
    .string "Your conquest of the JOHTO LEAGUE\n"
    .string "is just fantastic!\p"
    .string "Your dedication, trust and love for\n"
    .string "your POKéMON made this happen.\p"
    .string "Your POKéMON were outstanding too.\p"
    .string "Because they believed in you as a\n"
    .string "trainer, they persevered.\p"
    .string "Congratulations, {PLAYER}!$"

PokemonLeague_ChampionsRoom_Text_RematchOakCongratulations:
    .string "PROF.OAK: Ah, {PLAYER}!\p"
    .string "What an incredible battle!\p"
    .string "You've defeated BLUE, and I couldn't\n"
    .string "be prouder of both of you.\p"
    .string "BLUE was once my research assistant,\n"
    .string "you know.\p"
    .string "Watching him grow from that eager\n"
    .string "young trainer into a true CHAMPION\l"
    .string "has been remarkable.\p"
    .string "And now, seeing you surpass even him...\p"
    .string "You've conquered both JOHTO and\n"
    .string "KANTO - a feat achieved by very\l"
    .string "few trainers indeed.\p"
    .string "Congratulations, {PLAYER}!\n"
    .string "You are truly exceptional!$"

PokemonLeague_ChampionsRoom_Text_MaryInterview:
    .string "MARY: Let's interview the brand new\n"
    .string "JOHTO CHAMPION!$"

PokemonLeague_ChampionsRoom_Text_RematchMaryInterview:
    .string "MARY: Let's interview the brand new\n"
    .string "KANTO CHAMPION!$"

PokemonLeague_ChampionsRoom_Text_Noisy:
    .string "BLUE: Ugh, what a racket...\p"
    .string "Hey {PLAYER}, let's get out\n"
    .string "of here before my ears start\l"
    .string "bleeding.$"

PokemonLeague_ChampionsRoom_Text_MaryNoInterview:
    .string "MARY: Oh, wait! We haven't done\n"
    .string "the interview!$"

PokemonLeague_ChampionsRoom_Text_RematchMaryNoInterview:
    .string "MARY: Come on! You can't blow off\n"
    .string "the interview AGAIN!$"


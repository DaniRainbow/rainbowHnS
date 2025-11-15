const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },

    [TRAINER_SAWYER_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer1),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Sawyer1_Hard),
    },

    [TRAINER_ROSS] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("ROSS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ross),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ross_Hard),
    },


    [TRAINER_MITCH] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("MITCH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mitch),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mitch_Hard),
    },


    [TRAINER_JED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("JED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jed),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jed_Hard),
    },


    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("MARC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marc),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Marc_Hard),
    },


    [TRAINER_RICH] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("RICH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rich),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rich_Hard),
    },


    [TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Joey_Hard),
    },


    [TRAINER_MIKEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("MIKEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mikey_Hard),
    },


    [TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("ALBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Albert),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Albert_Hard),
    },


    [TRAINER_GORDON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("GORDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gordon),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gordon_Hard),
    },


    [TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("SAMUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samuel),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Samuel_Hard),
    },


    [TRAINER_IAN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("IAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ian),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ian_Hard),
    },


    [TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("WARREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Warren_Hard),
    },


    [TRAINER_JIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JIMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jimmy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jimmy_Hard),
    },


    [TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("OWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Owen),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Owen_Hard),
    },


    [TRAINER_JASON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JASON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jason_Hard),
    },


    [TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JACK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jack),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jack_Hard),
    },


    [TRAINER_KIPP] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("KIPP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kipp),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kipp_Hard),
    },


    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("ALAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Alan_Hard),
    },


    [TRAINER_JOHNNY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JOHNNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Johnny),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Johnny_Hard),
    },


    [TRAINER_DANNY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("DANNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Danny),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Danny_Hard),
    },


    [TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("TOMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tommy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tommy_Hard),
    },


    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("DUDLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dudley),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dudley_Hard),
    },


    [TRAINER_JOE] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JOE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Joe_Hard),
    },


    [TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Billy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Billy_Hard),
    },


    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("CHAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chad),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Chad_Hard),
    },


    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("NATE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nate),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nate_Hard),
    },


    [TRAINER_RICKY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ricky),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ricky_Hard),
    },


    [TRAINER_ROD] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rod),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rod_Hard),
    },


    [TRAINER_ABE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ABE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abe),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Abe_Hard),
    },


    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bryan_Hard),
    },


    [TRAINER_THEO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("THEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Theo),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Theo_Hard),
    },


    [TRAINER_TOBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("TOBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Toby_Hard),
    },


    [TRAINER_DENIS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("DENIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denis),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Denis_Hard),
    },


    [TRAINER_VANCE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("VANCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vance),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Vance_Hard),
    },


    [TRAINER_HANK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("HANK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hank),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Hank_Hard),
    },


    [TRAINER_ROY] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ROY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Roy_Hard),
    },


    [TRAINER_BORIS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BORIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Boris),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Boris_Hard),
    },


    [TRAINER_BOB] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bob),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bob_Hard),
    },


    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jose),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jose_Hard),
    },


    [TRAINER_PETER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PETER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Peter),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Peter_Hard),
    },


    [TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Perry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Perry_Hard),
    },


    [TRAINER_BRET] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("BRET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bret_Hard),
    },


    [TRAINER_CARRIE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CARRIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carrie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Carrie_Hard),
    },


    [TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bridget),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bridget_Hard),
    },


    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ALICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alice),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Alice_Hard),
    },


    [TRAINER_KRISE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("KRISE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Krise),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Krise_Hard),
    },


    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CONNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Connie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Connie_Hard),
    },


    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("LINDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Linda),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Linda_Hard),
    },


    [TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Laura),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Laura_Hard),
    },


    [TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SHANNON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shannon),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Shannon_Hard),
    },


    [TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("MICHELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michelle),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Michelle_Hard),
    },


    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("DANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dana),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dana_Hard),
    },


    [TRAINER_ELLEN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ELLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ellen),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ellen_Hard),
    },


    [TRAINER_NICK] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("NICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nick),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nick_Hard),
    },


    [TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("AARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aaron),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Aaron_Hard),
    },


    [TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("PAUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paul),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Paul_Hard),
    },


    [TRAINER_CODY] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("CODY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cody),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cody_Hard),
    },


    [TRAINER_MIKE] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mike),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mike_Hard),
    },


    [TRAINER_GAVEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GAVEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gaven),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gaven_Hard),
    },


    [TRAINER_RYAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ryan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ryan_Hard),
    },


    [TRAINER_JAKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JAKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jake_Hard),
    },


    [TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BLAKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Blake),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Blake_Hard),
    },


    [TRAINER_BRIAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BRIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brian),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brian_Hard),
    },


    [TRAINER_ERICK] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ERICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erick),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Erick_Hard),
    },


    [TRAINER_ANDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ANDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Andy_Hard),
    },


    [TRAINER_TYLER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("TYLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tyler),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tyler_Hard),
    },


    [TRAINER_SEAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("SEAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sean),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Sean_Hard),
    },


    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("KEVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kevin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kevin_Hard),
    },


    [TRAINER_STEVE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Steve_Hard),
    },


    [TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ALLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allen),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Allen_Hard),
    },


    [TRAINER_DARIN] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("DARIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Darin_Hard),
    },


    [TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("GWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gwen),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gwen_Hard),
    },


    [TRAINER_LOIS] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("LOIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lois),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lois_Hard),
    },


    [TRAINER_FRAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("FRAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fran),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Fran_Hard),
    },


    [TRAINER_LOLA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lola_Hard),
    },


    [TRAINER_KATE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KATE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kate),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kate_Hard),
    },


    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("IRENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irene),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Irene_Hard),
    },


    [TRAINER_KELLY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KELLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kelly_Hard),
    },


    [TRAINER_JOYCE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JOYCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joyce),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Joyce_Hard),
    },


    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BETH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Beth_Hard),
    },


    [TRAINER_REENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("REENA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reena),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Reena_Hard),
    },


    [TRAINER_MEGAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MEGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Megan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Megan_Hard),
    },


    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carol),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Carol_Hard),
    },


    [TRAINER_QUINN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("QUINN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Quinn_Hard),
    },


    [TRAINER_EMMA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("EMMA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Emma),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Emma_Hard),
    },


    [TRAINER_CYBIL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CYBIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cybil),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cybil_Hard),
    },


    [TRAINER_JENN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JENN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jenn_Hard),
    },


    [TRAINER_CARA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cara),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cara_Hard),
    },


    [TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("VICTORIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Victoria),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Victoria_Hard),
    },


    [TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SAMANTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samantha),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Samantha_Hard),
    },


    [TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JULIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Julie_Hard),
    },


    [TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JACLYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaclyn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jaclyn_Hard),
    },


    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("BRENDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenda),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brenda_Hard),
    },


    [TRAINER_CASSIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("CASSIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cassie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cassie_Hard),
    },


    [TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("CAROLINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Caroline),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Caroline_Hard),
    },


    [TRAINER_CARLENE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("CARLENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carlene),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Carlene_Hard),
    },


    [TRAINER_JESSICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jessica),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jessica_Hard),
    },


    [TRAINER_RACHAEL] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("RACHAEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rachael),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rachael_Hard),
    },


    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Angelica),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Angelica_Hard),
    },


    [TRAINER_KENDRA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("KENDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kendra),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kendra_Hard),
    },


    [TRAINER_VERONICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("VERONICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Veronica),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Veronica_Hard),
    },


    [TRAINER_JULIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JULIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julia),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Julia_Hard),
    },


    [TRAINER_THERESA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THERESA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Theresa),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Theresa_Hard),
    },


    [TRAINER_VALERIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Valerie_Hard),
    },


    [TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("OLIVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Olivia),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Olivia_Hard),
    },


    [TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("LARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Larry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Larry_Hard),
    },


    [TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrew),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Andrew_Hard),
    },


    [TRAINER_CALVIN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Calvin_Hard),
    },


    [TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("SHANE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Shane_Hard),
    },


    [TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("BEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ben),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ben_Hard),
    },


    [TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("BRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brent_Hard),
    },


    [TRAINER_RON] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("RON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ron_Hard),
    },


    [TRAINER_ETHAN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ethan_Hard),
    },


    [TRAINER_ISSAC] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("ISSAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Issac),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Issac_Hard),
    },


    [TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("DONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donald),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Donald_Hard),
    },


    [TRAINER_ZACH] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("ZACH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zach),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Zach_Hard),
    },


    [TRAINER_MILLER] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("MILLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Miller),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Miller_Hard),
    },


    [TRAINER_GRUNT] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt_Hard),
    },

    [TRAINER_GRUNT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt2),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt2_Hard),
    },


    [TRAINER_GRUNT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt3),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt3_Hard),
    },


    [TRAINER_GRUNT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt4),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt4_Hard),
    },


    [TRAINER_GRUNT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt5),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt5_Hard),
    },


    [TRAINER_GRUNT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt6),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt6_Hard),
    },


    [TRAINER_GRUNT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt7),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt7_Hard),
    },


    [TRAINER_GRUNT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt8),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt8_Hard),
    },


    [TRAINER_GRUNT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt9),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt9_Hard),
    },


    [TRAINER_GRUNT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt10),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt10_Hard),
    },


    [TRAINER_GRUNT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt11),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt11_Hard),
    },


    [TRAINER_GRUNT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt12),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt12_Hard),
    },


    [TRAINER_GRUNT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt13),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt13_Hard),
    },


    [TRAINER_GRUNT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt14),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt14_Hard),
    },


    [TRAINER_GRUNT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt15),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt15_Hard),
    },


    [TRAINER_GRUNT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt16),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt16_Hard),
    },


    [TRAINER_GRUNT_17] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt17),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt17_Hard),
    },


    [TRAINER_GRUNT_18] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt18),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt18_Hard),
    },


    [TRAINER_GRUNT_19] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt19),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt19_Hard),
    },


    [TRAINER_GRUNT_20] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt20),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt20_Hard),
    },


    [TRAINER_GRUNT_21] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt21),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt21_Hard),
    },


    [TRAINER_GRUNT_22] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt22),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt22_Hard),
    },


    [TRAINER_GRUNT_23] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt23),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt23_Hard),
    },


    [TRAINER_GRUNT_24] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt24),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt24_Hard),
    },


    [TRAINER_GRUNT_25] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt25),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt25_Hard),
    },


    [TRAINER_GRUNT_26] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt26),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt26_Hard),
    },


    [TRAINER_GRUNT_27] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt27),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt27_Hard),
    },


    [TRAINER_GRUNT_28] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt28),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt28_Hard),
    },


    [TRAINER_GRUNT_29] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt29),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt29_Hard),
    },

    [TRAINER_GRUNT_30] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt30),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt30_Hard),
    },


    [TRAINER_GRUNT_31] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt31),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt31_Hard),
    },


    [TRAINER_GRUNT_32] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt32),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt32_Hard),
    },

    [TRAINER_GRUNT_33] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt33),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt33_Hard),
    },

    [TRAINER_ETO] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ETO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eto_Hard),
    },

    [TRAINER_ETO_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ETO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto3),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eto3_Hard),
    },

    [TRAINER_ETO_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ETO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto2),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eto2_Hard),
    },

    [TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("PRESTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Preston),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Preston_Hard),
    },


    [TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edward),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Edward_Hard),
    },


    [TRAINER_GREGORY] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("GREGORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gregory),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gregory_Hard),
    },


    [TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("VIRGIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Virgil),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Virgil_Hard),
    },


    [TRAINER_ALFRED] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("ALFRED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alfred),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Alfred_Hard),
    },


    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("CLARISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarissa),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Clarissa_Hard),
    },


    [TRAINER_COLETTE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("COLETTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Colette_Hard),
    },


    [TRAINER_HILLARY] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("HILLARY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hillary),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Hillary_Hard),
    },


    [TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHIRLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shirley),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Shirley_Hard),
    },


    [TRAINER_DON] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Don),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Don_Hard),
    },


    [TRAINER_ROB] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("ROB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rob),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rob_Hard),
    },


    [TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("ED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ed),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ed_Hard),
    },


    [TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("WADE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wade),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Wade_Hard),
    },


    [TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("BENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benny),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Benny_Hard),
    },


    [TRAINER_AL] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("AL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Al),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Al_Hard),
    },


    [TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOSH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Josh),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Josh_Hard),
    },


    [TRAINER_ARNIE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("ARNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Arnie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Arnie_Hard),
    },


    [TRAINER_KEN] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ken),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ken_Hard),
    },


    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doug),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Doug_Hard),
    },


    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("WAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wayne),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Wayne_Hard),
    },


    [TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Justin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Justin_Hard),
    },


    [TRAINER_RALPH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("RALPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ralph),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ralph_Hard),
    },


    [TRAINER_ARNOLD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ARNOLD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Arnold),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Arnold_Hard),
    },


    [TRAINER_KYLE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("KYLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyle),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kyle_Hard),
    },


    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Henry_Hard),
    },


    [TRAINER_MARVIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("MARVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marvin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Marvin_Hard),
    },


    [TRAINER_TULLY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("TULLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tully),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tully_Hard),
    },


    [TRAINER_ANDRE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ANDRE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andre),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Andre_Hard),
    },


    [TRAINER_RAYMOND] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("RAYMOND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Raymond),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Raymond_Hard),
    },


    [TRAINER_WILTON] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WILTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Wilton_Hard),
    },


    [TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("EDGAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edgar),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Edgar_Hard),
    },


    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonah),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jonah_Hard),
    },


    [TRAINER_MARTIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("MARTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Martin_Hard),
    },


    [TRAINER_STEPHEN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("STEPHEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stephen),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Stephen_Hard),
    },


    [TRAINER_BARNEY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("BARNEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barney),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Barney_Hard),
    },


    [TRAINER_SCOTT] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("SCOTT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Scott),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Scott_Hard),
    },


    [TRAINER_HAROLD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HAROLD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harold),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Harold_Hard),
    },


    [TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SIMON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Simon_Hard),
    },


    [TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RANDALL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Randall),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Randall_Hard),
    },


    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CHARLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Charlie_Hard),
    },


    [TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("GEORGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_George),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_George_Hard),
    },


    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("BERKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Berke),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Berke_Hard),
    },


    [TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kirk),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kirk_Hard),
    },


    [TRAINER_MATHEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MATHEW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mathew),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mathew_Hard),
    },


    [TRAINER_HAL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hal),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Hal_Hard),
    },


    [TRAINER_PATON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PATON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paton),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Paton_Hard),
    },


    [TRAINER_DARYL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DARYL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daryl),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Daryl_Hard),
    },


    [TRAINER_WALTER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Walter_Hard),
    },


    [TRAINER_TONY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tony_Hard),
    },


    [TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JEROME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerome),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jerome_Hard),
    },


    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TUCKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tucker),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tucker_Hard),
    },


    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rick),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rick_Hard),
    },


    [TRAINER_CAMERON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cameron_Hard),
    },


    [TRAINER_SETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SETH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Seth),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Seth_Hard),
    },


    [TRAINER_JAMES] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_James_Hard),
    },


    [TRAINER_LEWIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LEWIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lewis),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lewis_Hard),
    },


    [TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PARKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Parker),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Parker_Hard),
    },


    [TRAINER_ELAINE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ELAINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elaine),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Elaine_Hard),
    },


    [TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paula),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Paula_Hard),
    },


    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kaylee),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kaylee_Hard),
    },


    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Susie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Susie_Hard),
    },


    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denise),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Denise_Hard),
    },


    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kara),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kara_Hard),
    },


    [TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("WENDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wendy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Wendy_Hard),
    },


    [TRAINER_LISA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LISA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lisa),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lisa_Hard),
    },


    [TRAINER_JILL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jill),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jill_Hard),
    },


    [TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("MARY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mary),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mary_Hard),
    },


    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Katie_Hard),
    },


    [TRAINER_DAWN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dawn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dawn_Hard),
    },


    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tara),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tara_Hard),
    },


    [TRAINER_NICOLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NICOLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicole),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nicole_Hard),
    },


    [TRAINER_LORI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LORI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lori),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lori_Hard),
    },


    [TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JODY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jody),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jody_Hard),
    },


    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nikki),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nikki_Hard),
    },


    [TRAINER_DIANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Diana_Hard),
    },


    [TRAINER_BRIANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BRIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Briana),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Briana_Hard),
    },


    [TRAINER_EUGENE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("EUGENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eugene),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eugene_Hard),
    },


    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Huey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Huey_Hard),
    },


    [TRAINER_TERRELL] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("TERRELL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Terrell),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Terrell_Hard),
    },


    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kent),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kent_Hard),
    },


    [TRAINER_ERNEST] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ernest_Hard),
    },


    [TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("JEFF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeff),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jeff_Hard),
    },


    [TRAINER_GARRETT] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("GARRETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Garrett),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Garrett_Hard),
    },


    [TRAINER_KENNETH] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KENNETH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenneth),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kenneth_Hard),
    },


    [TRAINER_STANLY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("STANLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stanly),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Stanly_Hard),
    },


    [TRAINER_HARRY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Harry_Hard),
    },


    [TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Stan_Hard),
    },


    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("ERIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eric),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eric_Hard),
    },


    [TRAINER_GREGG] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("GREGG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gregg),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gregg_Hard),
    },


    [TRAINER_JAY] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("JAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jay),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jay_Hard),
    },


    [TRAINER_DAVE] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("DAVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dave),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dave_Hard),
    },


    [TRAINER_SAM] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("SAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sam),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Sam_Hard),
    },


    [TRAINER_TOM] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("TOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tom),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tom_Hard),
    },


    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("PAT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pat),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Pat_Hard),
    },


    [TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shawn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Shawn_Hard),
    },


    [TRAINER_TERU] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("TERU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Teru),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Teru_Hard),
    },


    [TRAINER_RUSS] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("RUSS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Russ),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Russ_Hard),
    },


    [TRAINER_NORTON] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("NORTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Norton),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Norton_Hard),
    },


    [TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("HUGH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hugh),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Hugh_Hard),
    },


    [TRAINER_MARKUS] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("MARKUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Markus),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Markus_Hard),
    },


    [TRAINER_CLYDE] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("CLYDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clyde),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Clyde_Hard),
    },


    [TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("VINCENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vincent),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Vincent_Hard),
    },


    [TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ANTHONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Anthony_Hard),
    },


    [TRAINER_RUSSELL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("RUSSELL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Russell),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Russell_Hard),
    },


    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("PHILLIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phillip),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Phillip_Hard),
    },


    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonard),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Leonard_Hard),
    },


    [TRAINER_BENJAMIN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Benjamin_Hard),
    },


    [TRAINER_ERIK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ERIK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erik),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Erik_Hard),
    },


    [TRAINER_MICHAEL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MICHAEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michael),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Michael_Hard),
    },


    [TRAINER_PARRY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("PARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Parry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Parry_Hard),
    },


    [TRAINER_TIMOTHY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Timothy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Timothy_Hard),
    },


    [TRAINER_BAILEY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BAILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bailey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bailey_Hard),
    },


    [TRAINER_TIM] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TIM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tim),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tim_Hard),
    },


    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("NOLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Noland),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Noland_Hard),
    },


    [TRAINER_KENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("KENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenny),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kenny_Hard),
    },


    [TRAINER_JIM] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("JIM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jim),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jim_Hard),
    },

    [TRAINER_DEVIN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DEVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Devin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Devin_Hard),
    },

    [TRAINER_DANIEL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DANIEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daniel),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Daniel_Hard),
    },


    [TRAINER_KAZU] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("KAZU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kazu),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kazu_Hard),
    },


    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("DWAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dwayne),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dwayne_Hard),
    },


    [TRAINER_HARRIS] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("HARRIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harris),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Harris_Hard),
    },


    [TRAINER_ZEKE] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ZEKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Zeke_Hard),
    },


    [TRAINER_CHARLES] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("CHARLES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charles),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Charles_Hard),
    },


    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("RILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Riley),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Riley_Hard),
    },


    [TRAINER_JOEL] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("JOEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joel),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Joel_Hard),
    },


    [TRAINER_GLENN] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("GLENN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Glenn),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Glenn_Hard),
    },


    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Duncan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Duncan_Hard),
    },


    [TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("EDDIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eddie),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Eddie_Hard),
    },


    [TRAINER_RICHARDO] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("RICHARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richardo),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Richardo_Hard),
    },


    [TRAINER_NARD] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("NARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nard),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nard_Hard),
    },


    [TRAINER_COREY] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("COREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Corey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Corey_Hard),
    },


    [TRAINER_OTIS] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("OTIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Otis),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Otis_Hard),
    },


    [TRAINER_DICK] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("DICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dick),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dick_Hard),
    },


    [TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("NED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ned),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ned_Hard),
    },


    [TRAINER_BURT] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("BURT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burt),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Burt_Hard),
    },


    [TRAINER_BILL] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bill),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bill_Hard),
    },


    [TRAINER_WALT] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("WALT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walt),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Walt_Hard),
    },


    [TRAINER_RAY] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("RAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ray),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ray_Hard),
    },


    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("LYLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lyle),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lyle_Hard),
    },


    [TRAINER_IRWIN] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("IRWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irwin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Irwin_Hard),
    },


    [TRAINER_FRITZ] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("FRITZ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fritz),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Fritz_Hard),
    },


    [TRAINER_HORTON] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("HORTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Horton),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Horton_Hard),
    },


    [TRAINER_KENJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KENJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenji),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kenji_Hard),
    },


    [TRAINER_YOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("YOSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yoshi),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Yoshi_Hard),
    },


    [TRAINER_LAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lao),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lao_Hard),
    },


    [TRAINER_NOB] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nob_Hard),
    },


    [TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KIYO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kiyo),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kiyo_Hard),
    },


    [TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("LUNG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lung),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lung_Hard),
    },


    [TRAINER_WAI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("WAI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wai),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Wai_Hard),
    },


    [TRAINER_NATHAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NATHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nathan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nathan_Hard),
    },


    [TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("FRANKLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Franklin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Franklin_Hard),
    },


    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("HERMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Herman),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Herman_Hard),
    },


    [TRAINER_FIDEL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("FIDEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fidel),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Fidel_Hard),
    },


    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("GREG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greg),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Greg_Hard),
    },


    [TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mark),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Mark_Hard),
    },


    [TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("PHIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Phil_Hard),
    },


    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("RICHARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richard),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Richard_Hard),
    },


    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("GILBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gilbert),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gilbert_Hard),
    },


    [TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("JARED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jared),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jared_Hard),
    },

    [TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("RODNEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rodney),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rodney_Hard),
    },


    [TRAINER_LIZ] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("LIZ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Liz_Hard),
    },


    [TRAINER_GINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("GINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gina),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gina_Hard),
    },


    [TRAINER_BROOKE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BROOKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brooke_Hard),
    },


    [TRAINER_KIM] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("KIM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kim),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Kim_Hard),
    },


    [TRAINER_CINDY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CINDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cindy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Cindy_Hard),
    },


    [TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HOPE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hope),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Hope_Hard),
    },


    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("SHARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sharon),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Sharon_Hard),
    },


    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DEBRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Debra),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Debra_Hard),
    },


    [TRAINER_ERIN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ERIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Erin_Hard),
    },


    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Heidi),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Heidi_Hard),
    },


    [TRAINER_EDNA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("EDNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edna),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Edna_Hard),
    },


    [TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("TIFFANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tiffany),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tiffany_Hard),
    },


    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("TANYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tanya),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Tanya_Hard),
    },


    [TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roland),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Roland_Hard),
    },


    [TRAINER_TODD] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TODD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Todd),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Todd_Hard),
    },


    [TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ivan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ivan_Hard),
    },


    [TRAINER_ELLIOT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Elliot_Hard),
    },


    [TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Barry_Hard),
    },


    [TRAINER_LLOYD] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LLOYD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lloyd),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Lloyd_Hard),
    },


    [TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DEAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dean),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dean_Hard),
    },


    [TRAINER_SID] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("SID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sid),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Sid_Hard),
    },


    [TRAINER_HARVEY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("HARVEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harvey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Harvey_Hard),
    },


    [TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dale),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dale_Hard),
    },


    [TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ted),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ted_Hard),
    },


    [TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("THOMAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thomas),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Thomas_Hard),
    },


    [TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LEROY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leroy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Leroy_Hard),
    },


    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_David),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_David_Hard),
    },


    [TRAINER_JOHN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JOHN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_John),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_John_Hard),
    },


    [TRAINER_JERRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jerry_Hard),
    },

    [TRAINER_GRANT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("GRANT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grant),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grant_Hard),
    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("SPENCER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spencer),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Spencer_Hard),
    },


    [TRAINER_QUENTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("QUENTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quentin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Quentin_Hard),
    },


    [TRAINER_CHOW] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("CHOW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chow),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Chow_Hard),
    },


    [TRAINER_NICO] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("NICO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nico),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Nico_Hard),
    },


    [TRAINER_JIN] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("JIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jin_Hard),
    },


    [TRAINER_TROY] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("TROY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Troy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Troy_Hard),
    },


    [TRAINER_JEFFREY] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jeffrey_Hard),
    },


    [TRAINER_PING] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("PING"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ping),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ping_Hard),
    },


    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("EDMOND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edmond),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Edmond_Hard),
    },


    [TRAINER_NEAL] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("NEAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Neal),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Neal_Hard),
    },


    [TRAINER_LI] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .trainerName = _("LI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Li),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Li_Hard),
    },


    [TRAINER_GAKU] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("GAKU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gaku),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Gaku_Hard),
    },


    [TRAINER_MASA] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("MASA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Masa),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Masa_Hard),
    },


    [TRAINER_KOJI] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Koji_Hard),
    },


    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("MARTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martha),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Martha_Hard),
    },


    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("GRACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grace),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grace_Hard),
    },


    [TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("BETHANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bethany),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Bethany_Hard),
    },


    [TRAINER_MARGRET] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("MARGRET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Margret),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Margret_Hard),
    },


    [TRAINER_ETHEL] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("ETHEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethel),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ethel_Hard),
    },


    [TRAINER_REBECCA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("REBECCA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rebecca),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rebecca_Hard),
    },


    [TRAINER_DORIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("DORIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doris),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Doris_Hard),
    },


    [TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("RONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ronald),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ronald_Hard),
    },


    [TRAINER_BRAD] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("BRAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brad),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brad_Hard),
    },


    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("DOUGLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Douglas),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Douglas_Hard),
    },


    [TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("WILLIAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_William),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_William_Hard),
    },


    [TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("DEREK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Derek),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Derek_Hard),
    },


    [TRAINER_ROBERT] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Robert_Hard),
    },


    [TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("JOSHUA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joshua),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Joshua_Hard),
    },


    [TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("CARTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carter),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Carter_Hard),
    },


    [TRAINER_TREVOR] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("TREVOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trevor),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Trevor_Hard),
    },


    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Brandon_Hard),
    },


    [TRAINER_JEREMY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("JEREMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeremy),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jeremy_Hard),
    },


    [TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("COLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colin),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Colin_Hard),
    },


    [TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alex),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Alex_Hard),
    },


    [TRAINER_REX] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("REX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rex),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rex_Hard),
    },


    [TRAINER_ALLAN] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("ALLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Allan_Hard),
    },


    [TRAINER_NAOKO] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("NAOKO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Naoko),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Naoko_Hard),
    },


    [TRAINER_SAYO] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("SAYO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Sayo),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Sayo_Hard),
    },


    [TRAINER_ZUKI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("ZUKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Zuki),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Zuki_Hard),
    },


    [TRAINER_KUNI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("KUNI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kuni),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Kuni_Hard),
    },


    [TRAINER_MIKI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("MIKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Miki),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Miki_Hard),
    },


    [TRAINER_AMY_AND_MAY] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY&MAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndMay),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_AmyAndMay_Hard),
    },


    [TRAINER_ANN_AND_ANNE] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("ANN&ANNE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_AnnAndAnne_Hard),
    },


    [TRAINER_JO_AND_ZOE] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("JO&ZOE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JoAndZoe),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_JoAndZoe_Hard),
    },


    [TRAINER_MEG_AND_PEG] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("MEG&PEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MegAndPeg),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_MegAndPeg_Hard),
    },


    [TRAINER_LEA_AND_PIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("LEA&PIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaAndPia),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_LeaAndPia_Hard),
    },


    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("BEVERLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beverly),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Beverly_Hard),
    },


    [TRAINER_RUTH] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("RUTH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ruth),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Ruth_Hard),
    },


    [TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("GEORGIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Georgia),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Georgia_Hard),
    },


    [TRAINER_JAMIE] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("JAIME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Jaime_Hard),
    },


    [TRAINER_KEITH] =
    {
        .trainerClass = TRAINER_CLASS_POLICEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .trainerName = _("KEITH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keith),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Keith_Hard),
    },


    [TRAINER_DIRK] =
    {
        .trainerClass = TRAINER_CLASS_POLICEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .trainerName = _("DIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dirk),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Dirk_Hard),
    },


    [TRAINER_THOM_AND_KAE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("THOM & KAE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_ThomAndKae_Hard),
    },

    [TRAINER_DUFF_AND_EDA] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("DUFF & EDA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_DuffAndEda),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_DuffAndEda_Hard),
    },


        
    [TRAINER_FALKNER_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .trainerName = _("FALKNER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Falkner),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Falkner_Hard),
    },


    [TRAINER_FALKNER_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .trainerName = _("FALKNER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Falkner2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Falkner2_Hard),
    },


    [TRAINER_BUGSY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .trainerName = _("BUGSY"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bugsy),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Bugsy_Hard),
    },


    [TRAINER_BUGSY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .trainerName = _("BUGSY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bugsy2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Bugsy2_Hard),
    },


    [TRAINER_WHITNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .trainerName = _("WHITNEY"),
        .items = {ITEM_SUPER_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Whitney),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Whitney_Hard),
    },


    [TRAINER_WHITNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .trainerName = _("WHITNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Whitney2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Whitney2_Hard),
    },


    [TRAINER_MORTY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .trainerName = _("MORTY"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Morty),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Morty_Hard),
    },


    [TRAINER_MORTY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .trainerName = _("MORTY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Morty2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Morty2_Hard),
    },


    [TRAINER_PRYCE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("PRYCE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Pryce_Hard),
    },


    [TRAINER_PRYCE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("PRYCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Pryce2_Hard),
    },


    [TRAINER_PRYCE_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("PRYCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce_2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Pryce_2_Hard),
    },


    [TRAINER_PRYCE_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("PRYCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce_3),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Pryce_3_Hard),
    },


    [TRAINER_JASMINE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("JASMINE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Jasmine_Hard),
    },


    [TRAINER_JASMINE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("JASMINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Jasmine2_Hard),
    },


    [TRAINER_JASMINE_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("JASMINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine_2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Jasmine_2_Hard),
    },


    [TRAINER_JASMINE_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("JASMINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine_3),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Jasmine_3_Hard),
    },


    [TRAINER_CHUCK_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("CHUCK"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Chuck_Hard),
    },


    [TRAINER_CHUCK_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("CHUCK"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Chuck2_Hard),
    },


    [TRAINER_CHUCK_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("CHUCK"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck_2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Chuck_2_Hard),
    },


    [TRAINER_CHUCK_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("CHUCK"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck_3),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Chuck_3_Hard),
    },


    [TRAINER_CLAIR_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .trainerName = _("CLAIR"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Clair),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Clair_Hard),
    },


    [TRAINER_CLAIR_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .trainerName = _("CLAIR"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Clair2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Clair2_Hard),
    },


    [TRAINER_BROCK] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .trainerName = _("BROCK"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brock),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Brock_Hard),
    },


    [TRAINER_MISTY] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .trainerName = _("MISTY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Misty),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Misty_Hard),
    },


    [TRAINER_LTSURGE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_SURGE,
        .trainerName = _("LTSURGE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_LtSurge),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_LtSurge_Hard),
    },


    [TRAINER_ERIKA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .trainerName = _("ERIKA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Erika),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Erika_Hard),
    },


    [TRAINER_SABRINA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .trainerName = _("SABRINA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Sabrina),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Sabrina_Hard),
    },


    [TRAINER_JANINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JANINE,
        .trainerName = _("JANINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Janine),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Janine_Hard),
    },


    [TRAINER_BLAINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .trainerName = _("BLAINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blaine),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Blaine_Hard),
    },


    [TRAINER_BLUE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .trainerName = _("BLUE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blue),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Blue_Hard),
    },


    [TRAINER_BLUE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .trainerName = _("BLUE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blue2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Blue2_Hard),
    },


    [TRAINER_WILL_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .trainerName = _("WILL"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Will),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Will_Hard),
    },


    [TRAINER_WILL_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .trainerName = _("WILL"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Will2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Will2_Hard),
    },


    [TRAINER_BRUNO_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("BRUNO"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bruno),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Bruno_Hard),
    },


    [TRAINER_BRUNO_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("BRUNO"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bruno2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Bruno2_Hard),
    },


    [TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .trainerName = _("KAREN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Karen),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Karen_Hard),
    },


    [TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .trainerName = _("KAREN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Karen2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Karen2_Hard),
    },


    [TRAINER_KOGA_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .trainerName = _("KOGA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Koga),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Koga_Hard),
    },


    [TRAINER_KOGA_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .trainerName = _("KOGA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Koga2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Koga2_Hard),
    },


    [TRAINER_LANCE_1] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .trainerName = _("LANCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Lance),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Lance_Hard),
    },


    [TRAINER_LANCE_2] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .trainerName = _("LANCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Lance2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Lance2_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Chikorita1),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rival_Chikorita1_Hard),
    },

    [TRAINER_RIVAL_CHIKORITA_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita2_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita3),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita3_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita4),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita4_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita5),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita5_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita6),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita6_Hard),
    },


    [TRAINER_RIVAL_CHIKORITA_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita7),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Chikorita7_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Cyndaquil1),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rival_Cyndaquil1_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil2_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil3),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil3_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil4),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil4_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil5),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil5_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil6),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil6_Hard),
    },


    [TRAINER_RIVAL_CYNDAQUIL_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil7),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Cyndaquil7_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Totodile1),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Rival_Totodile1_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Totodile2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile2_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Totodile3),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile3_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile4),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile4_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile5),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile5_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile6),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile6_Hard),
    },


    [TRAINER_RIVAL_TOTODILE_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("SILVER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile7),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Rival_Totodile7_Hard),
    },


    [TRAINER_RED_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Red2),
        .partyHard = ITEM_CUSTOM_MOVES_HARD(sParty_Red2_Hard),
    },


    [TRAINER_EUSINE] =
    {
        .trainerClass = TRAINER_CLASS_MYSTERY_MAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EUSINE,
        .trainerName = _("EUSINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Eusine),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Eusine_Hard),
    },


    [TRAINER_GIOVANNI] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .trainerName = _("GIOVANNI"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Giovanni),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Giovanni_Hard),
    },

    [TRAINER_PROTON_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = _("PROTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt),
        .partyHard = NO_ITEM_DEFAULT_MOVES_HARD(sParty_Grunt_Hard),
    },
    

    [TRAINER_PROTON_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = _("PROTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Proton2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Proton2_Hard),
    },


    [TRAINER_ARCHER] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("ARCHER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Archer_2_Hard),
    },


    [TRAINER_ARCHER_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("ARCHER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_1),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Archer_1_Hard),
    },


    [TRAINER_ARCHER_4] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("ARCHER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Archer_2_Hard),
    },


    [TRAINER_ARCHER_5] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("ARCHER"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Archer_2_Hard),
    },

    [TRAINER_PETREL_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("PETREL"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Petrel_1),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Petrel_1_Hard),
    },

    [TRAINER_PETREL_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("PETREL"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Petrel_2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Petrel_2_Hard),
    },



    [TRAINER_ARIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = _("ARIANA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ariana),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Ariana_Hard),
    },


    [TRAINER_ARIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = _("ARIANA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ariana2),
        .partyHard = NO_ITEM_CUSTOM_MOVES_HARD(sParty_Ariana2_Hard),
    },


    [TRAINER_NORMAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NORMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Norman),
    },


    [TRAINER_ROXANNE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("ROXANNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roxanne),
    },
};

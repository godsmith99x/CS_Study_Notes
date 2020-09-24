//players
const playerWhite = {
    id: 1,
    score: [0],
    redStar: [0, 0, 0, 0, 0, 0],
    blueStar: [0, 0, 0, 0, 0, 0],
    yellowStar: [0, 0, 0, 0, 0, 0],
    greenStar: [0, 0, 0, 0, 0, 0],
    purpleStar: [0, 0, 0, 0, 0, 0],
    orangeStar: [0, 0, 0, 0, 0, 0],
    centerStar: [0, 0, 0, 0, 0, 0],
    tileBuffer: [0, 0, 0, 0],
};
const playerBlack = {
    id: 2,
    score: [0],
    redStar: [0, 0, 0, 0, 0, 0],
    blueStar: [0, 0, 0, 0, 0, 0],
    yellowStar: [0, 0, 0, 0, 0, 0],
    greenStar: [0, 0, 0, 0, 0, 0],
    purpleStar: [0, 0, 0, 0, 0, 0],
    orangeStar: [0, 0, 0, 0, 0, 0],
    centerStar: [0, 0, 0, 0, 0, 0],
    tileBuffer: [0, 0, 0, 0],
};
const playerGray = {
    id: 3,
    score: [0],
    redStar: [0, 0, 0, 0, 0, 0],
    blueStar: [0, 0, 0, 0, 0, 0],
    yellowStar: [0, 0, 0, 0, 0, 0],
    greenStar: [0, 0, 0, 0, 0, 0],
    purpleStar: [0, 0, 0, 0, 0, 0],
    orangeStar: [0, 0, 0, 0, 0, 0],
    centerStar: [0, 0, 0, 0, 0, 0],
    tileBuffer: [0, 0, 0, 0],
};
const playerTan = {
    id: 4,
    score: [0],
    redStar: [0, 0, 0, 0, 0, 0],
    blueStar: [0, 0, 0, 0, 0, 0],
    yellowStar: [0, 0, 0, 0, 0, 0],
    greenStar: [0, 0, 0, 0, 0, 0],
    purpleStar: [0, 0, 0, 0, 0, 0],
    orangeStar: [0, 0, 0, 0, 0, 0],
    centerStar: [0, 0, 0, 0, 0, 0],
    tileBuffer: [0, 0, 0, 0],
};

//board
const twoPlayerGame = {
    players: [0, 0],
    factoryDisplays: [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]],
};

const threePlayerGame = {
    players: [0, 0, 0],
    factoryDisplays: [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]],
};

const fourPlayerGame = {
    players: [0, 0, 0, 0],
    factoryDisplays: [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]],
};

const wildColor = [1, 2, 3, 4, 5, 6];

const tiles = [
    {name: 'Purple',
    id: 1,
    setInBag: [11, 12, 13, 14, 15, 16, 17, 18, 19, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Green',
    id: 2,
    setInBag: [21, 22, 23, 24, 25, 26, 27, 28, 29, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Orange',
    id: 3,
    setInBag: [31, 32, 33, 34, 35, 36, 37, 38, 39, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Yellow',
    id: 4,
    setInBag: [41, 42, 43, 44, 45, 46, 47, 48, 49, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Blue',
    id: 5,
    setInBag: [51, 52, 53, 54, 55, 56, 57, 58, 59, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Red',
    id: 6,
    setInBag: [61, 62, 63, 64, 65, 66, 67, 68, 69, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
];

const centerDraftPool = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
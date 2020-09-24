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
const wildColor = [1, 2, 3, 4, 5, 6];

const tiles = [
    {name: 'Purple',
    id: 1,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Green',
    id: 2,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Orange',
    id: 3,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Yellow',
    id: 4,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Blue',
    id: 5,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
    
    {name: 'Red',
    id: 6,
    setInBag: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    setOnBoard: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], 
    },
];

const centerDraftPool = [];
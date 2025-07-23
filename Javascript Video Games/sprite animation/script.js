let spritePos = 'ko'
const dropdown = document.getElementById('animations')
dropdown.addEventListener('change', function(stateOption){
    spritePos = stateOption.target.value
})



const canvas = document.getElementById('canvas1');
const ctx = canvas.getContext('2d');
console.log(ctx);

const CANVAS_WIDTH = canvas.width = 600;
const CANVAS_HEIGHT = canvas.height = 600;
const sourceWidth = 575
const sourceHeight = 523 

// let frameX = 0
// let frameY = 0
let gameFrame = 0
const staggerFrames = 6

// declaring a contructor class for the dog sprite
const myDoggo = new Image();
myDoggo.src = 'shadow_dog.png';


spriteAnimation = []
spriteStates = [
    {
        name:'idle',
        frames: 7,
    },
    {
        name:'jump', 
        frames: 7,
    },
    {
        name:'fall', 
        frames: 7,
    },
    {
        name:'run', 
        frames: 9,
    },
    {
        name:'dizzy', 
        frames: 11,
    },
    {
        name:'sit', 
        frames: 5,
    },
    {
        name:'roll', 
        frames: 7,
    },
    {
        name:'bite', 
        frames: 7,
    },
    {
        name:'ko', 
        frames: 12,
    },
    {
        name:'gethit', 
        frames: 4,
    }
]

spriteStates.forEach((state, index) => {
    let frames = {
        loc: [],
    }
    for (let j = 0; j < state.frames; j++) {
        let positionX = j * sourceWidth
        let positionY = index * sourceHeight
        frames.loc.push({x: positionX, y: positionY})   
    }
    spriteAnimation[state.name] = frames 
});

console.log(spriteAnimation)

// draw canvas
function animate(){
    // this line basically clears the canvas before running the function again
    ctx.clearRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT)
    
    
    // ctx.fillRect(x, 50, 100, 100)
    // x = (x + 6) % 500

    // ctx.drawImage(image_name, srcx, srcy, srch, srcw, desx, desy, desh, desw)
    let position = Math.floor(gameFrame/staggerFrames) % spriteAnimation[spritePos].loc.length
    let frameX = sourceWidth * position
    let frameY = spriteAnimation[spritePos].loc[position].y

    ctx.drawImage(myDoggo, frameX, frameY, sourceWidth, sourceHeight, 0, 0, sourceWidth, sourceHeight)

    gameFrame++
    requestAnimationFrame(animate)

}

// calling the animate function
animate()

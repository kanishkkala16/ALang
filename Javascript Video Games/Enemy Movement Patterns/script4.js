const canvas = document.getElementById('canvas1')
const ctx = canvas.getContext('2d')

const CANVAS_WIDTH = canvas.width = 700
const CANVAS_HEIGHT = canvas.height = 1000

const numOfEnemies = 25
const enemiesArray = []
let gameFrame = 0

// enemy1 = { x: 0, y: 0, width: 200, height: 200 }


class Enemy{
    constructor(){
        this.enemyImg = new Image()
        this.enemyImg.src = 'enemy4.png'
        this.spriteWidth = 213
        this.spriteHeight = 212
        this.width = this.spriteWidth / 2.5
        this.height = this.spriteHeight / 2.5
        this.x = Math.random() * (CANVAS_WIDTH - this.width)
        this.y = Math.random() * (CANVAS_HEIGHT - this.height)
        this.newX = Math.random() * (CANVAS_WIDTH - this.width)
        this.newY = Math.random() * (CANVAS_HEIGHT - this.height)
        this.speed = (Math.random() * 4) + 2
        this.frame = 0
        this.flapSpeed = Math.floor(Math.random() * 3 + 1)
        this.interval = Math.floor(Math.random() * 200 + 50)
        
    }
    
    update(){
        
        if (gameFrame % this.interval === 0){
            this.newX = Math.random() * (CANVAS_WIDTH - this.width)
            this.newY = Math.random() * (CANVAS_HEIGHT - this.height)
            
        }
        let dx = this.x - this.newX
        let dy = this.y - this.newY

        this.x -= dx/40
        this.y -= dy/40
        // this.x = 0
        // this.y = 0
        // if (this.x + this.width < 0) this.x = canvas.width
        if (gameFrame % this.flapSpeed === 0) this.frame = (this.frame + 1) % 6
        
    }

    draw(){
        // ctx.strokeRect(this.x, this.y, this.width, this.height)
        ctx.drawImage(this.enemyImg, this.frame * this.spriteWidth, 0, this.spriteWidth, this.spriteHeight, this.x, this.y, this.width, this.height)
    }
}

for (let j = 0; j < numOfEnemies; j++) {
    enemiesArray.push(new Enemy())
    
}

console.log(enemiesArray)

// const enemy1 = new Enemy()

function animate(){
    ctx.clearRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT)
    // enemy1.update()
    // enemy1.draw()
    enemiesArray.forEach(enemy => {
        enemy.update()
        enemy.draw()
    });
    gameFrame++
    requestAnimationFrame(animate)
}

animate()
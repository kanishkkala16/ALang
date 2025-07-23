const canvas = document.getElementById('canvas1')
const ctx = canvas.getContext('2d')

const CANVAS_WIDTH = canvas.width = 500
const CANVAS_HEIGHT = canvas.height = 1000

const numOfEnemies = 10
const enemiesArray = []
let gameFrame = 0

// enemy1 = { x: 0, y: 0, width: 200, height: 200 }


class Enemy{
    constructor(){
        this.enemyImg = new Image()
        this.enemyImg.src = 'enemy1.png'
        this.spriteWidth = 293
        this.spriteHeight = 155
        this.width = this.spriteWidth / 2.5
        this.height = this.spriteHeight / 2.5
        this.x = Math.random() * (CANVAS_WIDTH - this.width)
        this.y = Math.random() * (CANVAS_HEIGHT - this.height)
        // this.speed = (Math.random() * 4) - 2
        this.frame = 6
        this.flapSpeed = Math.floor(Math.random() * 4 + 1)
    }

    update(){
        this.x += Math.random() * 3 - 1.5
        this.y += Math.random() * 3 - 1.5
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
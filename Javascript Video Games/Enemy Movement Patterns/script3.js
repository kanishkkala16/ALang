const canvas = document.getElementById('canvas1')
const ctx = canvas.getContext('2d')

const CANVAS_WIDTH = canvas.width = 700
const CANVAS_HEIGHT = canvas.height = 1000

const numOfEnemies = 50
const enemiesArray = []
let gameFrame = 0

// enemy1 = { x: 0, y: 0, width: 200, height: 200 }


class Enemy{
    constructor(){
        this.enemyImg = new Image()
        this.enemyImg.src = 'enemy3.png'
        this.spriteWidth = 218
        this.spriteHeight = 177
        this.width = this.spriteWidth / 2.5
        this.height = this.spriteHeight / 2.5
        this.x = Math.random() * (CANVAS_WIDTH - this.width)
        this.y = Math.random() * (CANVAS_HEIGHT - this.height)
        this.speed = (Math.random() * 4) + 2
        this.frame = 0
        this.flapSpeed = Math.floor(Math.random() * 3 + 1)
        this.angle = 0
        this.angleSpeed = Math.random() * 0.2 + 0.5
        this.curve = Math.random() * 200 + 50
    }

    update(){
        this.x = canvas.width/2 * Math.sin(this.angle * Math.PI/180) + (canvas.width/2 - this.width/2)
        this.y = this.curve * Math.cos(this.angle * Math.PI/50) + (canvas.height/2 - this.height/2)
        this.angle += this.angleSpeed
        if (this.x + this.width < 0) this.x = canvas.width
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
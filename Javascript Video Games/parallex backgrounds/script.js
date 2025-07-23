const canvas = document.getElementById("canvas1");
const ctx = canvas.getContext("2d");

const CANVAS_WIDTH = (canvas.width = 800);
const CANVAS_HEIGHT = (canvas.height = 700);

let gameSpeed = 10;

const bgImg1 = new Image();
bgImg1.src = "layer-1.png";
const bgImg2 = new Image();
bgImg2.src = "layer-2.png";
const bgImg3 = new Image();
bgImg3.src = "layer-3.png";

const bgImg4 = new Image();
bgImg4.src = "layer-4.png";
const bgImg5 = new Image();
bgImg5.src = "layer-5.png";


// thie event listener ensures that the code runs only when the page (if hypothetically hosted online), all the images and the html elements are loaded fully 
window.addEventListener("load", function () {
  const slider = document.getElementById("slider");
  slider.value = gameSpeed;

  // to display the current game speed
  const showGameSpeed = document.getElementById("showGameSpeed");
  showGameSpeed.innerHTML = gameSpeed;
  slider.addEventListener("change", function (e) {
    showGameSpeed.innerHTML = e.target.value;
    gameSpeed = e.target.value;
  });

  // let x = 0
  // let x2 = 2400

  class Layer {
    constructor(image, speedMultiplier) {
      this.x = 0;
      this.y = 0;
      this.width = 2400;
      this.height = 700;
      // this.x2 = this.width
      this.image = image;
      this.speedMultiplier = speedMultiplier;
      this.speed = gameSpeed * speedMultiplier;
    }

    update() {
      this.speed = gameSpeed * this.speedMultiplier;
      if (this.x <= -this.width) {
        this.x = 0;
      }
      // if (this.x2 < -this.width){
      //     this.x2 = this.width + this.x - this.speed
      // }

      this.x = Math.floor(this.x - this.speed);
      // this.x2 = Math.floor(this.x2 - this.speed)
    }

    draw() {
      ctx.drawImage(this.image, this.x, this.y, this.width, this.height);
      ctx.drawImage(
        this.image,
        this.x + this.width,
        this.y,
        this.width,
        this.height
      );
    }
  }

  const layer1 = new Layer(bgImg1, 0.1);
  const layer2 = new Layer(bgImg2, 0.2);
  const layer3 = new Layer(bgImg3, 0.3);
  const layer4 = new Layer(bgImg4, 0);
  const layer5 = new Layer(bgImg5, 0.5);

  gameObjects = [layer1, layer2, layer3, layer4, layer5];

  function animate() {
    ctx.clearRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT);
    // layer4.update()
    // layer4.draw()
    // layer5.update()
    // layer5.draw()

    gameObjects.forEach((objects) => {
      objects.draw();
      objects.update();
    });

    // if (x < -2400) x = 2400 + x2 - gameSpeed
    // else x -= gameSpeed
    // if (x2 < -2400) x2 = 2400 + x - gameSpeed
    // else x2 -= gameSpeed
    requestAnimationFrame(animate);
  }

  animate();
});

const slider = document.getElementById("slider");
slider.value = gameSpeed;

// to display the current game speed
const showGameSpeed = document.getElementById("showGameSpeed");
showGameSpeed.innerHTML = gameSpeed;
slider.addEventListener("change", function (e) {
  showGameSpeed.innerHTML = e.target.value;
  gameSpeed = e.target.value;
});

// let x = 0
// let x2 = 2400

class Layer {
  constructor(image, speedMultiplier) {
    this.x = 0;
    this.y = 0;
    this.width = 2400;
    this.height = 700;
    // this.x2 = this.width
    this.image = image;
    this.speedMultiplier = speedMultiplier;
    this.speed = gameSpeed * speedMultiplier;
  }

  update() {
    this.speed = gameSpeed * this.speedMultiplier;
    if (this.x <= -this.width) {
      this.x = 0;
    }
    // if (this.x2 < -this.width){
    //     this.x2 = this.width + this.x - this.speed
    // }

    this.x = Math.floor(this.x - this.speed);
    // this.x2 = Math.floor(this.x2 - this.speed)
  }

  draw() {
    ctx.drawImage(this.image, this.x, this.y, this.width, this.height);
    ctx.drawImage(
      this.image,
      this.x + this.width,
      this.y,
      this.width,
      this.height
    );
  }
}

const layer1 = new Layer(bgImg1, 0.2);
const layer2 = new Layer(bgImg2, 0.4);
const layer3 = new Layer(bgImg3, 0.6);
const layer4 = new Layer(bgImg4, 0.8);
const layer5 = new Layer(bgImg5, 1);

gameObjects = [layer1, layer2, layer3, layer4, layer5];

function animate() {
  ctx.clearRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT);
  // layer4.update()
  // layer4.draw()
  // layer5.update()
  // layer5.draw()

  gameObjects.forEach((objects) => {
    objects.draw();
    objects.update();
  });

  // if (x < -2400) x = 2400 + x2 - gameSpeed
  // else x -= gameSpeed
  // if (x2 < -2400) x2 = 2400 + x - gameSpeed
  // else x2 -= gameSpeed
  requestAnimationFrame(animate);
}

animate();

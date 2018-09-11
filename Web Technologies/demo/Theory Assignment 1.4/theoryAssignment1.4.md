## 1) Add subtract and distance functions to the *Point class* (see slide #1.4) and write code to test the functionality.
```js
function Point(x,y){ //also acts as a constructor
  this.x = x; //properties
  this.y = y;
  //methods
  this.add = function(p) {  
    return new Point(this.x + p.x, this.y + p.y);
  }
  this.subtract = function(q) {
    return new Point(this.x - q.x, this.y - q.y);
  }
  this.distance = function(p) {
    let d= Math.sqrt( Math.pow(this.x-p.x,2)+Math.pow(this.y-p.y,2) );
    return d;
  }
  //toString gets invoked automatically, it returns the data in a certain format to display
  this.toString = function() {
    return `( ${this.x},${this.y} )`;
  }
}
var p1 = new Point(1,2);
var p2 = new Point(2,1);
var p3 = p1.add(p2);
console.log(`add: ${p3}`); //(3,3)
var p4 = p1.subtract(p2);
console.log(`sub: ${p4}`); //(-1,1)
var p5 = p1.distance(p2);
console.log(`distance: ${p5.toFixed(2)}`); //1.41
```

## 2) Create a *Point3d* class with three properties x, y and z. Create functions add, subtract and distance and test the program.
```js
function Point3d(x,y,z){
  this.x=x;
  this.y=y;
  this.z=z;
  
  this.add = (p) => {
    return new Point3d (this.x + p.x, this.y + p.y, this.z + p.z);
  }
  this.subtract = (p) => {
    return new Point3d (this.x - p.x, this.y - p.y, this.z - p.z);
  }
  this.distance = (p) => {
    let d = Math.sqrt( Math.pow( this.x - p.x,2) + Math.pow(this.y - p.y, 2) + Math.pow(this.z - p.z,2) );
  return d;
  }
  
  this.toString = () => {
    return `( ${this.x}, ${this.y}, ${this.z} )`;
  }
}

var p1 = new Point3d(4,5,6);
var p2 = new Point3d(1,2,3);
var p3 = p1.add(p2);  
console.log(`add: ${p3}`);  //(5,7,9)
var p4 = p1.subtract(p2);
console.log(`sub: ${p4}`);  //(3,3,3)
var p5 = p1.distance(p2);
console.log(`distance: ${p5.toFixed(2)}`);  //5.20
```
## 3) Create a *Square* class with appropriate properties and methods.
```js
function Square(l){
  this.l = l;
  
  this.area = () => {
    return Math.pow(this.l,2);
  }
  
  this.perimeter = ()=> {
    return 4*this.l;
  }

}
var s1 = new Square(6);
console.log(`Area of square: ${s1.area()}`);  //36
console.log(`Perimeter of square: ${s1.perimeter()}`); //24
```
## 4) Create a *Rectangle* class with appropriate properties and methods.
```js
function Rectangle(l,b){
  this.l =l;
  this.b =b;
  
  this.area = () => {
    return this.l*this.b;
  }
  
  this.perimeter=()=>{
    return 2*(this.l+this.b);
  }
}
var R1 = new Rectangle(2,3);
console.log(`Area: ${R1.area()}`); //6
console.log(`Perimeter: ${R1.perimeter()}`); //10
```

## 5) Create a *Circle* class with appropriate properties and methods. 
```js
function Circle(radius) {
    this.r = radius;
  
  this.area = () =>{
    return Math.PI*Math.pow(this.r,2);
  }
  this.perimeter = () => {
    return 2*Math.PI*this.r;
  }
}
var C1 = new Circle(3);
console.log(`Area: ${C1.area().toFixed(2)}`);  //28.27
console.log(`Perimeter: ${C1.perimeter().toFixed(2)}`); //18.85
```

## 6) Create a *Sphere* class with appropriate properties and methods.
```js
function Sphere(radius) {
    this.r = radius;
  
  this.area = () =>{
    return 4*Math.PI*Math.pow(this.r,2);
  }
  this.volume = () => {
    return (4/3)*Math.PI*Math.pow(this.r, 3);
  }
}
var S1 = new Sphere(2);
console.log(`Area: ${S1.area().toFixed(2)}`); //50.27
console.log(`Volume: ${S1.volume().toFixed(2)}`); //33.51
```

## 7) Create a *MarkSheet* class with 5 subjects and methods to calculate *total*, *percentage* and *division*. Use appropriate rules.
```js
function Marksheet(WT,EC,RTS,CD,SE){
  this.m1=WT;
  this.m2=EC;
  this.m3=RTS;
  this.m4=CD;
  this.m5=SE; 
  
  this.total=()=>{
    return this.m1+this.m2+this.m3+this.m4+this.m5;
  }
  this.percentage=()=>{
    let totalM = this.total();
    return (totalM/5).toFixed(2);
  }
  this.division=()=>{
    let percent = this.percentage();
    if(percent >= 80)
        return "distinction";
    else if(percent >= 70 && percent < 80)
        return "first";
    else
        return "second";
  }
}
var Student1 = new Marksheet(80,70,70,60,80);
console.log(`total: ${Student1.total()} percentage: ${Student1.percentage()} division: ${Student1.division()}`);
//output
/* total: 360 percentage: 72.00 division: first*/
```

## 8) Create notes on *Date*, *Math* and *RegExp* (regular expressions). Include short descriptions and examples of important properties and methods.
### 1. Date  
JavaScript will use the browser's time zone and display a date as a full text string.
Date objects are created with the `new Date()` constructor.  
There are 4 ways to create a new date object:

```js
new Date()  //displays current date;
new Date(year, month, day, hours, minutes, seconds, milliseconds)
new Date(milliseconds)
new Date(date string)
``` 
### 2. Math  
The JavaScript Math object allows you to perform mathematical tasks on numbers.  
* **Math.round()**  
Math.round(x) returns the value of x rounded to its nearest integer:  
* **Math.pow()**  
Math.pow(x, y) returns the value of x to the power of y:  
* **Math.sqrt()**  
Math.sqrt(x) returns the square root of x:  
* **Math.abs()**  
Math.abs(x) returns the absolute (positive) value of x:  
* **Math.ceil()**  
Math.ceil(x) returns the value of x rounded up to its nearest integer:  
* **Math.floor()**  
Math.floor(x) returns the value of x rounded down to its nearest integer:  
* **Math.min() and Math.max()**  
Math.min() and Math.max() can be used to find the lowest or highest value in a list of arguments:  
* **Math.random()**  
Math.random() returns a random number between 0 (inclusive),  and 1 (exclusive):  
* **Math Properties (Constants)**  
JavaScript provides 8 mathematical constants that can be accessed with the Math object.  
examples:

```js

Math.round(4.7);    // returns 5
Math.pow(8, 2);      // returns 64
Math.sqrt(64);      // returns 8
Math.abs(-4.7);     // returns 4.7
Math.ceil(4.4);     // returns 5
Math.floor(4.7);    // returns 4
Math.min(0, 150, 30, 20, -8, -200);  // returns -200
Math.random();     // returns a random number

//Math Constants
Math.E        // returns Euler's number
Math.PI       // returns PI
Math.SQRT2    // returns the square root of 2
Math.SQRT1_2  // returns the square root of 1/2
Math.LN2      // returns the natural logarithm of 2
Math.LN10     // returns the natural logarithm of 10
Math.LOG2E    // returns base 2 logarithm of E
Math.LOG10E   // returns base 10 logarithm of E
```
### 3. RegExp  
A regular expression is a sequence of characters that forms a search pattern.  
Syntax:  
`/pattern/modifiers;`  
eg:  
```js
var patt = /w3schools/i;
```
* **Modifiers**  
**i** -	Perform case-insensitive matching  
**g** -	Perform a global match (find all matches rather than stopping after the first match)  
**m** -	Perform multiline matching  

* Regular expressions are often used with the two string methods: `search()` and `replace()`.  
The **search() method** uses an expression to search for a match, and returns the position of the match.  
The **replace() method** returns a modified string where the pattern is replaced. i  is a modifier (modifies the search to be case-insensitive).  
eg:  
```js
var str = "Hello World"; 
var n = str.search(/world/i); //returns 6
var txt = str.replace("Hello","World"); //returns World World
```
* **Patterns**  
1. **Brackets** are used to find a range of characters:  
**[abc]** -	Find any of the characters between the brackets  
**[0-9]**	- Find any of the digits between the brackets  
**(x|y)** -	Find any of the alternatives separated with |  
2. **Metacharacters** are characters with a special meaning:  
**\d**	- Find a digit  
**\s** -	Find a whitespace character  
**\b** -	Find a match at the beginning or at the end of a word  
**\uxxxx** -	Find the Unicode character specified by the hexadecimal number xxxx  
3. **Quantifiers** define quantities:  
**n+** -	Matches any string that contains at least one n  
<b>n*</b> -	Matches any string that contains zero or more occurrences of n  
**n?** -	Matches any string that contains zero or one occurrences of n

## 9) Write notes on events (mentioned in "common events" section), error handling (try-catch-finally), and cookies. Include suitable code examples.
### 1. Events
 * An HTML event can be something the browser does, or something a user does.  
**onchange**	- An HTML element has been changed  
**onclick** -	The user clicks an HTML element  
**onmouseover**	- The user moves the mouse over an HTML element  
**onmouseout**	- The user moves the mouse away from an HTML element  
**onkeydown** -	The user pushes a keyboard key  
**onload** -	The browser has finished loading the page  
eg:  
```html
<button onclick="displayDate()">The time is?</button>
```
### 2. Error handling(try-catch-finally)  
* The **try** statement allows you to define a block of code to be tested for errors while it is being executed.  
The **catch** statement allows you to define a block of code to be executed, if an error occurs in the try block. 
The throw statement lets you create custom errors.  
The finally statement lets you execute code, after try and catch, regardless of the result.  
The JavaScript statements try and catch come in pairs:  
Syntax:
```js
try {
    //Block of code to try
}
catch(err) {
    //Block of code to handle errors
} 
finally {
    //Block of code to be executed regardless of the try / catch result
}
```
eg: 
```js
try {
      throw new Error('oops');
    }
    catch (ex) {
      console.error('inner', ex.message);
    }
    finally { 
      console.log('finally');
      
    }
```
### 3. Cookies  
* Cookies are data, stored in small text files, on your computer.  
When a web server has sent a web page to a browser, the connection is shut down, and the server forgets everything about the user.  
Cookies were invented to solve the problem "how to remember information about the user".  
**Create a Cookie with JavaScript**  
JavaScript can create, read, and delete cookies with the document.cookie property.  
eg:
```js
document.cookie = "username=John Cena";
```

## 10) Make a simple website that takes information about a user. Use client-side script to validate user input. [Model Question]

## 11) Use client-side script to validate the user input during login process. [2071]
* HTML
```html
<div id="master">
<form>
  <div>
 <label>Name
  <input type="text" id="nameTextBox" value="">
   </label>
  <span id="nameError"></span>
  </div>
   <div> 
  <label>Password
  <input type="password" id="pwTextBox" value="">
  </label>
  <span id="passwordError"></span>
  </div>
  <button id="btn">Login</button>
  <span id="loginResult"></span> 
  </form>
</div>
```
* CSS
```css
* {
  margin:0;
  font-family:monospace;
}
#master {
  background:black;
  color:white;
  padding:5px;
  margin:5px;
}
#master div {
  margin-bottom:15px;
}
```
* JS
```js
let btn = document.querySelector('#btn');
btn.onclick = function validation(e) {
e.preventDefault();
  //selecting elements
let name= document.querySelector('#nameTextBox').value;
let pw = document.querySelector('#pwTextBox').value;
//selecting spans to display errors or result
let nameError = document.getElementById('nameError');
let passwordError = document.querySelector('#passwordError');
let loginResult = document.getElementById('loginResult');

 if(name!=="admin")
    nameError.innerHTML = `invalid username`;
 if(pw !=="admin")
    passwordError.innerHTML = `invalid password`;

  if(name ==="admin" && pw === "admin"){
    loginResult.innerHTML = "login successful";
    console.log('success');
  }
  else{
     loginResult.innerHTML = "login failed";
    console.log('fail');
  }
     
}
```
## 12) Use client side script to validate the user input during registration. [2071]
```html
  <!DOCTYPE html>
<html>
<head>
    <title>
        Registration Form
    </title>
    <link rel="stylesheet" type="text/css" media="screen" href="style.css" />
</head>
<body>
    <div id="master">
        <form>
            <div>
                <label>Name
                    <input type="text" id="nameTextBox" value="">
                </label>
                <span id="nameError" class="error" value="hello"></span>
            </div>
            <div>
                <label>Email
                    <input type="text" id="emailTextBox" value="">
                </label>
                <span id="emailError" class="error"></span>
            </div>
            <div>
                <label>New Password
                    <input type="password" id="pwTextBox" value="">
                </label>
                <span id="passwordError" class="error"></span>
                </span>
            </div>
            <div>
                Gender:
                <label>male
                    <input type="radio" name="gender" id="male">
                </label>
                <label>female
                    <input type="radio" name="gender" id="female">
                </label>
            </div>
            <button id="btn">Register</button>
            <span id="registerResult"></span>
        </form>
    </div>
    <script src="script.js"></script>
</body>
</html>
```
```css
* {
    margin:0;
    font-family:monospace;
}

#master {
    padding:5px;
    margin:5px;
}
#master div {
    margin-bottom:15px;
}
.error {
    color:red;
}
.success {
    color:green;
}
#btn {
    cursor:pointer;
}
```
```js
let btn = document.querySelector('#btn');
btn.onclick = function validation(e) {
    e.preventDefault(); //to prevent refreshing page
    //selecting elements
    console.log('clicked');
    let name = document.querySelector('#nameTextBox').value;
    console.log(name);
    console.log(isNaN(name));
    let email = document.querySelector('#emailTextBox').value;
    let password = document.querySelector('#pwTextBox').value;
    let maleRadio = document.querySelector('#male');
    let femaileRadio = document.querySelector('#female');

    //selecting spans to display errors or result
    let nameError = document.querySelector('#nameError');
    console.log(nameError.value);
    let emailError = document.querySelector('#emailError');
    let passwordError = document.querySelector('#passwordError');
    let registerResult = document.getElementById('registerResult');
    
    //error Alert
    //name error
    if (/[0-9]+|[a-z]*[0-9]+/i.test(name) ) {
        nameError.innerHTML = "invalid username";
        console.log('invalid');
    }
    else if(name==="")
        nameError.innerHTML = "name cannot be empty";
    else
        nameError.textContent = ""; //to clear the error msg after being displayed
        
    //email error
    if(email==="")
        emailError.innerHTML = "email cannot be empty";
    else
        emailError.innerHTML = ""; //to clear error msg
    //password
    if(password==="")
        passwordError.innerHTML = "password cannot be empty";
    else
        passwordError.innerHTML = "";    //to clear error msg
    
    //radio
    
    //register
    if(nameError.textContent==="" && emailError.textContent==="" && passwordError.textContent==="")
    {
        registerResult.classList.add("success");
        registerResult.innerHTML = "registration successful";
    }else{
        registerResult.classList.add("error");
        registerResult.innerHTML = "register failed";
    }
        
}
}
```


## 13) What are two traditional ways of assigning event handlers in DOM? Explain. [2073]
* Event handling has been part of JavaScript since the language's inception. The DOM of modern web browsers such as IE5+, NS6+, and Firefox provide expanded methods and flexibility (relative to older browsers) for capturing events.  
The two traditional way of assigning event handling are described below:  
1. Via HTML  
Using attributes, we can define an event handler directly inside the relevant HTML tag, by embedding it as a attribute. A piece of JavaScript is also included to tell the browser to perform something when the event occurs.  
Example:
2. Via scripting  
You can also assign and set up event handlers to elements using scripting, and inside your script . This allows for the event handlers to be dynamically set up, without having to mess around with the HTML codes on the page. When setting up event handlers for an element directly inside your script, the code to execute for the events must be defined inside a function.  

## 14) Explain about the process of changing an HTML element with the help of DOM. [2073]
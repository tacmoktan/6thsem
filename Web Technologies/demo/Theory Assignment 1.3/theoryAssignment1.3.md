## 1)  What do you know about *image sprites* ? Explain with suitable examples.
* An image sprite is a collection of images put into a single image. A web page with many images can take a long time to load and generates multiple server requests. Using image sprites will reduce the number of server requests and save bandwidth.  
Example:  
Instead of using three separate images, we use this single image ("img_navsprites.gif"):
```css
#home {
    width: 46px;
    height: 44px;
    background: url(img_navsprites.gif) 0 0;
}

#prev {
    left: 63px;
    width: 43px;
    background: url('img_navsprites.gif') -47px 0;
}

#next {
    left: 129px;
    width: 43px;
    background: url('img_navsprites.gif') -91px 0;
}
```


## 2)  What do you know about *attribute selectors*? Explain with suitable examples.
* The [attribute] selector is used to select elements with a specified attribute.  

1. `[attribute] Selector` 
eg:  
selects all `<a>` elements with a target attribute: 
```css
a[target] {
    background-color: yellow;
}
```
2. `[attribute = "value"] Selector`  
* select elements with a specified attribute and value.  
eg:  
selects all `<a>` elements with a `target="_blank"` attribute:
```css
a[target="_blank"] { 
    background-color: yellow;
}
```

3. `[attribute~="value"] selector`  
* select elements with an attribute value containing a specified word.  
eg:  
selects all elements with a title attribute containing value `"flower"`.  
```css
[title~="flower"] {
    border: 5px solid yellow;
}
```
**Note:** It will match elements with `title="flower"`, `title="summer flower"`, and `title="flower new"`, but not `title="my-flower"` or `title="flowers"`.

4. `[attribute|="value"] selector`
* select elements with the specified attribute starting with the specified value.  
eg:  
selects all elements with a class attribute value that begins with `"top"`.
```css
[class|="top"] {
    background: yellow;
}
```
**Note:** The value has to be a whole word, either alone, like `class="top"`, or followed by a hyphen( - ), like `class="top-text"`, `class="top-header"`!  

5. `[attribute^="value"] selector`
* select elements whose attribute value begins with a specified value.  
eg:  
selects all elements with a class attribute value that begins with `"top"`.  
```css
[class^="top"] {
    background: yellow;
}
```
**Note:** The value does not have to be a whole word!  

6. `[attribute$="value"] Selector`
* select elements whose attribute value ends with a specified value.  
eg:  
selects all elements with a class attribute value that ends with `"test"`.  
```css
[class$="test"] {
    background: yellow;
}
```
7. `[attribute*="value"] selector`
* select elements whose attribute value contains a specified value.  
eg:  
selects all elements with a class attribute value that contains `"te"`.  
```css
[class*="te"] {
    background: yellow;
}
```
## 3) How can you style forms with CSS? Explain with suitable examples.
* We can style forms with CSS using following techniques:
1. **Styling input fields**  
 `width` property to determine the width of the inputfield.
 eg:  
 ```css 
  input {
    width: 100%;
}
```
To style a specific input type, we use attribute selectors.
* `input[type=text]` - will only select text fields
* `input[type=password]` - will only select password fields
* `input[type=number]` - will only select number fields

2. **Padding inputs**  
`padding` property to add space inside the text field.  
eg:  
```css
input[type=text] {
    width: 100%;
    padding: 12px 20px;
    margin: 8px 0;
    box-sizing: border-box;
}
```
3. **Bordered inputs**  
* `border` property to change the border size and color, and `border-radius` property to add rounded corners.  
eg:  
```css
input[type=text] {
    border: 2px solid red;
    border-radius: 4px;
} 
``` 
* `border-left` property to border left side of the inputfield.  
eg:
```css  
input[type=text] {
    border: none;
    border-left: 2px solid red;
}
```


4. **Colored inputs**  
* `background-color` property to add a background color to the input and `color` property to change the text color.  
eg:  
```css
input[type=text] {
    background-color: #3CBC8D;
    color: white;
}
```  

5. **Focused inputs**  
* By default, some browsers will add a blue outline around the input when it gets focus (clicked on). You can remove this behavior by adding outline: none; to the input. 
* `:focus` selector to do something with the input field when it gets focus.  
eg: 
```css
input[type=text]:focus {
    background-color: lightblue; /*changes the background of the input text-field when clicked*/
}
```
6. **Icon/image inputs**  
* `background-image` property to add icon inside the input and `background-position` property to position it. Also notice that we add a large left padding to reserve the space of the icon.  
eg:  
```css
input[type=text] {
    background-color: white;
    background-image: url('searchicon.png');
    background-position: 10px 10px; 
    background-repeat: no-repeat;
    padding-left: 40px;
}
```

7. **Animated search inputs**
* `transition` property to animate the width of the search input when it gets focus.  
eg: 
```css 
input[type=text] {
    -webkit-transition: width 0.4s ease-in-out;
    transition: width 0.4s ease-in-out;
}

input[type=text]:focus {
    width: 100%;
}
```
8. **styling Textareas**  
* `resize` property to prevent textareas from being resized (disable the "grabber" in the bottom right corner).  
eg:  
```css
textarea {
    width: 100%;
    height: 150px;
    padding: 12px 20px;
    box-sizing: border-box;
    border: 2px solid #ccc;
    border-radius: 4px;
    background-color: #f8f8f8;
    resize: none;
}
```
9. **styling Select menus**  
eg:  
```css
select {
    width: 100%;
    padding: 16px 20px;
    border: none;
    border-radius: 4px;
    background-color: #f1f1f1;
}
```

10. **styling input buttons**  
eg:  
```css
input[type=button], input[type=submit], input[type=reset] {
    background-color: #4CAF50;
    border: none;
    color: white;
    padding: 16px 32px;
    text-decoration: none;
    margin: 4px 2px;
    cursor: pointer;
}

/* Tip: use width: 100% for full-width buttons */
```

11. **Responsive Design**
*  `media` queries to create a responsive form.
```css
/* Responsive layout - when the screen is less than 600px wide, make the two columns stack on top of each other instead of next to each other */
@media screen and (max-width: 600px) {
    .col-25, .col-75, input[type=submit] {
        width: 100%;
        margin-top: 0;
    }
}
```
## 4) Discuss different ways of inserting style sheets in HTML documents.  
* 3 ways of inserting style sheets in HTML documents:
1. External style sheet  
* With an external style sheet, you can change the look of an entire website by changing just one file.
* Each page must include a reference to the external style sheet file inside the <link> element. The <link> element goes inside the <head> section.  
eg:  
```html
<head>
<link rel="stylesheet" type="text/css" href="mystyle.css">
</head>
``` 
* The file should not contain any html tags. The style sheet file must be saved with a .css extension.  
eg:  
```css
/*style.css*/
body {
    background-color: lightblue;
}

h1 {
    color: navy;
    margin-left: 20px;
}
```
2. Internal style sheet  
* An internal style sheet may be used if one single page has a unique style.
* Internal styles are defined within the `<style>` element, inside the `<head>` section of an HTML page.  
eg:  
```html
<head>
<style>
body {
    background-color: linen;
}

h1 {
    color: maroon;
    margin-left: 40px;
} 
</style>
</head>
```
3. Inline style sheet
* An inline style may be used to apply a unique style for a single element.
* To use inline styles, add the style attribute to the relevant element. The style attribute can contain any CSS property.  
eg: 
```html
<h1 style="color:blue;margin-left:30px;">This is a heading</h1>
``` 
## 5) What do you know about *universal selector*? Explain with suitable examples.
* The * selector (universal selector) selects all elements.  
eg: 
```css
* { 
    background-color: yellow;
}
```
* The * selector can also select all elements inside another element.  
eg:  
```css
div * { 
    background-color: yellow;
}
```
Syntax:
```css
* {
    /*  css declarations; */
 }
```    


## 6) What do you know about *inherit* keyword and *inherited properties* in CSS? Explain with suitable examples.
* The inherit keyword specifies that a property should inherit its value from its parent element. The inherit keyword can be used for any CSS property, and on any HTML element. Such property can be reffered to inherited properties.  
Syntax:
```css
{
    property: inherit;
}
```  
eg:  
Set the text-color for <span> elements to blue, except those inside elements with class="extra":  
```css
span {
    color: blue;
}
.extra span {  /*span tag inherits color from parent element(class="extra") */
    color: inherit;
}
```  

## 7) Discuss about absolute and relative units/lengths in CSS.
* Many CSS properties take "length" values, such as width, margin, padding, font-size, border-width, etc.
* Length is a number followed by a length unit, such as 10px, 2em, etc.
* A whitespace cannot appear between the number and the unit. However, if the value is 0, the unit can be omitted.
* For some CSS properties, negative lengths are allowed.
* Types: absolute and relative.  
1. **Absolute units/lengths**  
* are fixed and a length expressed in any of these will appear as exactly that size
* are not recommended for use on screen, because screen sizes vary so much. However, they can be used if the output medium is known, such as for print layout.  
eg:  
* `cm`(centimeters)
* `mm`(millimeters)
* `in`( inches (1in = 96px = 2.54cm) )
* `px*`( pixels (1px = 1/96th of 1in) )
* `pt`( points(1pt = 1/72 of 1in) ),
* `pc`( picas (1pc = 12 pt) )  
2. **Relative Lengths**  
* specifies a length relative to another length property. Relative length units scales better between different rendering mediums.  
eg:  
* `em` -	Relative to the font-size of the element (2em means 2 times the size of the current font)	
* `ex` -	Relative to the x-height of the current font (rarely used)	
* `ch` -	Relative to width of the "0" (zero)	
* `rem` -	Relative to font-size of the root element	
* `vw` -	Relative to 1% of the width of the viewport*	
* `vh` -	Relative to 1% of the height of the viewport*	
* `vmin`-	Relative to 1% of viewport's* smaller dimension	
* `vmax`-	Relative to 1% of viewport's* larger dimension	
* `%`   -   Relative to the parent element



## 8) Explain with example the basic concept of cascading and inheritance in CSS. [2073]
### 1. Cascading in CSS
* CSS is an acronym for Cascading Style Sheets, which indicates that the notion of the cascade is important. At its most basic level, it indicates that the order of CSS rules matter, but it's more complex than that. What selectors win out in the cascade depends on three factors (these are listed in order of weight — earlier ones will overrule later ones):  
1. **Importance**  
In CSS, there is a special piece of syntax to make sure that a certain declaration will *always* win over all others: `!important`.  
**Note:** Never use `!important` unless you absolutely have to. It makes debugging CSS problems more complex.  
eg:
```html
<p class="better">This is a paragraph.</p>
<p class="better" id="winning">One selector to rule them all!</p>
```
```css
#winning { /*the 2nd p tag will get styled with this id */
  background-color: red;
  border: 1px solid black;
}
.better {
  background-color: gray;
  border: none !important; /*the 2nd p tag won't be styled due to less importance*/
}
p {
  background-color: blue;
  color: white;
  padding: 5px;
}
```  
2. **Specificity**  
It is basically a measure of how specific a selector is — how many elements it could match. As in the eg above, `element` selectors have *low* specificity. `Class` selectors have a *higher* specificity, so will win against element selectors. `ID` selectors have an even *higher* specificity, so will win against class selectors. The only way to win against an ID selector is to use `!important`.  
The amount of specificity a selector has is measured using four different values (or components), which can be thought of as thousands, hundreds, tens and ones — four single digits in four columns:  
* **Thousands:** Score one in this column if the declaration is inside a `style` attribute (such declarations don't have selectors, so their specificity is always simply 1000.) Otherwise 0.
* **Hundreds:** Score one in this column for each `ID selector` contained inside the overall selector.
* **Tens:** Score one in this column for each `class selector`, `attribute selector`, or `pseudo-class` contained inside the overall selector.
* **Ones:** Score one in this column for each `element selector` or `pseudo-element` contained inside the overall selector.  
**Note:** If multiple selectors have the same importance and specificity, which selector wins is decided by which comes later in the `Source order`.  
eg:  
```html
<div id="outer" class="container">
  <div id="inner" class="container">
    <ul>
      <li class="nav"><a href="#">One</a></li>
      <li class="nav"><a href="#">Two</a></li>
    </ul>
  </div>
</div>
```
```css
/*specificity 0101 */
#outer a{
    background:black;
}

/*specificity 0201 */
#outer #inner a{
    background:orange; /*this will win over first style*/
}

/*specificity 0211*/
#outer #inner .nav a{
    background:purple; /*this will win over second style*/
}
```
3. **Source order**  
If multiple selectors have the same importance and specificity, the third factor that helps to decide which rule wins is source order — later rules will win over earlier rules.  
eg:  
```css
p {
  color: blue;
}

p {
  color: red; /* This rule will win over the first one */
}
```
```css
.footnote { /* This rule will win over the second one due to specificity */
}
    color:blue;
}
p {
    color:red;
}
```
### 2. Inheritance
* Inheritance refers to the idea that some property values applied to an element will be inherited by that element's children, and some won't.  
#### Controlling inheritance  
CSS provides four special universal property values for specifying inheritance:  
1. `inherit`  
Sets the property value applied to a selected element to be the same as that of its parent element.  
2. `initial`  
Sets the property value applied to a selected element to be the same as the value set for that element in the browser's default style sheet. If no value is set by the browser's default style sheet and the property is naturally inherited, then the property value is set to inherit instead.  
3. `unset`  
Resets the property to its natural value, which means that if the property is naturally inherited it acts like inherit, otherwise it acts like initial.  
4. `revert`  
Reverts the property to the value it would have had if the current origin had not applied any styles to it. In other words, the property's value is set to the user stylesheet's value for the property (if one is set), otherwise, the property's value is taken from the user agent's default stylesheet.  
**Note:** `initial` and `unset` are not supported in Internet Explorer.  
eg:  
```html
<ul>
  <li>Default <a href="#">link</a> color</li>
  <li class="my-class-1">Inherit the <a href="#">link</a> color</li>
  <li class="my-class-2">Reset the <a href="#">link</a> color</li>
  <li class="my-class-3">Unset the <a href="#">link</a> color</li>
</ul>
```
```css
body {
  color: green;
}

.my-class-1 a {
  color: inherit;
}

.my-class-2 a {
  color: initial;
}

.my-class-3 a {
  color: unset;
}
```
## 9) Discuss about normal flow box layout in CSS and also discuss about positioning in CSS. [2073]
### Normal flow box layout
* The box model, as defined by the W3C "describes the rectangular boxes that are generated for elements in the document tree and laid out according to the visual formatting model". Don't be confused by the term "boxes". They need not appear as square boxes on the page. The term simply refers to discreet containers for content. In fact, every element in a document is considered to be a rectangular box.  
1. **Padding, Borders, Margins**  
Padding immediately surrounds the content, between content and borders. A margin is the space outside of the borders. If there are no borders both paddng and margin behave in roughly the same way, except that you can have negative margins, while you cannot have negative padding. Also padding does not collapse like margins.
    
2. **Margin Collapse**  
Vertical margins collapse when they meet. Though it may seem like a strange thing, if assigned top and bottom margins to the P element of, say, 10px each, you will not have 20px of margin between paragraphs, but rather 10px. This is considered to be desirable and expected behavior, and not a bug. Now consider the following declaration.
```css
p {
    margin: 10px 0 16px;
}
```
3. **Display Property**  
This is one of the most useful properties.
* **block**  
Block display provides behavior similar to a default DIV element. A line break occurs at the close of the tag. Elements that are block by default are DIV, P, BLOCKQUOTE, H1 through H6, UL, OL, LI, ADDRESS, etc. Block elements accept width, height, top and bottom margins, and top and bottom padding. A block element constitutes a separate block box.
* **inline**  
Inline display creates no such line break. Elements that are inline by default are SPAN, IMG, INPUT, SELECT, EM, STRONG, etc. Inline elements do not accept width, height, top and bottom padding, and top and bottom margins, which makes good sense, since they are used for part of a line of text (i.e. of a block box).

* **none**  
Display set to none sets the element to invisible similar to the hidden value of the visibility property (see below). However, unlike the visibility property, this value takes up no space on the page. This is very useful for DHTML hidden tools and for other instances when you need items to expand and collapse based on whether they contain content to be viewed on demand. Moreover, when you generate content, items whose display is set to none will not be included in the loop.  
Display set to none will also be hidden from most screen readers. If you are trying to make something readable only for those with sight disabilities, use an off-screen class like this:
```css
.offScreen {position: absolute; left: -10000px; top: auto; width: 1px; height: 1px; overflow: hidden;}
```
* **inline-block**  
This value causes the element to generate a block element box that will be flowed with surrounding content as if it were a single inline box. It lets you place a block inline with the content of its parent element. It also allows you to assign properties associated with block display, such as width and height to an element that naturally takes inline display. This property is also used to trigger hasLayout in IE6, which is a difficult concept, but briefly means making IE6 assume CSS certain properties.
* **run-in**  
This display mode causes the element to appear as an inline element at the start of the block immediately following it. If there is no block following a run-in element, it is displayed as a normal block instead. Currently, there seems to be no browser support for this value except for IE8, but here is an example of how it is coded, and how it should look.
* **list-item**  
Unordered lists are traditionally used to list bulleted items vertically. But you can assign bullets to other elements using the list-item value.
```css
div {display: list-item;}
```  
### Positioning
* The CSS positioning properties allow you to position an element. It can also place an element behind another, and specify what should happen when an element's content is too big.Elements can be positioned using the top, bottom, left, and right properties. However, these properties will not work unless the position property is set first. They also work differently depending on the positioning method.There are four different positioning methods.  
1. **Static Positioning**  
HTML elements are positioned static by default. A static positioned element is always positioned according to the normal flow of the page.Static positioned elements are not affected by the top, bottom, left, and right properties.  

2. **Fixed Positioning**  
An element with fixed position is positioned relative to the browser window.It will not move even if the window is scrolled.  

3. **Relative Positioning**  
A relative positioned element is positioned relative to its normal position.  
Example: 
```css
h2.pos_left{
    position:relativ e; left:-20px;
}

h2.pos_right{
    position:relative;
    left:20px;
}
```
The content of a relatively positioned elements can be moved and overlap other elements, but the reserved space for the element is still preserved in the normal flow.  

4. **Absolute Positioning**  
An absolute position element is positioned relative to the first parent element that has a position other than static. If no such element is found, the containing block is `<html>`:  
Eg:
```css
h2{
    position:absolute;
    left:100px;
    top:150px;
}
``` 
Absolutely positioned elements are removed from the normal flow. The document and other elements behave like the absolutely positioned element does not exist.Absolutely positioned elements can overlap other elements.
#### Overlapping Elements
When elements are positioned outside the normal flow, they can overlap other elements.The z-index property specifies the stack order of an element (which element should be placed in front of, or behind, the others).An element can have a positive or negative stack order:  
eg:
```css
img{
    position:absolute;
    left:0px;
    top:0px;
    z-index:-1;
}
```     
## 1. List the important attributes for the following tags with suitable examples:
### a. `<a> </a>`
Attributes:
1. href
2. target(values: _blank,_parent,_self,_top,framename)

e.g.
```
<a href="www.fb.com" target="_blank"> </a>
```

### b. `<img/>`
Attributes:
1. src
2. alt
3. height
4. width
    
e.g.
```
<img src="cat.jpg" alt="cat" width="250px" height="250px">
```

### c. `<form>`
Attributes:   
1. **action**  
Specifies where to send the form data after being submitted.

2. **method**  
Specifies how to send the form data(either with GET or POST HTTP request).  

e.g.   
```
<form action="backend/something.php" method="GET">
```
## 2. What are the attributes of list tag? Explain. [2068]
The attributes for list tag are:

1. **type**  
Specifies which kind of bullet point will be used. Not supported in HTML5.  
e.g.  
```
<ol> 
    <li>Shakti</li> 
    <li type="a">Maan</li> 
</ol>
```
Output:
<ol> 
<li>Shakti</li> 
<li type="a">Maan</li> 
</ol>

2. **value**  
Specifies the value of a list item. The following list items will increment from that number( only for `<ol>` lists).  
e.g. 
```
<ol>
    <li value="100">Shankar</li>
    <li>Narapichas</li>
</ol>
```  
Output:  
<ol>
<li value="100">Shankar</li>
<li>Narapichas</li>
</ol>
    
`<li>` tag also supports following attributes:  
* **Global attributes:**  
These HTML attributes give elements meaning and context.  
e.g. class, id, style, etc.  

* **Event Attributes:**  
HTML4 added the ability to let events trigger actions in a browser, like starting a JavaScript when a user clicks on an element.  
e.g. onclick, onkeyup, etc.

## 3. What are the tags and attributes for a table in HTML document? [2068]
The tags for a table in HTML document:  
1. `<table>`  
This tag defines table.  
2. `<tr>`  
This tag divides a table into rows.  
3. `<td>`  
A row is divided into data cells with this tag.  
4. `<th>`  
A row can be divided into headings with this tag.  
e.g. 
``` 
<table>
<tr>
    <th> FirstName </th>
    <th> LastName </th>
</tr>
<tr>
    <td>Shankar</td>
    <td>Lamchaane</td>
<tr>
</table>
```  
Output:  
<table>
<tr>
<th> FirstName </th>
<th> LastName </th>
</tr>
<tr>
<td>Shankar</td>
<td>Lamchaane</td>
<tr>
</table>  

The attributes for a table in HTML document:  
**align:**  
(value: left, center, right) Specifies the alignment of a table according to surrounding text.  

**bgcolor:**  
(value: rgb(x,x,x), #xxxxxx, colorname) Specifies the background color for a table.  

**border:**  
(value: 1, 0) Specifies whether or not the table is being used for layout purposes.  

**cellpadding:**  
(value: pixels ) Specifies the space between the cell wall and the cell content.  

**cellspacing:**  
(value: pixels ) Specifies the space between cells.  

**frame:**  
(value: void, above, below, border) Specifies which parts of the outside borders that should be visible.  

**rules:**  
(value: none, groups, rows, cols, all ) Specifies which parts of the inside borders that should be visible.  

**summary**:  
(value: text) Specifies a summary of the content of a table.  

**width:**  
(value: pixels, %) Specifies the width of a table.  

Note:- All of these attributes are not supported in HTML5.  

Other attributes are the Global Attributes and Event Attributes.

## 4. What are the color attributes in HTML? Explain. [2069]
The `<body>` tag has following attribute:  

1. **bgcolor**  
It sets a color for the background of the page.  
eg: `<body bgcolor = "green">...</body>`

2. **text**  
It sets a color for the body text.  
eg: `<body text = "blue" bgcolor = "green">...</body>`

3. **alink**  
It sets a color for active links or selected links.  
eg: `<body alink = "blue">...</body>`

4. **link**  
It sets a color for linked text.  
eg: `<body link = "blue" >...</body>`

5. **vlink**  
It sets a color for visited links − that is, for linked text that you have already clicked on.  
eg: `<body vlink = "blue" >...</body>`

## 5. Write HTML code to display a login form. [2071]
```
<form>
    <h3>Login</h3>
    <label for =”username”>Username</label>
    <input type=”text” id = “username” >
    
    <label for =”password”>Password</label>
    <input type=”password” id =”password”>
    
    <input type=”submit” value=”login”>
</form>
```  

## 6. Write HTML code to display a registration form.
```
<form>
    <h3> Registration </h3>
    <label for=”firstname”>Firstname</label>
    <input type=”text” id=”firstname”>
    
    <label for=”lastname”>Lastname</label>
    <input type=”text” id = “lastname”>

    <label for=”email”>Email</label>
    <input type=”text” id=”email”>
    
    <label for=”newpassword”>New Password</label>
    <input type=”password” id = “newpassword”>
    
    <label for=”male”>Male</label>
    <input type=”radio” id=”male”>
    
    <label for=”female”>Female</label>
    <input type=”radio” id=”female”>
    
    <input type=”submit” value=”Sign Up”>
</form>
```
## 7. Write an HTML code to display the following. [2071]
```
<!--styling within head-->
<style>
table,td {
    padding:10px;
    margin:0px auto;
    border:1px solid black;
    border-collapse:collapse;
    text-align:center;
    width:200px;
}
</style>

<!--styling within head-->
<table >
    <tr><td><b><u>Example</u></b></td></tr>
    <tr><td>(a+b)<sup>2</sup> = a<sup>2</sup>+2ab+b<sup>2</sup></td></tr>
    <tr><td>Thank You</td></tr>
</table>


```
<!--styling within head-->
<style>
table,td {
padding:10px;
margin:0px auto;
border:1px solid black;
border-collapse:collapse;
text-align:center;
width:200px;
}
</style>

<!--HTML codes within body-->
<table >
<tr><td><b><u>Example</u></b></td></tr>
<tr><td>(a+b)<sup>2</sup> = a<sup>2</sup>+2ab+b<sup>2</sup></td></tr>
<tr><td>Thank You</td></tr>
</table>

const express = require('express');
const app = express();
const f = require('fs');
const users1 = require('./MOCK_DATA.json');
const p = require('path');
const port = 4040;
exports.app = app;
app.use(express.json());  // middleware to handle the request



app.get('/users', (req, res) => {    //get all users 
    return res.json(users1);
});


app.get('/users/:id', (req, res) => {      // get 
    const id = Number(req.params.id);
    const user = users1.find(user => user.id === id);
    if (!user) {
        return res.status(404).send('User not found');
    }
    return res.json(user);
});

app.post('/user/:id', (req, res) => {            // post method 
    const id = Number(req.params.id);  
    
    const user = users1.find(
        user => user.id === id
    )
    
    return res.json(user);

});

app.delete('/user/:id', (req, res) => {    // delete the user 
    const id = Number(req.params.id); 
    
    const userIndex = users1.findIndex(
        user => user.id === id
    )
    if (userIndex === -1)
        return res.status(404).send('Data not found');

    const deletedItem = users1.splice(userIndex, 1);
    return res.json("HOLA AMIGOS WE FOUND THAT! ");
});


app.post('/user', (req, res) => {      // for adding  new users 
    const newUser = req.body;
    // Check if user with same id exists
    if (users1.some(user => user.id === newUser.id)) {
        return res.status(400).json({ message: "User with this ID already exists" });
    }
    users1.push(newUser);
    res.status(201).json({
        message: "User added successfully",
        user: newUser
    });
});
app.put('/users/:id', (req, res) => {
  const id = Number(req.params.id);
  const updatedUser = req.body;
  const userIndex = users1.findIndex(user => user.id === id);
  if (userIndex === -1) {
    return res.status(404).json({ message: "User not found" });
  }
  users1[userIndex] = { ...users1[userIndex], ...updatedUser };
  res.status(200).json({
    message: "User updated successfully",
    user: users1[userIndex]
  });
});


app.get('/aboutus', (req, res) => {            //about us msg to console 
    const t = p.join(__dirname, 'aboutus.html');
    console.log(t);
    res.sendFile(t);      
});



app.listen(port, () => {
    console.log("server started :" + `http://localhost:${port}/`);
})


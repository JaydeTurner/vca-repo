// first node application
const express = require('express')
const app = express()
const port = 3000
app.get('/', (req, res) => {
    res.send('Hello Virtual Machine! (GET req btw')
})

app.post('/post', function (req, res) {
    res.send('Got a POST request')
})

app.put('/put', function (req, res) {
    res.send('Got a PUT request at /user')
})

app.delete('/delete', function (req, res) {
    res.send('Got a DELETE request at /user')
})

app.get('/servicea', (req, res) => {
    res.send('Hello Virtual Machine! - This is Service A')
})

app.get('/serviceb', (req, res) => {
    res.send('Hello Virtual Machine! - This is Service C [There is no B :(]')
})
app.listen (port, () => {
    console.log('Express Application listening at port 3000')
})
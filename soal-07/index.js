const express = require('express');
const exphbs = require('express-handlebars');
const bodyParser = require('body-parser');
const mysql = require('mysql');

const app = express();
var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: '',
    database: 'arkademy'
});
connection.connect();

app.use(bodyParser.json());
app.engine('handlebars', exphbs({defaultLayout: 'main'}));
app.set('view engine', 'handlebars');

app.get('/', (req, res) => {
    let biodata = connection.query(`
        SELECT
            categories.id,
            categories.name
            AS
            category_names,
            GROUP_CONCAT (products.name)
            AS
            products
        FROM
            categories
        JOIN
            categories.id=products.id_category
    `);
    res.render('index', {
        title: 'Main Page',
        biodata
    });
});

const port = process.env.PORT | 3000;
app.listen( port, () => {
    console.log(`Youre running in port ${port}`);
});

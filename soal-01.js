const createBio = new function() {
    this.name= '',
    this.address= '',
    this.hobbies= [
        ''
    ],
    this.is_merried= false,
    this.school= {
        highSchool: '',
        university: ''
    },
    this.skills= [
        {
            category: '',
            about: ''
        }
    ]

    this.getInfo = function() {
        return JSON.stringify(this);
    }
};

createBio.name = 'mohammad saifoelloh noor';
createBio.address = 'telagasari semarang';
createBio.hobbies = [
    'baca komik',
    'tidur',
    'belajar sesuatu yang baru'
];
createBio.is_merried = false;
createBio.school = {
    highSchool: 'SMA Islam Sultan Agung 1, Semarang',
    university: 'Universitas Dian Nuswantoro Semarang'
};
createBio.skills.push({
    category: 'cooking',
    about: 'bisa memotong sayuran dengan baik dan benar'
});

let hasil = createBio.getInfo();
console.log(hasil);

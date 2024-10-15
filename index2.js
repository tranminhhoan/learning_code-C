class Person{
    constructor(){
        this._name = name;

    }
    get name(){ 
        return this._name
    }
    set name(newgame){
        this._name = newgame

    }
}
const Person = new Person('Hoang')

console.log(Person.name)
Person.name ='Neymar'
console.log(Person.name)
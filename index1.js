class Calculator{
    constructor(){
        this.value = 0

    }
   
    plus(number){
        this.value =+ number;
        return this;

    }
    subtract(number){
        this.value -= number;
        return this;

    }
    multiply(number){
        this.value *= number;
        return this;
    }
    getResult(){
        return this.value
    }
}
const result =  new Calculator().plus(5).subtract(2).getResult();
console.log(result);

/*class Calculator{
   static value = 0 // muc tieu la de su dung lai thang static
   
     static plus(number){
        this.value =+;
        return this;

    }
    static subtract(number){
        this.value -= number;
        return this;

    }
    static multiply(number){
        this.value *= number;
        return this;
    }
    static getResult(){
        return this.value
    }
}
const result =   Calculator.plus(5).subtract(2).getResult();
console.log(result);
*/
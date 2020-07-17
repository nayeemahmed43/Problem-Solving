function firstNonRepeatChar(str) {
    const string = str.toLowerCase();

    for(let char of string) {
        if(string.indexOf(char) === string.lastIndexOf(char)){
            return char;
        }
    }
}

console.log(firstNonRepeatChar('ughfAauhgfgk'));
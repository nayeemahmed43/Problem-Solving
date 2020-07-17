function firstNonRepeatChar(str) {
    const string=str.toLowerCase();
    const mappedChar = {};

    for(let char of string) {
        if(mappedChar[char]) {
            mappedChar[char]++
        }else {
            mappedChar[char]=1;
        }
    }
    
    for(let char in mappedChar) {
        if(mappedChar[char]===1){
            return char;
        }
    }
}


console.log(firstNonRepeatChar('ughfAauhgfgk'));

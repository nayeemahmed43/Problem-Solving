function createCharMap(string) {
    const charMap = {};
    for(let character of string.replace(/[^\w]/g,'').toLowerCase()){
        if(charMap[character]){
            charMap[character]++;
        }else {
            charMap[character] = 1;
        }
    }
    return charMap;
}

function anagram(str1, str2) {
    const charMap1 = createCharMap(str1);
    const charMap2 = createCharMap(str2);

    if(Object.keys(charMap1).length !== Object.keys(charMap2).length) {
        return false;
    }
    for(let char in charMap1) {
        if(charMap1[char] !== charMap2[char]) {
            return false;
        }
    }
    return true;
}

console.log(anagram('Rail Safety','Fairy Tales')); // output: true


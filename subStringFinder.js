function subStringFinder(string,subString) {
    let j=0, i=0,idx=0;
   for( ; i<string.length; i++) {
       if(string[i]===subString[j]){
           j++;
        }else {
            j=0;
        }

        if(j===0) {
            idx=i;
        }else if(j===subString.length){
            return ++idx;
        }
        
   }
   return -1;

}

console.log(subStringFinder('abbcdabbbbbck','ck')); // 11
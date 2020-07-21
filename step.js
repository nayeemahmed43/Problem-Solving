function step(n) {
    for(let row=1; row<=n; row++) {
        let string='';
        for(let column=1; column<=n; column++) {
            if(column<=row) {
                string +='#';
            }else {
                string +=' ';
            }
        }
        console.log(string);
    }
}

step(10);
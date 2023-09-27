type F = (x: number) => number;

function compose(functions: F[]): F {
   
	return function(x) {
        let res = x;
        functions.reverse();
        for (var val of functions){
            res = val(res)
        }
        return res
    }
};



/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
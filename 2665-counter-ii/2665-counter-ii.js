/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let res = init
    return {
        increment: () => {
            res = (res + 1)
            return res
        },
        decrement: () => {
            res = (res - 1)
            return res
        },
        reset: () => {
            res = init
            return res
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
var BST = function (value) {
    this.right = null;
    this.left = null;
    this.value = value;
}

BST.prototype.insert = function (value) {

    if (this.value > value) {
        if (!this.left) {
            var newBST = new BST(value);
            this.left = newBST;
        } else
            this.left.insert(value)
    } else if (this.value < value)
        if (!this.right) {
            var newBST = new BST(value);
            this.right = newBST;
        }
    else
        this.right.insert(value);
}

BST.prototype.contains = function (value) {

    if (this.value == value) {
        return true
    }
    else if (this.value > value) {
        if (this.left)
            return this.left.contains(value);
    } else if (this.value < value) {
        if (this.right)
            return this.right.contains(value)
    }

    return false;
}


var Tree = new BST(50);
Tree.insert(10);
Tree.insert(60);
Tree.insert(5);
Tree.insert(11);
Tree.insert(51);
Tree.insert(61);
console.log(Tree.contains(3));
console.log(Tree.contains(2));
console.log(Tree);
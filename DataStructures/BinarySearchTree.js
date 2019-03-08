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


BST.prototype.depthFirstTraversal = function (iteratorFn, orderBy) {

    if (orderBy === 'pre-order') iteratorFn(this.value);
    if(this.left) this.left.depthFirstTraversal(iteratorFn, orderBy);
    if (orderBy === 'in-order')  iteratorFn(this.value);
    if(this.right) this.right.depthFirstTraversal(iteratorFn, orderBy);
    if (orderBy === 'post-order') iteratorFn(this.value);
 
}

BST.prototype.breadthFirstTraversal = function(iteratorFn) {
    var arrQueue = [this];
    while (arrQueue.length) {
      var treeNode = arrQueue.shift();
      iteratorFn(treeNode.value);
      if (treeNode.left) arrQueue.push(treeNode.left);
      if (treeNode.right) arrQueue.push(treeNode.right);
    }
  }

BST.prototype.getMinValue = function() {
    if (this.left) return this.left.getMinValue();
    else return this.value;
  };
   
BST.prototype.getMaxValue = function() {
    if (this.right) return this.right.getMaxValue();
    else return this.value;
  };
   

function cnslOutput(value) {
    console.log(value);
};

    
var Tree = new BST(50);
Tree.insert(10);
Tree.insert(60);
Tree.insert(5);
Tree.insert(11);
Tree.insert(51);
Tree.insert(61);
Tree.insert(45);
Tree.insert(36);
Tree.insert(67);
Tree.insert(20);
Tree.insert(9);

console.log(Tree.contains(3));
console.log(Tree.contains(2));
console.log(Tree);

Tree.breadthFirstTraversal(cnslOutput);
Tree.depthFirstTraversal(cnslOutput, 'in-order');

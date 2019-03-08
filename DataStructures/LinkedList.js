function LinkedList() {
    this.head = null;
    this.tail = null;
}

function Node(value, next, prev) {
    this.value = value;
    this.next = next;
    this.prev = prev;
}

LinkedList.prototype.AddToHead = function (value) {
    var newNode = new Node(value, this.head, null);
    if(!this.head) 
        this.tail = newNode;
    else
    this.head.prev = newNode;
    this.head = newNode;
}

LinkedList.prototype.AddToTail = function (value) {
    var newNode = new Node(value, null, this.tail);
    if(!this.tail)
        this.head = newNode;
    else
        this.tail.next = newNode;
    this.tail = newNode;
}

LinkedList.prototype.indexOf =  function (value) {
    
    var indexes = [], count = 0,
    currentNode = this.head;

    while(currentNode){
        if(currentNode.value == value)
        {
            indexes.push(count);
        }
        currentNode = currentNode.next;
        count++ ;
    }

    return indexes;   
}


LinkedList.prototype.Exists = function (value) {
    var currentNode = this.head;

    while (currentNode) {
        if(currentNode.value  == value)
            return true;
        
       currentNode = currentNode.next;     
    }
    return false;
}


LinkedList.prototype.Length = function () {
    
    var currentNode = this.head,
    length = 0;
    while (currentNode) {
        length++;
        currentNode = currentNode.next;
    }
    return length;
}
var list = new LinkedList();

list.AddToTail(3);
list.AddToTail(22);
list.AddToTail(8);
list.AddToTail(55);
list.AddToTail(1);
list.AddToTail(65);

list.AddToHead(32);
list.AddToHead(93);

console.log(list.Length());
console.log(list.indexOf(8));
console.log(list.Exists(4));
console.log(list.Exists(65));

console.log(list);

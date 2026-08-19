class LinkedListDemo{
    public static void main(String[] args){
        Node n1 = new Node();
        n1.data = 12;
        n1.next = null;
        System.out.println(n1.data+"->"+"NULL");
    }
}
class Node{
    int data;
    Node next;
}
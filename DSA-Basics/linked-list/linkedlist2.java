class linkedlist2 {
    // Last mein element insert karne ke liye
    static void insertElement(Node head, int val) {
        Node newNode = new Node();
        newNode.data = val;
        newNode.next = null;

        // Agar list empty hai
        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        // Last node tak jao
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    static void printList(Node head) {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }

        System.out.println("NULL");
    }

    public static void main(String[] args) {

        Node head = new Node();
        head.data = 10;
        head.next = null;

        insertElement(head, 20);
        insertElement(head, 30);
        insertElement(head, 40);

        printList(head);
    }
}

class Node {
    int data;
    Node next;
}
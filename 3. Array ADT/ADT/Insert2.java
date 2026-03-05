class Insert2{
    protected int[] ar;
    protected int size;
    protected int length;
    public Insert2(int []ar,int size,int len){
        this.size=size;
        this.ar=new int[size];
        this.length=len;
           for (int i = 0; i < length; i++) {
            this.ar[i] = ar[i];
        }
    }
    public void Display(int ar[]){
        System.out.println("Elements of Array are : ");
        for(int x=0;x<length;x++){
            System.out.print(ar[x]+"\t");
        }
        System.out.println();
    }
    public void append(int x){
        if(ar.length<size){
            ar[length++]=x; 
        }
    }
    public void insert(int index, int val){
        if(index>=0 && index<length){
            for(int i=length;i>index;i--){
                ar[i]=ar[i-1];
            }
            ar[index]=val;
            length++;
        }
    }
    public static void main(String[] args){
        int test[]={1,2,3,4,5};
        Insert2 obj1=new Insert2(test,10,5);
        obj1.Display(obj1.ar);
        obj1.append(69);
        obj1.Display(obj1.ar);
        obj1.insert(0, 69);
        obj1.Display(obj1.ar);


    }
}




// class Insert2 {
//     private int[] A;
//     private int size;
//     private int length;

//     public Insert2(int[] arr, int size, int length) {
//         this.size = size;
//         this.length = length;
//         this.A = new int[size];

//         // Copy initial elements
//         for (int i = 0; i < length; i++) {
//             this.A[i] = arr[i];
//         }
//     }

//     public void display() {
//         System.out.println("Elements are:");
//         for (int i = 0; i < length; i++) {
//             System.out.print(A[i] + " ");
//         }
//         System.out.println();
//     }

//     public void append(int x) {
//         if (length < size) {
//             A[length++] = x;
//         }
//     }

//     public void insert(int index, int x) {
//         if (index >= 0 && index <= length) {
//             for (int i = length; i > index; i--) {
//                 A[i] = A[i - 1];
//             }
//             A[index] = x;
//             length++;
//         }
//     }

//     public static void main(String[] args) {
//         int[] initial = {2, 3, 4, 5, 6};
//         Insert2 obj = new Insert2(initial, 10, 5);

//         obj.append(10);
//         obj.insert(0, 12);
//         obj.display();
//     }
// }

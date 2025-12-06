// this is the implementation of the extending the interface 


interface A{
    void meth1();
    void meth2();
}

interface B extends  A{
    void meth3();
}

class MyClass implements  B{
    public void meth1(){
        System.out.println("Implements meth1()");
    }

    public void meth2(){
        System.out.println("Implements meth2()");
    }

    public void meth3(){
        System.out.println("Implements method()");
    }
}

class IFExtend{
    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.meth1();
        obj.meth2();
        obj.meth3();
    }
}


// default interface methods need to define their implementation in the interface they are defining it is neccessary because it works like that and if class implementing that interface then that class is still valid to do not defining default interface method . Implementing class can define their own implementation as peer need  
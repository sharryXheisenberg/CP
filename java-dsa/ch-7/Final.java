// class A{
//     final void meth(){
//         System.out.println("This is final method and it can't get override");
//     }
// }

// class B extends  A{
//     void meth(){  // can't override
//         System.out.println("Illegal!");
//     }
// }

// // also final prevents inheritance
// // You can prevent a class from being inherited by preceding its declaration with final. Declaring a 
// // class as final implicitly declares all of its methods as final, too. As you might expect, it is illegal 
// // to declare a class as both abstract and final since an abstract class is incomplete by itself and 
// // relies upon its subclasses to provide complete implementations

// final class C {
//     void someMethod(){
//         System.out.println("Some method in class C!");
//     }
// }

// class D extends  C{  // this will get the error 
//      // ... some methods and objectc
// }

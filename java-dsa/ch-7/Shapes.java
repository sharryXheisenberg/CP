class TwoDShape{
    private double height;
    private double width;

     TwoDShape(double w, double h ) { // parameterised constructor
        width = w;
        height = h; 
    }

    double getWidth() {return width;}
    double getHeight() {return height;}
    void setWidth(double w) { width = w;}
    void setHeight(double h){height = h;}

    void showDim(){
        System.out.println("width and height are " + width + " " + height);
    }

}

class Triangle extends TwoDShape{
    private String style;

    public Triangle(String s, double w, double h) {
        super(w, h);

        style = s;
    }
    double area(){
        return getWidth() * getHeight()/2;
    }

    void showStyle(){
        System.out.println("Triangle is" + style);
    }
}

class Rectangle extends TwoDShape{

    private String style;
    public Rectangle(double h , double w, String s) {
        super(w, h);

        style = s;
    }

    double getArea(){
        return getHeight()*getWidth();
    }

    void showStyle(){
        System.out.println("Style of rectangle is"+style);
    }
}

class Shapes{
    public static void main(String[] args) {
        Triangle t1 = new Triangle("Filled",3.4,4.0);
        Triangle t2 = new Triangle("Outfilled", 2.0,5.0);

        System.out.println("showing the information of trianle");
        t1.showDim();
        t1.showStyle();
        System.out.println("Area of triangle is " + t1.area());

        System.out.println();

        Rectangle r1 = new Rectangle(23.3, 20.1, "Op");
        Rectangle r2 = new Rectangle(11.1, 12.1, "Not op");

        System.out.println("Information of the rectangle class");
        r1.showDim();
        r2.showDim();
        r1.showStyle();
        r2.showStyle();

        System.out.println("Area of rectangle r1 is" + r1.getArea());
        System.out.println("Area of rectangle r2 is: "+ r2.getArea());
    }
}

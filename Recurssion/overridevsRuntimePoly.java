// package extraConcepts;

class Bank {
    // String name="bank";
    int getRateOfInterest() {
        return 0;
    }
}

// Creating child classes.
class SBI extends Bank {
    int getRateOfInterest() {
        return 8;
    }
}

class ICICI extends Bank {
    int getRateOfInterest() {
        return 7;
    }
}

public class overrideVsRuntimePoly {

    // normal OVERRIDING concept's usage shown:
    // SBI s=new SBI();
    // ICICI i=new ICICI();
    System.out.println("hi");
    // System.out.println(i.getRateOfInterest());
    // System.out.println("SBI ROI: "+ s.getRateOfInterest()); //8
    // System.out.println("ICICI ROI: "+ i.getRateOfInterest()); //7

    // OVERRIDING with RUN-TIME POLYMORPHISM (uses upcasting) concept's usage shown
    // :
    Bank b;b=new SBI(); 
    // Since method invocation is determined by the JVM not compiler, it is known as
    // runtime polymorphism.
    b=new ICICI();

    System.out.println("SBI ROI: "+b.getRateOfInterest()); // 8
    System.out.println("ICICI ROI: "+b.getRateOfInterest()); // 7

}

// Since method invocation is determined by the JVM not compiler, it is known as
// runtime polymorphism.
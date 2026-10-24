
class PaymentProcessor {

    void processPayment(double amount) {
        System.out.println("Payment without coupon");
        System.out.println("Final Amount: Rs. " + amount);
    }

    void processPayment(double amount, String couponCode) {
        System.out.println("Payment with coupon: " + couponCode);

        double discount = 100;
        double finalAmount = amount - discount;

        System.out.println("Final Amount: Rs. " + finalAmount);
    }

    public static void main(String[] args) {
        PaymentProcessor p = new PaymentProcessor();

        p.processPayment(1000);

        System.out.println();

        p.processPayment(1000, "SAVE100");
    }
}


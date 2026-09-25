class Solution {
    public double[] convertTemperature(double celsius) {
        double kelvin;
        double fahrenheit;
        kelvin = celsius + 273.15;
        fahrenheit = celsius*1.80+32.00;
        return new double[]{kelvin, fahrenheit};
    }
}
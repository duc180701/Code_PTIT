/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package model;

import java.io.Serializable;

/**
 *
 * @author User
 */
public class ViTri implements Serializable {
    private static int ma = 100;
    private int mavitri;
    private String tenvitri;
    private double heso;

    public ViTri() {
    }

    public ViTri(String tenvitri, double heso) {
        this.mavitri = ma++;
        this.tenvitri = tenvitri;
        this.heso = heso;
    }

    public static int getMa() {
        return ma;
    }

    public static void setMa(int ma) {
        ViTri.ma = ma;
    }

    public int getMavitri() {
        return mavitri;
    }

    public void setMavitri(int mavitri) {
        this.mavitri = mavitri;
    }

    public String getTenvitri() {
        return tenvitri;
    }

    public void setTenvitri(String tenvitri) {
        this.tenvitri = tenvitri;
    }

    public double getHeso() {
        return heso;
    }

    public void setHeso(double heso) {
        this.heso = heso;
    }
    
    
    
    public Object[] toObject() {
        return new Object[] {
            mavitri, tenvitri, heso
        };
    }
    
}

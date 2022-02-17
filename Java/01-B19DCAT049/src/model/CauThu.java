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
public class CauThu implements Serializable{
    private static int ma =100;
    private int mact;
    private String hoten;
    private int tuoi;
    private String bangcap;
    private double mucluong;

    public CauThu() {
    }

    public CauThu( String hoten, int tuoi, String bangcap, double mucluong) {
        this.mact = ma++;
        this.hoten = hoten;
        this.tuoi = tuoi;
        this.bangcap = bangcap;
        this.mucluong = mucluong;
    }

    
    

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }

    public static int getMa() {
        return ma;
    }

    public static void setMa(int ma) {
        CauThu.ma = ma;
    }

    public int getMact() {
        return mact;
    }

    public void setMact(int mact) {
        this.mact = mact;
    }

    public String getHoten() {
        return hoten;
    }

    public void setHoten(String hoten) {
        this.hoten = hoten;
    }

    public String getBangcap() {
        return bangcap;
    }

    public void setBangcap(String bangcap) {
        this.bangcap = bangcap;
    }

    public double getMucluong() {
        return mucluong;
    }

    public void setMucluong(double mucluong) {
        this.mucluong = mucluong;
    }
    
    
    
    public Object[] toObject() {
        return new Object[] {
            mact, hoten, tuoi, bangcap, mucluong
        };
    }
}

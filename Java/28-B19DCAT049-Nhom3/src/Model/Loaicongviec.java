/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;

import java.io.Serializable;

/**
 *
 * @author TrungDuc
 */
public class Loaicongviec implements Serializable{
    private int ma;
    private String ten, kieu;
    private int kinhphi;
    private static int sma = 100;

    public Loaicongviec() {
    }

    public Loaicongviec(int ma, String ten, String kieu, int kinhphi) {
        this.ma = ma;
        this.ten = ten;
        this.kieu = kieu;
        this.kinhphi = kinhphi;
    }

    public int getMa() {
        return ma;
    }

    public void setMa(int ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getKieu() {
        return kieu;
    }

    public void setKieu(String kieu) {
        this.kieu = kieu;
    }

    public int getKinhphi() {
        return kinhphi;
    }

    public void setKinhphi(int kinhphi) {
        this.kinhphi = kinhphi;
    }

    public static int getSma() {
        return sma;
    }

    public static void setSma(int sma) {
        Loaicongviec.sma = sma;
    }

    
    
    public Object[] toObject() {
        return new Object[] {
            ma, ten, kieu, kinhphi
        };
    }
}

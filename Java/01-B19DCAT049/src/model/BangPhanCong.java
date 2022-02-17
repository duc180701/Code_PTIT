/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package model;

import java.io.Serializable;
import java.util.ArrayList;

/**
 *
 * @author User
 */
public class BangPhanCong implements Serializable {
    CauThu ct;
    ViTri vt;
    private int ngay, thang, nam;

    public BangPhanCong() {
    }

    public BangPhanCong(CauThu ct, ViTri vt, int ngay, int thang, int nam) {
        this.ct = ct;
        this.vt = vt;
        this.ngay = ngay;
        this.thang = thang;
        this.nam = nam;
    }

    public CauThu getCt() {
        return ct;
    }

    public void setCt(CauThu ct) {
        this.ct = ct;
    }

    public ViTri getVt() {
        return vt;
    }

    public void setVt(ViTri vt) {
        this.vt = vt;
    }

    public int getNgay() {
        return ngay;
    }

    public void setNgay(int ngay) {
        this.ngay = ngay;
    }

    public int getThang() {
        return thang;
    }

    public void setThang(int thang) {
        this.thang = thang;
    }

    public int getNam() {
        return nam;
    }

    public void setNam(int nam) {
        this.nam = nam;
    }

    

    
    
    public Object[] toObject() {
        return new Object[] {
            ct.getMact(), ct.getHoten(), ct.getMucluong(), vt.getMavitri(), vt.getTenvitri(), String.valueOf(ngay) + "/" + String.valueOf(thang) + "/" + String.valueOf(nam)
        };
    }
    
}

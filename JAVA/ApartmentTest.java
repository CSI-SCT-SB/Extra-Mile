package com.geektrust.backend.entities;

import com.geektrust.backend.Ratio;
import com.geektrust.backend.Entites.Apartment;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

@DisplayName("ApartmentTest")
public class ApartmentTest {
    
    @Test
    @DisplayName("addGuests method should add guests successfully")
    public void addGuests(){
        Apartment apartment = new Apartment();
        apartment.addGuestsInApartment(10);
        apartment.addGuestsInApartment(20);
        apartment.addGuestsInApartment(30);
        Assertions.assertEquals(60, apartment.getGuestsInApartment());
    }
    @Test
    @DisplayName("SetGuests method should Set guests successfully")
    public void SetGuests(){
        Apartment apartment = new Apartment();
        apartment.setGuestsInApartment(10);
        Assertions.assertEquals(10, apartment.getGuestsInApartment());
    }
    @Test
    @DisplayName("SetWaterRatio method should set the water ratio successfully")
    public void SetWaterRatio(){
        Ratio ratio = new Ratio(2, 3);
        Apartment apartment = new Apartment(2,10,ratio);
        int expectedCorporationRatio = 2;
        int expectedBoreWellRatio = 3;
        Assertions.assertEquals(expectedCorporationRatio, apartment.getWaterRatioOfApartment().getCorporationRatio());
        Assertions.assertEquals(expectedBoreWellRatio, apartment.getWaterRatioOfApartment().getBorewellWaterRatio());
    }
}

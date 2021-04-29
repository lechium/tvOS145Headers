/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSNumber, NSMeasurement, NSDictionary, NSDateComponents;


@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * carIdentifier; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@property (nonatomic,copy) NSMeasurement * maximumDistance; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingElectric; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceElectric; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingFuel; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceFuel; 
@property (nonatomic,copy) NSDictionary * consumptionFormulaArguments; 
@property (nonatomic,copy) NSDictionary * chargingFormulaArguments; 
@property (nonatomic,copy) NSDateComponents * dateOfLastStateUpdate; 
@property (nonatomic,copy) NSString * activeConnector; 
@property (nonatomic,copy) NSMeasurement * maximumBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * currentBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * minimumBatteryCapacity; 
@required
-(long long)code;
-(void)setDistanceRemaining:(id)arg1;
-(NSMeasurement *)distanceRemaining;
-(NSString *)activeConnector;
-(void)setActiveConnector:(id)arg1;
-(NSString *)carIdentifier;
-(void)setCarIdentifier:(id)arg1;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(id)arg1;
-(NSNumber *)charging;
-(void)setCharging:(id)arg1;
-(NSDictionary *)chargingFormulaArguments;
-(void)setChargingFormulaArguments:(id)arg1;
-(NSDictionary *)consumptionFormulaArguments;
-(void)setConsumptionFormulaArguments:(id)arg1;
-(NSMeasurement *)currentBatteryCapacity;
-(void)setCurrentBatteryCapacity:(id)arg1;
-(NSDateComponents *)dateOfLastStateUpdate;
-(void)setDateOfLastStateUpdate:(id)arg1;
-(NSMeasurement *)distanceRemainingElectric;
-(void)setDistanceRemainingElectric:(id)arg1;
-(NSMeasurement *)distanceRemainingFuel;
-(void)setDistanceRemainingFuel:(id)arg1;
-(NSNumber *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(id)arg1;
-(NSMeasurement *)maximumBatteryCapacity;
-(void)setMaximumBatteryCapacity:(id)arg1;
-(NSMeasurement *)maximumDistance;
-(void)setMaximumDistance:(id)arg1;
-(NSMeasurement *)maximumDistanceElectric;
-(void)setMaximumDistanceElectric:(id)arg1;
-(NSMeasurement *)maximumDistanceFuel;
-(void)setMaximumDistanceFuel:(id)arg1;
-(NSMeasurement *)minimumBatteryCapacity;
-(void)setMinimumBatteryCapacity:(id)arg1;
-(NSNumber *)minutesToFull;
-(void)setMinutesToFull:(id)arg1;

@end


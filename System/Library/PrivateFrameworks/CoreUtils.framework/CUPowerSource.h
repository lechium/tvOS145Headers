/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface CUPowerSource : NSObject <NSSecureCoding> {

	OpaqueIOPSPowerSourceIDRef _psID;
	BOOL _aggregate;
	BOOL _charging;
	BOOL _showChargingUI;
	BOOL _adapterSharedSource;
	BOOL _present;
	unsigned _expectedComponents;
	int _powerState;
	int _role;
	NSString* _accessoryCategory;
	NSString* _accessoryID;
	double _chargeLevel;
	long long _familyCode;
	NSString* _groupID;
	NSArray* _LEDs;
	double _maxCapacity;
	NSString* _name;
	NSString* _partID;
	NSString* _partName;
	long long _productID;
	long long _sourceID;
	NSString* _state;
	CUPowerSource* _subLeft;
	CUPowerSource* _subRight;
	CUPowerSource* _subCase;
	CUPowerSource* _subMain;
	long long _temperature;
	NSString* _transportType;
	NSString* _type;
	long long _vendorID;
	long long _adapterErrorFlags;
	long long _adapterFamilyCode;
	NSString* _adapterName;
	long long _adapterSourceID;
	NSDictionary* _ioKitAdapterDescription;
	NSDictionary* _ioKitDescription;

}

@property (nonatomic,copy) NSDictionary * ioKitAdapterDescription;              //@synthesize ioKitAdapterDescription=_ioKitAdapterDescription - In the implementation block
@property (nonatomic,copy) NSDictionary * ioKitDescription;                     //@synthesize ioKitDescription=_ioKitDescription - In the implementation block
@property (assign,nonatomic) BOOL present;                                      //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSString * accessoryCategory;                        //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,copy) NSString * accessoryID;                              //@synthesize accessoryID=_accessoryID - In the implementation block
@property (assign,nonatomic) BOOL aggregate;                                    //@synthesize aggregate=_aggregate - In the implementation block
@property (assign,nonatomic) BOOL charging;                                     //@synthesize charging=_charging - In the implementation block
@property (assign,nonatomic) double chargeLevel;                                //@synthesize chargeLevel=_chargeLevel - In the implementation block
@property (assign,nonatomic) unsigned expectedComponents;                       //@synthesize expectedComponents=_expectedComponents - In the implementation block
@property (assign,nonatomic) long long familyCode;                              //@synthesize familyCode=_familyCode - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                  //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSArray * LEDs;                                      //@synthesize LEDs=_LEDs - In the implementation block
@property (assign,nonatomic) double maxCapacity;                                //@synthesize maxCapacity=_maxCapacity - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * partID;                                   //@synthesize partID=_partID - In the implementation block
@property (nonatomic,copy) NSString * partName;                                 //@synthesize partName=_partName - In the implementation block
@property (assign,nonatomic) int powerState;                                    //@synthesize powerState=_powerState - In the implementation block
@property (assign,nonatomic) long long productID;                               //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) int role;                                          //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL showChargingUI;                               //@synthesize showChargingUI=_showChargingUI - In the implementation block
@property (assign,nonatomic) long long sourceID;                                //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CUPowerSource * subLeft;                           //@synthesize subLeft=_subLeft - In the implementation block
@property (nonatomic,retain) CUPowerSource * subRight;                          //@synthesize subRight=_subRight - In the implementation block
@property (nonatomic,retain) CUPowerSource * subCase;                           //@synthesize subCase=_subCase - In the implementation block
@property (nonatomic,retain) CUPowerSource * subMain;                           //@synthesize subMain=_subMain - In the implementation block
@property (assign,nonatomic) long long temperature;                             //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long vendorID;                                //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) long long adapterErrorFlags;                       //@synthesize adapterErrorFlags=_adapterErrorFlags - In the implementation block
@property (assign,nonatomic) long long adapterFamilyCode;                       //@synthesize adapterFamilyCode=_adapterFamilyCode - In the implementation block
@property (nonatomic,copy) NSString * adapterName;                              //@synthesize adapterName=_adapterName - In the implementation block
@property (assign,nonatomic) BOOL adapterSharedSource;                          //@synthesize adapterSharedSource=_adapterSharedSource - In the implementation block
@property (assign,nonatomic) long long adapterSourceID;                         //@synthesize adapterSourceID=_adapterSourceID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(int)publish;
-(BOOL)present;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setTemperature:(long long)arg1 ;
-(long long)temperature;
-(int)role;
-(void)setRole:(int)arg1 ;
-(void)setPowerState:(int)arg1 ;
-(int)powerState;
-(long long)productID;
-(long long)vendorID;
-(void)setProductID:(long long)arg1 ;
-(void)setVendorID:(long long)arg1 ;
-(void)setMaxCapacity:(double)arg1 ;
-(double)maxCapacity;
-(id)detailedDescription;
-(long long)sourceID;
-(void)setSourceID:(long long)arg1 ;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setPresent:(BOOL)arg1 ;
-(NSString *)accessoryID;
-(void)setAccessoryID:(NSString *)arg1 ;
-(BOOL)isAggregateComponent;
-(NSDictionary *)ioKitDescription;
-(unsigned)updateWithPowerAdapterDetails:(id)arg1 ;
-(unsigned)updateWithPowerSourceDescription:(id)arg1 ;
-(NSDictionary *)ioKitAdapterDescription;
-(NSString *)accessoryCategory;
-(BOOL)aggregate;
-(double)chargeLevel;
-(unsigned)expectedComponents;
-(long long)familyCode;
-(NSArray *)LEDs;
-(NSString *)partID;
-(NSString *)partName;
-(BOOL)showChargingUI;
-(CUPowerSource *)subLeft;
-(CUPowerSource *)subRight;
-(CUPowerSource *)subCase;
-(CUPowerSource *)subMain;
-(long long)adapterErrorFlags;
-(long long)adapterFamilyCode;
-(NSString *)adapterName;
-(BOOL)adapterSharedSource;
-(long long)adapterSourceID;
-(void)_updateWithCoder:(id)arg1 ;
-(BOOL)hasAllComponents;
-(void)handleSubComponentsUpdated;
-(void)handleSubComponentsUpdatedWithBaseSource:(id)arg1 ;
-(void)updateWithPowerSource:(id)arg1 ;
-(void)setAccessoryCategory:(NSString *)arg1 ;
-(void)setAggregate:(BOOL)arg1 ;
-(void)setChargeLevel:(double)arg1 ;
-(void)setExpectedComponents:(unsigned)arg1 ;
-(void)setFamilyCode:(long long)arg1 ;
-(void)setLEDs:(NSArray *)arg1 ;
-(void)setPartID:(NSString *)arg1 ;
-(void)setPartName:(NSString *)arg1 ;
-(void)setShowChargingUI:(BOOL)arg1 ;
-(void)setSubLeft:(CUPowerSource *)arg1 ;
-(void)setSubRight:(CUPowerSource *)arg1 ;
-(void)setSubCase:(CUPowerSource *)arg1 ;
-(void)setSubMain:(CUPowerSource *)arg1 ;
-(void)setAdapterErrorFlags:(long long)arg1 ;
-(void)setAdapterFamilyCode:(long long)arg1 ;
-(void)setAdapterName:(NSString *)arg1 ;
-(void)setAdapterSharedSource:(BOOL)arg1 ;
-(void)setAdapterSourceID:(long long)arg1 ;
-(void)setIoKitAdapterDescription:(NSDictionary *)arg1 ;
-(void)setIoKitDescription:(NSDictionary *)arg1 ;
@end


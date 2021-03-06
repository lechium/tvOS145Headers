/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSDictionary, UIImage;

@interface SFDeviceRegulatoryAttributes : NSObject {

	NSString* _serialNumber;
	NSDate* _manufacturingDate;
	unsigned long long _yearForWeekOfManufacture;
	unsigned long long _yearOfManufacture;
	unsigned long long _monthOfManufacture;
	unsigned long long _weekOfManufacture;
	NSDate* __resolvedManufacturingDate;
	NSString* __resolvedIndiaBISNumber;
	NSDictionary* __resolvedMIITDictionary;
	UIImage* __resolvedRegulatoryImage;
	NSDate* __resolvedStartingWeek;

}

@property (nonatomic,retain) NSDate * _resolvedManufacturingDate;                        //@synthesize _resolvedManufacturingDate=__resolvedManufacturingDate - In the implementation block
@property (nonatomic,retain) NSString * _resolvedIndiaBISNumber;                         //@synthesize _resolvedIndiaBISNumber=__resolvedIndiaBISNumber - In the implementation block
@property (nonatomic,retain) NSDictionary * _resolvedMIITDictionary;                     //@synthesize _resolvedMIITDictionary=__resolvedMIITDictionary - In the implementation block
@property (nonatomic,retain) UIImage * _resolvedRegulatoryImage;                         //@synthesize _resolvedRegulatoryImage=__resolvedRegulatoryImage - In the implementation block
@property (nonatomic,retain) NSDate * _resolvedStartingWeek;                             //@synthesize _resolvedStartingWeek=__resolvedStartingWeek - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * indiaBISRegulatoryNumber; 
@property (nonatomic,copy,readonly) NSDictionary * miitDictionary; 
@property (nonatomic,copy,readonly) UIImage * regulatoryImage; 
@property (nonatomic,readonly) NSDate * manufacturingDate;                               //@synthesize manufacturingDate=_manufacturingDate - In the implementation block
@property (nonatomic,readonly) unsigned long long yearForWeekOfManufacture;              //@synthesize yearForWeekOfManufacture=_yearForWeekOfManufacture - In the implementation block
@property (nonatomic,readonly) unsigned long long yearOfManufacture;                     //@synthesize yearOfManufacture=_yearOfManufacture - In the implementation block
@property (nonatomic,readonly) unsigned long long monthOfManufacture;                    //@synthesize monthOfManufacture=_monthOfManufacture - In the implementation block
@property (nonatomic,readonly) unsigned long long weekOfManufacture;                     //@synthesize weekOfManufacture=_weekOfManufacture - In the implementation block
@property (nonatomic,copy,readonly) NSString * plantCode; 
+(id)_calendar;
+(id)_dateFormatter;
+(id)currentDeviceAttributes;
+(id)getRegulatoryAttributes;
+(id)_yearCodeToStartDateLookup;
+(id)_weekCodeLookup;
-(NSString *)serialNumber;
-(unsigned long long)weekOfManufacture;
-(unsigned long long)yearOfManufacture;
-(unsigned long long)yearForWeekOfManufacture;
-(unsigned long long)monthOfManufacture;
-(NSString *)plantCode;
-(void)_resolveDeviceAttributes:(id)arg1 ;
-(id)initWithRegulatoryAttributes:(id)arg1 serialNumber:(id)arg2 ;
-(void)_resolveManufacturingDateRelatedFields:(id)arg1 ;
-(void)_resolveIndiaBISRegulatoryNumberAndMIIT:(id)arg1 ;
-(void)_resolveRegulatoryImage:(id)arg1 ;
-(NSDate *)_resolvedStartingWeek;
-(UIImage *)_resolvedRegulatoryImage;
-(NSString *)_resolvedIndiaBISNumber;
-(NSDictionary *)_resolvedMIITDictionary;
-(UIImage *)regulatoryImage;
-(NSString *)indiaBISRegulatoryNumber;
-(NSDictionary *)miitDictionary;
-(NSDate *)manufacturingDate;
-(NSDate *)_resolvedManufacturingDate;
-(void)set_resolvedManufacturingDate:(NSDate *)arg1 ;
-(void)set_resolvedIndiaBISNumber:(NSString *)arg1 ;
-(void)set_resolvedMIITDictionary:(NSDictionary *)arg1 ;
-(void)set_resolvedRegulatoryImage:(UIImage *)arg1 ;
-(void)set_resolvedStartingWeek:(NSDate *)arg1 ;
@end


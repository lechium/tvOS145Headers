/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideVehicleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString, INImage;

@interface INRideVehicle : NSObject <INImageProxyInjecting, INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding> {

	CLLocation* _location;
	NSString* _registrationPlate;
	NSString* _manufacturer;
	NSString* _model;
	INImage* _mapAnnotationImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) CLLocation * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * registrationPlate;              //@synthesize registrationPlate=_registrationPlate - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) INImage * mapAnnotationImage;              //@synthesize mapAnnotationImage=_mapAnnotationImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(CLLocation *)location;
-(void)setModel:(NSString *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(INImage *)arg1 ;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(NSString *)arg1 ;
@end


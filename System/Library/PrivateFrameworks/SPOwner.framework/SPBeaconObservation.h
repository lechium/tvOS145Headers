/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, SPObservationLocation;

@interface SPBeaconObservation : NSObject <NSSecureCoding> {

	NSUUID* _beaconIdentifier;
	long long _type;
	NSDate* _date;
	SPObservationLocation* _location;

}

@property (nonatomic,copy,readonly) NSUUID * beaconIdentifier;                     //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) SPObservationLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)type;
-(SPObservationLocation *)location;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4 ;
@end

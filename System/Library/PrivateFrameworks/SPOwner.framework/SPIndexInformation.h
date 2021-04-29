/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDateInterval;

@interface SPIndexInformation : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _sequence;
	NSUUID* _beaconIdentifier;
	unsigned long long _index;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,copy) NSUUID * beaconIdentifier;                  //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)index;
-(void)setSequence:(unsigned char)arg1 ;
-(unsigned char)sequence;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setBeaconIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 sequence:(unsigned char)arg2 index:(unsigned long long)arg3 dateInterval:(id)arg4 ;
@end


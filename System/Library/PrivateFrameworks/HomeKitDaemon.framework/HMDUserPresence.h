/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, HMDUserPresenceRegion, NSDate;

@interface HMDUserPresence : HMFObject <NSSecureCoding> {

	HMDUser* _user;
	HMDUserPresenceRegion* _presenceRegionStatus;
	NSDate* _updateTimestamp;

}

@property (nonatomic,readonly) HMDUser * user;                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) HMDUserPresenceRegion * presenceRegionStatus;              //@synthesize presenceRegionStatus=_presenceRegionStatus - In the implementation block
@property (nonatomic,readonly) NSDate * updateTimestamp;                                //@synthesize updateTimestamp=_updateTimestamp - In the implementation block
@property (getter=isAtHome,nonatomic,readonly) BOOL atHome; 
@property (getter=isNotAtHome,nonatomic,readonly) BOOL notAtHome; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDUser *)user;
-(NSDate *)updateTimestamp;
-(id)attributeDescriptions;
-(BOOL)isAtHome;
-(HMDUserPresenceRegion *)presenceRegionStatus;
-(void)setPresenceRegionStatus:(HMDUserPresenceRegion *)arg1 ;
-(id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2 ;
-(BOOL)isNotAtHome;
@end


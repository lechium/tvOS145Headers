/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _wantsAnimation;
	NSNumber* _nearbyCountSlotID;
	NSArray* _peopleProxies;
	NSArray* _shareProxies;
	NSArray* _actionProxies;

}

@property (nonatomic,retain) NSNumber * nearbyCountSlotID;              //@synthesize nearbyCountSlotID=_nearbyCountSlotID - In the implementation block
@property (nonatomic,retain) NSArray * peopleProxies;                   //@synthesize peopleProxies=_peopleProxies - In the implementation block
@property (nonatomic,retain) NSArray * shareProxies;                    //@synthesize shareProxies=_shareProxies - In the implementation block
@property (nonatomic,retain) NSArray * actionProxies;                   //@synthesize actionProxies=_actionProxies - In the implementation block
@property (assign,nonatomic) BOOL wantsAnimation;                       //@synthesize wantsAnimation=_wantsAnimation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)nearbyCountSlotID;
-(void)setNearbyCountSlotID:(NSNumber *)arg1 ;
-(void)setShareProxies:(NSArray *)arg1 ;
-(void)setActionProxies:(NSArray *)arg1 ;
-(NSArray *)shareProxies;
-(NSArray *)actionProxies;
-(NSArray *)peopleProxies;
-(BOOL)wantsAnimation;
-(void)setPeopleProxies:(NSArray *)arg1 ;
-(void)setWantsAnimation:(BOOL)arg1 ;
@end

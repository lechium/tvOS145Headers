/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying> {

	_CLRangingPeer* _peer;
	NSDate* _date;
	NSNumber* _distanceMeters;
	NSNumber* _accuracyMeters;
	BOOL _initiator;
	BOOL _shouldUnlock;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6 ;
@end


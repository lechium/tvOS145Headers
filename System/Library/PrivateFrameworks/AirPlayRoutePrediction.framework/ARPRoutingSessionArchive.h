/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sessions;
	double _routingSessionTimeout;

}

@property (nonatomic,readonly) NSArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) double routingSessionTimeout;              //@synthesize routingSessionTimeout=_routingSessionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sessions;
-(id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2 ;
-(double)routingSessionTimeout;
@end


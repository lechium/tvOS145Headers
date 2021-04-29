/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timebase;
	NSUUID* _conversationID;

}

@property (nonatomic,readonly) NSDate * timebase;                    //@synthesize timebase=_timebase - In the implementation block
@property (nonatomic,readonly) NSUUID * conversationID;              //@synthesize conversationID=_conversationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timebase;
-(NSUUID *)conversationID;
-(id)initWithConversationID:(id)arg1 timebase:(id)arg2 ;
-(BOOL)isEqualToConversationReport:(id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding> {

	long long _usagePage;
	long long _usage;

}

@property (nonatomic,readonly) long long usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) long long usage;                  //@synthesize usage=_usage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)usage;
-(long long)usagePage;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(AWRemoteMetadata*)arg3 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerMediaItemChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	long long _reason;

}

@property (nonatomic,readonly) long long reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)reason;
-(NSDictionary *)properties;
-(id)initWithReason:(long long)arg1 ;
@end


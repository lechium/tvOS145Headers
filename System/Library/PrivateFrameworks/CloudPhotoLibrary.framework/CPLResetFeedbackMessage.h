/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLResetFeedbackMessage : CPLFeedbackMessage {

	NSString* _resetType;
	NSString* _reason;
	NSString* _uuid;

}

@property (nonatomic,readonly) NSString * resetType;              //@synthesize resetType=_resetType - In the implementation block
@property (nonatomic,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
+(id)feedbackType;
-(NSString *)reason;
-(NSString *)uuid;
-(id)serverMessage;
-(id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(NSString *)resetType;
@end


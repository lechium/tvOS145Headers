/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadGoodnessScoreOverrideStateMutating.h>

@class AFMyriadGoodnessScoreOverrideState, NSString;

@interface _AFMyriadGoodnessScoreOverrideStateMutation : NSObject <AFMyriadGoodnessScoreOverrideStateMutating> {

	AFMyriadGoodnessScoreOverrideState* _baseModel;
	long long _overrideOption;
	NSString* _reason;
	struct {
		unsigned isDirty : 1;
		unsigned hasOverrideOption : 1;
		unsigned hasReason : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setReason:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setOverrideOption:(long long)arg1 ;
@end

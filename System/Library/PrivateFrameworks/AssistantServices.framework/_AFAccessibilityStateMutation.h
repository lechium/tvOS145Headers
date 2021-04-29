/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAccessibilityStateMutating.h>

@class AFAccessibilityState, NSString;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {

	AFAccessibilityState* _baseModel;
	long long _isVoiceOverTouchEnabled;
	long long _isVibrationDisabled;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsVoiceOverTouchEnabled : 1;
		unsigned hasIsVibrationDisabled : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsVoiceOverTouchEnabled:(long long)arg1 ;
-(void)setIsVibrationDisabled:(long long)arg1 ;
@end


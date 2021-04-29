/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadContextMutating.h>

@class AFMyriadContext, AFMyriadPerceptualAudioHash, AFMyriadGoodnessScoreOverrideState, NSString;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {

	AFMyriadContext* _baseModel;
	unsigned long long _timestamp;
	AFMyriadPerceptualAudioHash* _perceptualAudioHash;
	AFMyriadGoodnessScoreOverrideState* _overrideState;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasPerceptualAudioHash : 1;
		unsigned hasOverrideState : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setPerceptualAudioHash:(id)arg1 ;
-(void)setOverrideState:(id)arg1 ;
@end

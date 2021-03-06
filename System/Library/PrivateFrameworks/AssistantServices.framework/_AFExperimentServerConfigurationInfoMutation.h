/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentServerConfigurationInfoMutating.h>

@class AFExperimentServerConfigurationInfo, NSString, NSURL;

@interface _AFExperimentServerConfigurationInfoMutation : NSObject <AFExperimentServerConfigurationInfoMutating> {

	AFExperimentServerConfigurationInfo* _baseModel;
	NSString* _configurationIdentifier;
	NSURL* _configurationURL;
	double _maxTimeToSync;
	struct {
		unsigned isDirty : 1;
		unsigned hasConfigurationIdentifier : 1;
		unsigned hasConfigurationURL : 1;
		unsigned hasMaxTimeToSync : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setConfigurationIdentifier:(id)arg1 ;
-(void)setConfigurationURL:(id)arg1 ;
-(void)setMaxTimeToSync:(double)arg1 ;
@end


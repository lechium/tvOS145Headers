/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentGroupMutating.h>

@class AFExperimentGroup, NSString, NSDictionary;

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating> {

	AFExperimentGroup* _baseModel;
	NSString* _identifier;
	unsigned long long _allocation;
	NSDictionary* _properties;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasAllocation : 1;
		unsigned hasProperties : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setAllocation:(unsigned long long)arg1 ;
@end


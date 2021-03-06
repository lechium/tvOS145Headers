/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFEndpointInfoMutating.h>

@class AFEndpointInfo, NSString;

@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating> {

	AFEndpointInfo* _baseModel;
	NSString* _identifier;
	NSString* _mediaRouteIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasMediaRouteIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setMediaRouteIdentifier:(id)arg1 ;
@end


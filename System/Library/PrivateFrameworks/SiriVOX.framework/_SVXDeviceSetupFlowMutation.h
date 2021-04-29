/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupFlowMutating.h>

@class SVXDeviceSetupFlow, NSString, NSArray;

@interface _SVXDeviceSetupFlowMutation : NSObject <SVXDeviceSetupFlowMutating> {

	SVXDeviceSetupFlow* _baseModel;
	NSString* _identifier;
	NSString* _languageCode;
	long long _gender;
	NSArray* _scenes;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasScenes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(void)setGender:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setScenes:(id)arg1 ;
@end
